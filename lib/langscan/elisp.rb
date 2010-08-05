#
# elisp.rb - a elisp module of LangScan
#
# Copyright (C) 2005 Keisuke Nishida <knishida@open-cobol.org>
#               2005 Kenichi Ishibashi <bashi at dream.ie.ariake-nct.ac.jp>
#     All rights reserved.
#     This is free software with ABSOLUTELY NO WARRANTY.
#
# You can redistribute it and/or modify it under the terms of 
# the GNU General Public License version 2.
#

require 'langscan/elisp/elisp'
require 'langscan/_common'
require 'langscan/_pairmatcher'

module LangScan
  module EmacsLisp
    module_function
    def name
      "Emacs Lisp"
    end

    def abbrev
      "elisp"
    end

    def extnames
      [".el"]
    end

    # LangScan::EmacsLisp.scan iterates over Emacs Lisp program.
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
      reporter = lambda {|f|
        if (f.type == :ident || f.type == :funcall) && KeywordsHash[f.text]
          f.type = :keyword
        end
        if f.type == :quote_chars
          f.type = :punct
        end
        yield f
      }
      pm.parse(LangScan::EmacsLisp::Tokenizer.new(input), reporter) {|list|
        if (list.around_open(1).text == "defun" || list.around_open(1).text == "defmacro") && list.around_open(2).type == :ident
          list.around_open(2).type = :fundef
        end
        if list.around_open(1).type == :ident && funcall_list?(list)
          list.around_open(1).type = :funcall
        end
      }
    end

    def funcall_list?(list)
      if list.before_open_length == 0
        return true
      end
      if list.before_open_length >= 2 && list.around_open(-2).text == "defun"
        return false
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
          elsif after.text == 'backquote'
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
      defun defvar defmacro defgroup defcustom defconst and or
      condition-case function interactive require quote backquote
      lambda prog1 prog2 progn let let* if when unless cond catch throw
      save-current-buffer save-excursion save-restriction save-window-excurtion
      setq setq-default track-mouse unwind-protect while
      with-output-to-temp-buffer t nil
    )
    KeywordsHash = {}
    Keywords.each {|k| KeywordsHash[k] = k }

    NotFuncallWordsHash = {"lambda" => "lambda"}
    NotFuncall2ndOuterWordsHash = {"let" => "let", "let*" => "let*"}

    LangScan.register(self)
  end
end
