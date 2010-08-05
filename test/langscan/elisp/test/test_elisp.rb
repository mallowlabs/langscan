$LOAD_PATH << "../../.." unless $LOAD_PATH.include?("../../..")
require 'test/unit'
require 'langscan/elisp'

class TestEmacsLisp < Test::Unit::TestCase
  def assert_yield_any(recv, meth, *args)
    success = false
    recv.__send__(meth, *args) {|*block_args|
      if yield(*block_args)
        assert(true)
        success = true
        break
      end
    }
    assert(false, "no expected yields") unless success
  end

  def assert_yield_all(recv, meth, *args)
    recv.__send__(meth, *args) {|*block_args|
      if !yield(*block_args)
        assert(false, "unexpected yields")
        return
      end
    }
    assert(true)
  end

  def test_defun
    [
      {:str => "(defun foo () ())", :text => "foo"},
      {:str => "(defun foo (bar) ())", :text => "foo"},
      {:str => "(defun foo (bar) baz)", :text => "foo"},
      {:str => "(defun foo= (a) (= a a))", :text => "foo="}
    ].each {|src|
      assert_yield_any(LangScan::EmacsLisp, :scan, src[:str]) {|f|
        f.type == :fundef && f.text == src[:text]
      }
    }
  end

  def test_funcall
    [
      {:str => "(foo)", :text => "foo"},
      {:str => "(foo bar)", :text => "foo"},
      {:str => "(let ((a 1) (b 2)) (+ a b))", :text => "+"}
    ].each {|src|
      assert_yield_any(LangScan::EmacsLisp, :scan, src[:str]) {|f|
        f.type == :funcall && f.text == src[:text]
      }
    }
  end

  def test_defvar
    assert_yield_any(LangScan::EmacsLisp, :scan, "(defvar a 't)") {|f|
      f.type == :keyword && f.text == 'defvar'
    }
  end

  def test_setq
    assert_yield_any(LangScan::EmacsLisp, :scan, "(setq a 1)") {|f|
      f.type == :keyword && f.text == 'setq'
    }
  end

  def test_ident
    %w(foo foo= foo? char-to-string 1+ \+1 +-*/_~!@$%^&=:<>{}
    ).each {|src|
      assert_yield_any(LangScan::EmacsLisp, :scan, src) {|f|
        f.type == :ident
      }
    }
  end

  def test_quote
    [
      "'(a b c)",
      "`(a b c)",
      "(quote (a b c))",
      "(backquote (a b c))",
    ].each { |src|
      assert_yield_all(LangScan::EmacsLisp, :scan, src) {|f|
        f.type != :funcall
      }
    }
  end

  def test_character
    [
      '?a',
      '? ',
      '?\C-\\',
      '?\C-\M-m',
      '?\101',
      '?\)',
      '?\^Ij',
      '?\H-\M-\A-x'
    ].each { |src|
      assert_yield_any(LangScan::EmacsLisp, :scan, src) {|f|
        f.type == :character
      }
    }
  end

  def test_string
    [
      '"foo"',
      "\"foo\nbar\"",
      "\"foo\\\nbar\"",
      '"foo\"bar"',
      '"foo\\\\"',
    ].each { |src|
      assert_yield_any(LangScan::EmacsLisp, :scan, src) {|f|
        f.type == :string
      }
    }
  end

  def test_number
    %w( 1 -1 1050 10. +1 ).each { |src|
      assert_yield_any(LangScan::EmacsLisp, :scan, src) {|f|
        f.type == :integer
      }
    }
    %w( 1.0 -.1 4e10 10.3e4 +3.32e-10 ).each { |src|
      assert_yield_any(LangScan::EmacsLisp, :scan, src) {|f|
        f.type == :floating
      }
    }
  end

  def test_comment
    [
      '; comment',
      "(foo bar) ; comment"
    ].each { |src|
      assert_yield_any(LangScan::EmacsLisp, :scan, src) {|f|
        f.type == :comment
      }
    }
  end


  def assert_fragment_type(type, text, src)
    found = false
    LangScan::EmacsLisp.scan(src) {|f|
      if f.text == text
        if found
          raise "token #{text} occurred twice"
        else
          found = true
          assert_equal(type, f.type, "fragment type of #{text}")
        end
      end
    }
    unless found
      raise "token #{text} not found"
    end
  end

  def test_nest_in_quote
    assert_fragment_type(:ident, 'a', "'(a (b))")
    assert_fragment_type(:ident, 'a', "(quote (a (b)))")
    assert_fragment_type(:ident, 'b', "'(a (b))")
    assert_fragment_type(:ident, 'b', "`(a (b))")
    assert_fragment_type(:ident, 'b', "(backquote (a (b)))")
    assert_fragment_type(:funcall, 'b', "`(a ,(b))")
    assert_fragment_type(:funcall, 'b', "`(a ,@(b))")
  end

  def test_let_body
    assert_fragment_type(:funcall, 'y', "(let ((x 1)) ((y)))")
    assert_fragment_type(:funcall, 'y', "(let ((x 1) (z 2)) ((y)))")
    assert_fragment_type(:funcall, 'y', "(let ((x 1) (z 2)) (y))")
    assert_fragment_type(:ident, 'z', "(let ((x 1) (z 2)) ((y)))")
  end

end
