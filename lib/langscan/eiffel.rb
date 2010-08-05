#
# eiffel.rb - a Eiffel module of LangScan
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
  module Eiffel
    module_function
    def name
      "Eiffel"
    end

    def abbrev
      "eiffel"
    end

    def extnames
      [".e"]
    end

    Pattern = [
      [:comment, '--.*'],
      [:character, "'%.'"],
      [:character, "'[^%]'"],
      [:string, '""'],
      [:string, '"', '[^%]"'],
      [:floating, '(?:\\d[\\d_]*)?\\.(?:\\d[\\d_]*)?(?:[eE][+-]?(?:\\d[\\d_]*))?'],
      [:integer, '\\d[\\d_]*'],
      [:ident, "[a-zA-Z]\\w*"],
      [:punct, '[()]'],
      [:punct, '[!$*+-/^~=<>{}\\[\\];:,\\.@\\\\]+'],  # rough.
    ]

    Types = %w(INTEGER REAL DOUBLE CHARACTER BOOLEAN)

    Keywords = %w(alias all and as check class creation debug deferred do
                  else elseif end ensure expanded export external feature from
                  frozen if implies indexing infix inherit inspect invariant is
                  like local loop not obsolete old once or prefix redefine
                  rename require rescue retry select separate then undefine
                  until variant when xor
                  BIT Current False Precursor Result Strip True Unique)

    class Eof < Exception
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

    def back_token(tkns, i, type, name)
      i -= 1 while (i >= 0 && !check_token(tkns, i, type, name))
      i
    end

    def scan(input, &block)
      tkns = Array.new
      scanner = EasyScanner.new(Pattern, Types, Keywords)
      scanner.scan(input) do |f|
        if f.type == :ident
          f.type = IdentType[f.text.downcase]
        elsif f.type == :floating && f.text == '.'
          f.type = :punct
        end
        tkns << f
      end

      begin
        i = 0
        while (i < tkns.size)
          if (check_token(tkns, i, :punct, ')'))
            j = back_token(tkns, i-1, :punct, '(')
            j = go_prev(tkns, j, 1)
            if (j >= 0 && check_token(tkns, j, :ident))
              if (check_token_next(tkns, i, 1, :keyword, 'is') ||
                  check_token_next(tkns, i, 1, :punct, ':'))
                tkns[j].type = :fundef
                i += 1 while (!check_token(tkns, i, :keyword))
              else
                tkns[j].type = :funcall
              end
            end
          elsif (check_token(tkns, i, :keyword, 'is'))
            if (check_token_next(tkns, i, 1, :keyword, 'do') ||
                check_token_next(tkns, i, 1, :keyword, 'local') ||
                check_token_next(tkns, i, 1, :keyword, 'require') ||
                check_token_next(tkns, i, 1, :keyword, 'once') ||
                check_token_next(tkns, i, 1, :keyword, 'external'))
              if (check_token_prev(tkns, i, 3, :ident) &&
                  check_token_prev(tkns, i, 2, :punct, ':') &&
                  (check_token_prev(tkns, i, 1, :ident) ||
                   check_token_prev(tkns, i, 1, :type)))
                tkns[go_prev(tkns, i, 3)].type = :fundef
              elsif (check_token_prev(tkns, i, 1, :ident))
                tkns[go_prev(tkns, i, 1)].type = :fundef
              end
            end
          elsif (check_token(tkns, i, :keyword, 'class'))
            if (check_token_next(tkns, i, 1, :ident))
              tkns[go_next(tkns, i, 1)].type = :classdef
            end
          elsif (check_token(tkns, i, :keyword, 'rename'))
            while (check_token_next(tkns, i, 1, :ident) &&
                   check_token_next(tkns, i, 2, :keyword, 'as') &&
                   check_token_next(tkns, i, 3, :ident))
              tkns[i = go_next(tkns, i, 3)].type = :fundef
              i = go_next(tkns, i, 1)
              break if (!check_token(tkns, i, :punct, ','))
            end
          end

          i += 1

        end
      rescue Eof
      end

      tkns.each do |f|
        yield f
      end

    end

    IdentType = Hash.new(:ident)
    Keywords.each {|k| IdentType[k.downcase] = :keyword }
    Types.each {|k| IdentType[k] = :type }

    LangScan.register(self)
  end
end
