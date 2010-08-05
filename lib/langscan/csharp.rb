#
# csharp.rb - a C# module of LangScan
#
# Copyright (C) 2005 Kenichi Ishibashi <bashi at dream.ie.ariake-nct.ac.jp>
#     All rights reserved.
#     This is free software with ABSOLUTELY NO WARRANTY.
#
# You can redistribute it and/or modify it under the terms of 
# the GNU General Public License version 2.
#

require 'langscan/csharp/csharp'
require 'langscan/_common'
require 'langscan/_pairmatcher'

module LangScan
  module Csharp
    module_function
    def name
      "C#"
    end

    def abbrev
      "csharp"
    end

    def extnames
      [".cs"]
    end

    # LangScan::Csharp.scan iterates over Csharp program.
    # It yields for each Fragment.
    def scan(input, &block)
      sorter = PairMatcher.fragmentsorter(block)
      scan_unsorted(input, &sorter)
    end

    def scan_unsorted(input, &block)
      pm = LangScan::PairMatcher.new(1,0,0,1)
      pm.define_intertoken_fragment :space, nil
      pm.define_intertoken_fragment :comment, nil
      pm.define_pair :paren, :punct, "(", :punct, ")"
      pm.parse(LangScan::Csharp::Tokenizer.new(input), lambda {|f|
        if f.type == :ident
          f.type = IdentType[f.text]
        end
        if f.type == :delegate
          f.type = :ident
        end
        yield f
      }) {|pair|
        if 1 <= pair.before_open_length &&
           pair.around_open(-1).type == :ident &&
           IdentType[pair.around_open(-1).text] == :ident
          before_open_token = pair.around_open(-1)
          if !KeywordsHash[before_open_token.text]
            if !(outer = pair.outer) || !outer.outer
              if 1 <= pair.after_close_length &&
                 (pair.around_close(1).type == :punct &&
                  pair.around_close(1).text == '{' ||
                  pair.around_close(1).text == ':')
                before_open_token.type = :fundef
              else
                before_open_token.type = :funcall
              end
            else
              before_open_token.type = :funcall
            end
          end
        end
      }
    end

    Keywords = %w(
      abstract as base bool break byte case catch char checked class const
      continue decimal default delegate do double else enum event explicit
      extern false finally fixed float for foreach goto if implicit in int
      interface internal is lock long namespace new null object operator
      out override params private protected public readonly ref return sbyte
      sealed short sizeof stackalloc static string struct switch this throw
      true try typeof uint ulong unchecked unsafe ushort using virtual void
      volatile while
    )
    KeywordsHash = {}
    Keywords.each {|k| KeywordsHash[k] = k }

    Types = %w(
      bool byte char double decimal float int long sbyte short uint ulong
      ushort void
    )
    TypesHash = {}
    Types.each {|k| TypesHash[k] = k }

    IdentType = Hash.new(:ident)
    Keywords.each {|k| IdentType[k] = :keyword }
    Types.each {|k| IdentType[k] = :type }

    LangScan.register(self)
  end
end

