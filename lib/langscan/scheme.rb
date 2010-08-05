#
# scheme.rb - a Scheme module of LangScan
#
# Copyright (C) 2005 Kenichi Ishibashi <bashi at dream.ie.ariake-nct.ac.jp>
#     All rights reserved.
#     This is free software with ABSOLUTELY NO WARRANTY.
#
# You can redistribute it and/or modify it under the terms of 
# the GNU General Public License version 2.
#
require 'langscan/scheme/scheme'
require 'langscan/_common'
require 'langscan/_pairmatcher'

class Struct::LangScanPair
  def each_outer
    ret = self
    while o = ret.outer
      yield o
    end
  end
end

module LangScan
  module Scheme
    module_function
    def name
      "Scheme"
    end


    def abbrev
      "scheme"
    end

    def extnames
      [".scm"]
    end

    # LangScan::Scheme.scan iterates over Scheme program.
    # It yields for each Fragment.
    def scan(input, &block)
      sorter = PairMatcher.fragmentsorter(block)
      scan_unsorted(input, &sorter)
    end

    def scan_unsorted(input, &block)
      pm = LangScan::PairMatcher.new(2,2,2,2)
      pm.define_intertoken_fragment :space, nil
      pm.define_intertoken_fragment :comment, nil
      pm.define_pair :paren, :punct, "(", :punct, ")"
      pm.define_pair :vector, :punct, "#(", :punct, ")"
      reporter = lambda {|f|
        if (f.type == :ident || f.type == :funcall) && KeywordsHash[f.text]
          f.type = :keyword
        end
        if f.type == :number
          f.type = if f.text.include?("i")
                     :imaginary
                   elsif f.text =~ /[.\/]|[0-9]#*[esfdl][0-9\-+]/
                     :floating
                   else
                     :integer
                   end
        end
        if f.type == :quote_chars
          f.type = :punct
        end
        yield f
      }
      pm.parse(LangScan::Scheme::Tokenizer.new(input), reporter) {|list|
        if list.around_open(1).type == :ident
          list.around_open(1).type = case
                                     when fundef_list?(list)
                                       :fundef
                                     when funcall_list?(list)
                                       :funcall
                                     else
                                       :ident
                                     end
        end
      }
    end

    def fundef_list?(list)
      if list.before_open_length >= 1 && list.around_open(-1).text == "define"
        return true
      end
      return false
    end

    def funcall_list?(list)
      if list.before_open_length == 0
        return true
      end
      if NotFuncallWordsHash[list.around_open(-1).text]
        return false
      end
      if quote_list?(list)
        return false
      end
      outer = list.outer
      second_outer = outer.outer unless outer == nil
      if second_outer and NotFuncall2ndOuterWordsHash[second_outer.around_open(1).text]
        if NotFuncall2ndOuterWordsHash[outer.around_open(-1).text]
          return false
        end
      end
      return true
    end

    def quote_nestlevel(str)
      str.count("`") - str.count(",")
    end

    def quote_list?(list)
      l = list
      nest = 0
      while l
        if l.before_open_length >= 1
          before = l.around_open(-1)
          if before.type == :quote_chars
            return true if before.text.include?("'")
            nest = nest + quote_nestlevel(before.text)
          end
        end
        if l.after_open_length >= 1
          after = l.around_open(1)
          if after.text == 'quote'
            return true
          elsif after.text == 'quasiquote'
            nest = nest + 1
          elsif after.text == 'unquote'
            nest = nest - 1
          end
        end
        l = l.outer
      end
      return nest > 0
    end

    Keywords = %w(
      else => define unquote unquote-splicing quote lambda if
      set! begin cond and or case let let* letrec do delay quasiquote
      syntax-rules define-syntax
    )
    KeywordsHash = {}
    Keywords.each {|k| KeywordsHash[k] = k }

    NotFuncallWordsHash = {"lambda" => "lambda"}

    NotFuncall2ndOuterWords = %w(
      let let* letrec let-syntax letrec-syntax do
    )
    NotFuncall2ndOuterWordsHash = {}
    NotFuncall2ndOuterWords.each {|k| NotFuncall2ndOuterWordsHash[k] = k }

    LangScan.register(self)
  end
end
