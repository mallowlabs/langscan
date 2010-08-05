#
# lua.rb - a Lua module of LangScan
#
# Copyright (C) 2005 Shinichiro Hamaji <hamaji@nii.ac.jp>
#     All rights reserved.
#     This is free software with ABSOLUTELY NO WARRANTY.
#
# You can redistribute it and/or modify it under the terms of 
# the GNU General Public License version 2.
#

require 'langscan/_easyscanner'
require 'langscan/_pairmatcher'

module LangScan
  module Lua
    module_function
    def name
      "Lua"
    end

    def abbrev
      "lua"
    end

    def extnames
      [".lua"]
    end

    Pattern = [
      [:comment, '--.*'],
      [:string, '\\[\\[', '\\]\\]'],
      [:string, '""'],
      [:string, '"', '[^\\\\]"'],
      [:string, "''"],
      [:string, "'", "[^\\\\]'"],
      [:floating, '\\d+\\.\\d+(?:[eE]-?\\d+)?'],
      [:integer, '\\d+'],
      [:ident, "[a-zA-Z_]\\w*"],
      [:punct, '[*+-/^=<>(){}\\[\\];:,\\.]'],
      [:punct, '(?:~=|<=|>=|==|\\.\\.|\\.\\.\\.)'],
    ]

    Types = []

    Keywords = %w(and break do else elseif end false for function if in local
                  nil not or repeat return then true until while)

    def parse_token(t, new_tokens)
      if t.type == :ident
        t.type = :funcall
      end

      last_token = new_tokens.last
      return if last_token.nil?

      return unless t.type == :punct and last_token.type == :funcall

      if t.text == ':=' || t.text == '='
        last_token.type = :fundef
      end
    end

    def scan(input, &block)
      pm = LangScan::PairMatcher.new(3,2,2,2)
      pm.define_intertoken_fragment :comment, nil
      pm.define_pair :paren, :punct, "(", :punct, ")"
      pm.define_pair :brace, :punct, "{", :punct, "}"
      pm.define_pair :bracket, :punct, "[", :punct, "]"

      tokens = Array.new
      scanner = EasyScanner.new(Pattern, Types, Keywords)
      scanner.scan(input) do |t|
        tokens << [t.type, t.text, t.lineno, nil, t.byteno, nil, nil, nil]
      end

      def tokens.get_token
        self.shift
      end

      pm.parse(tokens, lambda {|f|
        if f.type == :ident
          f.type = IdentType[f.text]
        end
        yield f
      }) {|pair|
        if (pair.pair_type == :paren)
          fun = pair.around_open(-1)
          if (fun)
            if (fun.type == :ident)
              f = pair.around_open(-2)
              if (f && f.type == :keyword && f.text == 'function')
                fun.type = :fundef
              else
                fun.type = :funcall
              end
            elsif (fun.type == :keyword && fun.text == 'function')
              f = pair.around_open(-2)
              if (f && f.type == :punct && f.text == '=')
                f = pair.around_open(-3)
                if (f && f.type == :ident)
                  f.type = :fundef
                end
              end
            end
          end
        end
      }
    end

    IdentType = Hash.new(:ident)
    Keywords.each {|k| IdentType[k] = :keyword }

    LangScan.register(self)
  end
end
