require 'test/unit'
require 'langscan/csharp'

class TestCsharp < Test::Unit::TestCase
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

  def test_token_position
    assert_yield(LangScan::Csharp, :scan, "a(1,2,3)") {|f|
      next if f.type != :funcall
      assert_equal(0, f.beg_byteno)
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

  def test_name
    assert_yield_any(LangScan::Csharp, :scan, "a()") {|f|
      f.type == :funcall && f.text == 'a'
    }
  end


  def test_delegate
    assert_yield_any(LangScan::Csharp, :scan, "delegate int f();") {|f|
      f.type == :ident && f.text == 'f'
    }
  end


  def test_fragment_and_function
    regions = {}
    LangScan::Csharp.scan("a()") {|t|
      f = t
      f = f.name_token if f.respond_to? :name_token
      r = f.beg_byteno
      assert(!regions.include?(r), "duplicate token: #{regions[r].inspect} and #{t.inspect}")
      regions[r] = t
    }
  end

  def test_funcdef
    [
      "int fun() {}",
      "int fun(int arg) {}",
      "public static void fun() {}",
      "int fun() /* comment */ {}",
      "int fun() // comment\n {}",
    ].each {|src|
      result = false
      assert_yield(LangScan::Csharp, :scan, src) {|f|
        if f.type == :fundef && f.text == 'fun'
          result = true
        end
      }
      assert(result, src)
    }
  end

  def test_keyword
    assert_yield_all(LangScan::Csharp, :scan, "int()") {|f|
      f.type != :funcall
    }
  end

  def test_funcall
    result = []
    LangScan::Csharp.scan("f(){g();}") {|f|
      next unless f.type == :fundef || f.type == :funcall
      result << [f.type, f.text]
    }
    assert_equal([[:fundef, 'f'], [:funcall, 'g']], result)
  end

  def assert_fragment_type(type, text, src)
    found = false
    LangScan::Csharp.scan(src) {|f|
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

  def test_class
    assert_fragment_type(:classdef, 'c', "class c {};")
    assert_fragment_type(:classdef, 'c1', "class c1 : c2 {};")
    assert_fragment_type(:classref, 'c2', "class c1 : c2 {};") 
    assert_fragment_type(:classref, 'c4', "class c1 : c2.c3.c4 {};") 
  end

  def test_struct
    assert_fragment_type(:classdef, 'c', "struct c {};")
    assert_fragment_type(:classdef, 'c1', "struct c1 : c2 {};")
    assert_fragment_type(:classref, 'c2', "struct c1 : c2 {};") 
  end

  def check_scan(src)
    LangScan::Csharp.scan(src) {|f|
      assert_equal(f.text, src[f.beg_byteno...f.end_byteno])
    }
  end

  def test_sharp_in_non_initial_state
    check_scan("struct x\n#;")
  end

  def test_invalid_escape_sequence
    assert_fragment_type(:string, '"\w"', '"\w"')
    assert_fragment_type(:string, '"foo\bar.h"', 'str = "foo\bar.h"')
  end

  def test_fundef_returns_user_defined_type
    assert_fragment_type(:fundef, 'foo', 'VALUE foo() {}')
  end

end
