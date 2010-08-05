#
# ocaml.rb - a OCaml module of LangScan
#
# Copyright (C) 2005 Soutaro Matsumoto <matsumoto@soutaro.com>
#     All rights reserved.
#     This is free software with ABSOLUTELY NO WARRANTY.
#
# You can redistribute it and/or modify it under the terms of 
# the GNU General Public License version 2.
#

require 'langscan/_common'

module LangScan
  module OCaml
    CAMLEXER_PATH = $LOAD_PATH.map{|path|
      File.join(path, "langscan/ocaml/camlexer")
    }.find {|path| File.file?(path) }

    class Eof < Exception
    end

    class Tokenizer
      SYMBOL_TBL = {
        "text" => :text,
        "ident" => :ident,
        "punct" => :punct,
        "keyword" => :keyword,
        "comment" => :comment,
        "integer" => :integer,
        "float" => :float,
        "string" => :string,
        "character" => :character,
        "funcdef" => :funcdef         # not implemented yet
      }

      def initialize(input)
        @io = IO.popen(CAMLEXER_PATH, "r+")
        @tin = Thread.start {
          input.each {|l|
            @io.puts(l)
          }
          @io.close_write()
        }
      end
      
      def dispose()
        @tin.join()
        @io.close()
      end

      def denormalize(str)
        str.gsub(/([^\\])\\o/,'\1'+"\n")
      end

      def get_token()
        if @io.eof? 
          nil
        else
          lno, cno, tp, wd = @io.gets().chomp().split(":",4)
          Fragment.new(SYMBOL_TBL[tp], denormalize(wd), lno.to_i(), cno.to_i())
        end
      end
      
    end
    
    module_function

    def name
      "Objective Caml"
    end

    def abbrev
      "ocaml"
    end

    def extnames
      [".ml", ".mli", ".mll", ".mly"]
    end

    def check_token(tkns, index, type, name = nil)
      t = tkns[index]
      raise Eof.new if !t
      return t.type == type && (!name || t.text == name)
    end

    def go_next(tkns, index, step)
      for i in 0...step
        index += 1
        index += 1 while (check_token(tkns, index, :comment))
      end
      index
    end

    def check_token_next(tkns, index, step, type, name = nil)
      index = go_next(tkns, index, step)
      check_token(tkns, index, type, name)
    end

    def go_prev(tkns, index, step)
      for i in 0...step
        index -= 1
        index -= 1 while (check_token(tkns, index, :comment))
      end
      index
    end

    def check_token_prev(tkns, index, step, type, name = nil)
      index = go_prev(tkns, index, step)
      check_token(tkns, index, type, name)
    end

    def skip_type(tkns, i)
      while (check_token(tkns, i, :punct, '->') ||
             check_token(tkns, i, :punct, '.') ||
             check_token(tkns, i, :punct, ':') ||
             check_token(tkns, i, :punct, '(') ||
             check_token(tkns, i, :punct, ')') ||
             check_token(tkns, i, :punct, '*') ||
             check_token(tkns, i, :comment) ||
             check_token(tkns, i, :ident))
        i += 1
      end
      i
    end

    def skip_parameter(tkns, i)
      t = tkns[i]
      return i if !t
      if (t.type == :punct && (t.text == '(' || t.text =~ /^\[\|?/))
        i = go_next(tkns, i, 1)
        first = i
        del = { '(' => ')', '[' => ']', '[|' => '|]' }[t.text]
        while (!check_token(tkns, i, :punct, del))
          i = go_next(tkns, i, 1)
        end
        convert_fun(tkns, first, i)
      end
      i = go_next(tkns, i, 1)
    end

    def is_first_parameter?(tkns, index)
      t = tkns[index]
      return false if !t

      if (t.type == :string || t.type == :character)
        return true
      end

      if (t.type == :keyword)
        return (t.text == '()')
      end

      if (t.type == :integer || t.type == :float)
        return (t.text !~ /^-/)
      end

      if (t.type == :ident)
        return (t.text != 'array' && t.text != 'list' && t.text != 'option')
      end

      if (t.type == :punct)
        return (t.text == '(' || t.text =~ /^\[\|?/)
      end

      return false
    end

    def is_method?(tkns, i)
      if (check_token_prev(tkns, i, 1, :keyword, 'virtual'))
        i = go_prev(tkns, i, 1)
      end
      if (check_token_prev(tkns, i, 1, :keyword, 'private'))
        i = go_prev(tkns, i, 1)
      end
      check_token_prev(tkns, i, 1, :keyword, 'method')
    end

    def is_parameter?(tkns, index)
      return true if (is_first_parameter?(tkns, index))

      t = tkns[index]
      return false if !t

      if (t.type == :punct)
        if (t.text == '.' || t.text == '#')
          return true
        end
      end

      return false
    end

    def convert_fun(tkns, i, max)
      begin
        while (i < max)
          t = tkns[i]
          if (t.type == :ident)
            if (check_token_prev(tkns, i, 1, :keyword, 'fun'))
              while (!check_token(tkns, i, :punct, '->'))
                i = go_next(tkns, i, 1)
              end
            elsif (check_token_prev(tkns, i, 1, :keyword, 'let') ||
                   (check_token_prev(tkns, i, 1, :keyword, 'rec') &&
                    check_token_prev(tkns, i, 2, :keyword, 'let')))
              if (!check_token_next(tkns, i, 1, :punct, '='))
                t.type = :fundef
                i += 1 while (!check_token(tkns, i, :punct, '='))
              end
            elsif (check_token_prev(tkns, i, 1, :keyword, 'val') ||
                   (check_token_prev(tkns, i, 1, :keyword, 'mutable') &&
                    check_token_prev(tkns, i, 2, :keyword, 'val')) ||
                   check_token_prev(tkns, i, 1, :keyword, 'external'))
              if (check_token_next(tkns, i, 1, :punct, ':'))
                # not strict
                i = go_next(tkns, i, 2)
                while (!check_token(tkns, i, :keyword))
                  if (check_token(tkns, i, :punct, '->'))
                    t.type = :fundecl
                    i = skip_type(tkns, i+1)
                    break
                  end
                  i = go_next(tkns, i, 1)
                end
              else
                # what?
              end
            elsif (is_method?(tkns, i))
              if (check_token_next(tkns, i, 1, :punct, ':'))
                t.type = :fundecl
                i = go_next(tkns, i, 2)
                i = skip_type(tkns, i)
              else
                t.type = :fundef
                i += 1 while (!check_token(tkns, i, :punct, '='))
              end
            elsif (!check_token_prev(tkns, i, 1, :punct, ':') &&
                   !check_token_prev(tkns, i, 1, :punct, '*') &&
                   !check_token_prev(tkns, i, 1, :punct, '\'') &&
                   !check_token_prev(tkns, i, 1, :punct, '~') &&
                   !check_token_prev(tkns, i, 1, :punct, '?') &&
                   !check_token_prev(tkns, i, 1, :punct, '|') &&
                   !check_token_prev(tkns, i, 1, :keyword, 'with'))
              # is it call?
              i = go_next(tkns, i, 1)
              if (check_token_prev(tkns, i, 2, :punct, '#') ||
                  is_first_parameter?(tkns, i))
                t.type = :funcall
                i = skip_parameter(tkns, i)
                while (is_parameter?(tkns, i))
                  i = skip_parameter(tkns, i)
                end
              end
            end
          elsif (check_token(tkns, i, :keyword, 'of') ||
#                 check_token(tkns, i, :punct, '|') ||  # overrun ->
                 check_token(tkns, i, :punct, ':>'))
            # is it needed?
            i = skip_type(tkns, i+1)
            i = go_prev(tkns, i, 1)
          elsif (check_token(tkns, i, :keyword, 'class'))
            i = go_next(tkns, i, 1) while (!check_token(tkns, i, :punct, '='))
          end

          i += 1
        end
      rescue Eof
      end
    end

    # LangScan::OCaml.scan iterates over Objective Caml program.
    # It yields for each Fragment.
    def scan(input, &block)
      tokenizer = Tokenizer.new(input)

      tkns = Array.new
      while (tkn = tokenizer.get_token())
        # is it ok?
        if (tkn.type == :ident && tkn.text =~ /^\W/)
          tkn.type = :punct
        end
        tkns << tkn
      end

      convert_fun(tkns, 0, tkns.size)

      tkns.each do |tkn|
        yield tkn
      end
      
      tokenizer.dispose()
    end

    if CAMLEXER_PATH
      LangScan.register(self)
    end
  end
end
