require 'test/unit'
require 'langscan/scheme'

class TestScheme < Test::Unit::TestCase
  def assert_yield(recv, meth, *args)
    yielded = false
    recv.__send__(meth, *args) {|*block_args|
      yielded = true
      yield(*block_args)
    }
    assert(yielded, "block not yielded")
  end
  
  def assert_not_yield(recv, meth, *args)
    yielded = false
    recv.__send__(meth, *args) {|*block_args|
      assert(false, "block yielded")
    }
  end
  
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
  
  def test_fundef
    [
      {:str => "(define (foo))", :text => "foo"},
      {:str => "(define (foo bar))", :text => "foo"},
      {:str => "(define (foo bar) baz)", :text => "foo"},
      {:str => "(define (foo= a) (= a a))", :text => "foo="}
    ].each {|src|
      assert_yield_any(LangScan::Scheme, :scan, src[:str]) {|f|
        f.type == :fundef && f.text == src[:text]
      }
    }
  end
  
  def test_funcall
    [
      {:str => "(foo)", :text => "foo"},
      {:str => "(foo bar)", :text => "foo"},
      {:str => "(let ((a 1) (b 2)) (+ a b))", :text => "+"},
      {:str => "(do ((i 0 (+ i 1))) ((= i 10)) (foo))", :text => "foo"}
    ].each {|src|
      assert_yield_any(LangScan::Scheme, :scan, src[:str]) {|f|
        f.type == :funcall && f.text == src[:text]
      }
    }
  end

  def test_string
    [
      '"foo"',
      %Q!"foo\nbar"!,
      '"foo\"bar"',
      '"foo\\"',
    ].each { |src|
      assert_yield(LangScan::Scheme, :scan, src) {|f|
        f.type == :string
      }
    }
  end
  
  def test_ident
    %w(foo foo= foo? + <=>? @foo fo!o ~foo foo^ foo$ &foo ** +- .foo
       /hoge:
    ).each {|src|
      assert_yield_any(LangScan::Scheme, :scan, src) {|f|
        f.type == :ident
      }
    }
  end

  def test_quote
    [
      "'(a b c)",
      "(quote (a b c)",
      "(quasiquote (a b c))",
    ].each { |src|
      assert_yield_all(LangScan::Scheme, :scan, src) {|f|
        f.type != :funcall
      }
    }
  end

  def test_number
    %w(
      1 -1 1050 #d1 #o0766 #b10 #xab  #d#e16 #e#x1f #e10
    ).each { |src|
      assert_yield_any(LangScan::Scheme, :scan, src) {|f|
        f.type == :integer
      }
    }

    %w(
      10.5 .543 .5e-5 10e10 10e-10 10#f4 10##.#d2 10/4 #xe/f
    ).each { |src|
      assert_yield_any(LangScan::Scheme, :scan, src) {|f|
        f.type == :floating
      }
    }

    %w(
      3+i +i -i 0+i 0-10i #d0-10i -10i #x-i #d+i #x1+2i #xab+2i
      #x1-2i #xa-2i #xa-i #xab/cd+1/23#i
    ).each { |src|
      assert_yield_any(LangScan::Scheme, :scan, src) {|f|
        f.type == :imaginary
      }
    }
  end

  def test_comment
    [
      '; comment',
      "(foo bar) ; comment"
    ].each { |src|
      assert_yield_any(LangScan::Scheme, :scan, src) {|f|
        f.type == :comment
      }
    }
  end
  
  def test_space
    [
      '\  ',
      "' 'foo bar"
    ].each { |src|
      assert_yield_any(LangScan::Scheme, :scan, src) {|f|
        f.type == :space
      }
    }
  end

  def assert_fragment_type(type, text, src)
    found = false
    LangScan::Scheme.scan(src) {|f|
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

  def self.define_assert_fragment_type(name, type, text, src)
    self.module_eval {
      define_method("test_#{name}") {
        assert_fragment_type(type, text, src)
      }
    }
  end

  def test_nest_in_quote
    assert_fragment_type(:ident, 'a', "'(a (b))")
    assert_fragment_type(:ident, 'a', "(quote (a (b)))")
    assert_fragment_type(:ident, 'b', "'(a (b))")
    assert_fragment_type(:ident, 'b', "`(a (b))")
    assert_fragment_type(:ident, 'b', "(quasiquote (a (b)))")
    assert_fragment_type(:ident, 'b', "(quasiquote `(a (unquote (b))))")
    assert_fragment_type(:funcall, 'b', "`(a ,(b))")
    assert_fragment_type(:funcall, 'b', "``(a ,,(b))")
    assert_fragment_type(:funcall, 'b', "`(a ,@(b))")
    assert_fragment_type(:funcall, 'b', "(quasiquote `(a (unquote ,(b))))")
  end

  def test_let_body
    assert_fragment_type(:funcall, 'y', "(let ((x 1)) ((y)))")
    assert_fragment_type(:funcall, 'y', "(let ((x 1) (z 2)) ((y)))")
    assert_fragment_type(:funcall, 'y', "(let ((x 1) (z 2)) (y))")
    assert_fragment_type(:ident, 'z', "(let ((x 1) (z 2)) ((y)))")
  end

end
