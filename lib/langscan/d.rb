#
# d.rb - a D module of LangScan
#
# Copyright (C) 2005 Shinichiro Hamaji <hamaji@nii.ac.jp>
#     All rights reserved.
#     This is free software with ABSOLUTELY NO WARRANTY.
#
# You can redistribute it and/or modify it under the terms of 
# the GNU General Public License version 2.
#

require 'langscan/d/d'
require 'langscan/_common'
require 'langscan/_pairmatcher'

module LangScan
  module D
    module_function

    DEFAULT_ALLOW_TEMPLATE_PARAMETERS = 3

    def name
      "D"
    end

    def abbrev
      "d"
    end

    def extnames
      [".d"]
    end

    def is_fun?(fun)
      fun.type == :ident && IdentType[fun.text] == :ident
    end

    def is_fundef?(pair)
      1 <= pair.after_close_length &&
        (pair.around_close(1).type == :punct &&
           /\A\{\z/ =~ pair.around_close(1).text)
    end

    def is_template?(pair)
      t = pair.around_open(-2)
      if (t && (t.text == 'template'))
        return true
      end

      return false
    end

    def is_new?(pair)
      t = pair.around_open(-2)
      if (t && (t.text == 'new'))
        return true
      end

      return false
    end

    def is_fplike?(pair)
      if pair.around_open(1) && pair.around_open(1).text == '*'
        pair.around_close(1) && pair.around_close(1).text == '('
        # type (*arg)());
        return true
      end

      t = pair.around_open(-2)
      if (t && (t.text == 'delegate' || t.text == 'function'))
        return true
      end

      return false
    end

    def get_funtype(o)
      return :fundecl if (!o)

      return :funcall if (o.pair_def[1] != '{')

      l = o.around_open(-1)

      return :fundecl if (!l || l.type == :classdef)

      lt = l.text

      if (lt == 'in' || lt == 'out' || lt == 'body' || lt == 'unittest')
        return :funcall
      end

      if (lt == ')')
        i = -2
        while (o.around_open(i) && o.around_open(i).text != '(')
          i -= 1
        end

        # mismatched paren not reached, this is if or for or...
        return :funcall if (!o.around_open(i))

        l2 = o.around_open(i-1)
        # this is if or for or...
        return :funcall if (!l2)

        l2t = l2.text

        if (l2t != 'version' && l2t != 'extern' && l2t != 'debug' && l2t != 'pragma')
          l3 = o.around_open(i-2)
          return :fundecl if (l3 && l3.text == 'template')

          return :funcall
        end

      end

      get_funtype(o.outer)
    end

    # LangScan::D.scan iterates over D program.
    # It yields for each element which is interested by gonzui. 
    #
    def scan(input, atp = DEFAULT_ALLOW_TEMPLATE_PARAMETERS, &block)
      sorter = PairMatcher.fragmentsorter(block)
      scan_unsorted(input, atp, &sorter)
    end

    def scan_unsorted(input, atp = DEFAULT_ALLOW_TEMPLATE_PARAMETERS, &block)
      before_num = 3 + atp * 2
      before_num = 4 if (before_num < 4)

      pm = LangScan::PairMatcher.new(before_num,2,2,2)
      pm.define_intertoken_fragment :space, nil
      pm.define_intertoken_fragment :preproc, nil
      pm.define_intertoken_fragment :comment, nil
      pm.define_pair :paren, :punct, "(", :punct, ")"
      pm.define_pair :brace, :punct, "{", :punct, "}"
      pm.define_pair :bracket, :punct, "[", :punct, "]"
      pm.parse(LangScan::D::Tokenizer.new(input), lambda {|f|
        if f.type == :ident
          f.type = IdentType[f.text]
        end
        yield f
      }) {|pair|
        if pair.pair_type == :paren
          if 1 <= pair.before_open_length
            fun = pair.around_open(-1)
            if is_fun?(fun)
              # ident(...)
              if is_new?(pair)
                fun.type = :classref
              elsif is_template?(pair)
                fun.type = :moduledef
              elsif is_fplike?(pair)
              elsif is_fundef?(pair)
                # name(...) { ... }
                fun.type = :fundef
              else
                outer = pair.outer
                fun.type = get_funtype(outer)
              end
            end
          end
        end
      }
    end

    Keywords = %w(
      abstract alias align asm assert auto bit body break byte
      case cast catch cdouble cent cfloat char class const continue creal
      dchar debug default delegate delete deprecated do double
      else enum export extern false final finally float for foreach function
      goto idouble if ifloat import in inout int interface invariant ireal is
      long mixin module new null out override package pragma private protected
      public real return short static struct super switch synchronized
      template this ~this throw true try typedef typeid typeof ubyte
      ucent uint ulong union unittest ushort version void volatile
      wchar while with
    )
    KeywordsHash = {}
    Keywords.each {|k| KeywordsHash[k] = k }

    Types = %w(bool char double float int long short void)
    TypesHash = {}
    Types.each {|k| TypesHash[k] = k }

    IdentType = Hash.new(:ident)
    Keywords.each {|k| IdentType[k] = :keyword }
    Types.each {|k| IdentType[k] = :type }

    # for debug
    def D.each_fragment(input)
      tokenizer = LangScan::D::Tokenizer.new(input)
      while t = tokenizer.get_token
        yield t
      end
    end

    LangScan.register(self)
  end
end

