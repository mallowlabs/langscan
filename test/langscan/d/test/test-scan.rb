require 'test/unit'
require 'langscan/d'

class TestScanD < Test::Unit::TestCase
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
    assert_yield(LangScan::D, :scan, "a(1,2,3)") {|f|
      next if f.type != :funcall
      assert_equal(0, f.beg_byteno)
      #assert_equal(1, f.end_byteno)
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

  def test_funtype
    assert_yield_all(LangScan::D, :scan, "int fun(type (*)())") {|f|
      !(f.type == :fundef || f.type == :funcall || f.type == :fundecl) ||
      f.text == 'fun'
    }
  end

  def test_decl
    assert_yield_any(LangScan::D, :scan, "int f();") {|f|
      f.type == :fundecl && f.text == 'f'
    }
  end

  def test_preproc_defined
    assert_yield_all(LangScan::D, :scan, "#if defined(MACRO)\n") {|f|
      !(f.type == :funcall && f.text == 'defined')
    }
  end

  def test_fragment_and_function
    regions = {}
    LangScan::D.scan("a()") {|t|
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
      "int fun(void) {}",
      "int fun(int arg) {}",
    ].each {|src|
      result = false
      assert_yield(LangScan::D, :scan, src) {|f|
        if f.type == :fundef && f.text == 'fun'
          result = true
        end
      }
      assert(result, src)
    }
  end

  def test_extern_c
    src = 'extern "C" { void fun(); }'
    assert_yield_any(LangScan::D, :scan, src) {|f|
      f.type == :fundecl && f.text == 'fun'
    }
  end

  def test_keyword
    assert_yield_all(LangScan::D, :scan, "int()") {|f|
      f.type != :funcall
    }
  end

  def test_toplevel_comma
    assert_yield(LangScan::D, :scan, ",") {|f|
      assert_equal(LangScan::Fragment, f.class)
      assert_equal(:punct, f.type)
      assert_equal(",", f.text)
    }
  end

  def test_funcall
    result = []
    LangScan::D.scan("f(){g();}") {|f|
      next unless f.type == :fundef || f.type == :funcall
      result << [f.type, f.text]
    }
    assert_equal([[:fundef, 'f'], [:funcall, 'g']], result)
  end

  # C++

  def assert_fragment_type(type, text, src)
    found = false
    LangScan::D.scan(src) {|f|
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
  end

  def test_struct
    assert_fragment_type(:classdef, 'c', "struct c {};")
    assert_fragment_type(:classdef, 'c1', "struct c1 : c2 {};")
    assert_fragment_type(:classref, 'c2', "struct c1 : c2 {};") 
  end

  def check_scan(src)
    LangScan::D.scan(src) {|f|
      assert_equal(f.text, src[f.beg_byteno...f.end_byteno])
    }
  end

  def test_sharp_in_non_initial_state
    check_scan("struct x\n#;")
  end

  def test_fundef_returns_user_defined_type
    assert_fragment_type(:fundef, 'foo', 'VALUE foo() {}')
  end

  def test_classdescls
    assert_fragment_type(:classdef, 'Foo', 'class Foo { int a; }')
    assert_fragment_type(:classdef, 'Foo', 'class Foo { int a; } var;')
    assert_fragment_type(:classdef, 'Foo', 'abstract class Foo : A {}')
    assert_fragment_type(:classdef, 'Foo', 'class Foo : A, B {}')
    assert_fragment_type(:classdef, 'Foo', 'class Foo { class Inner {} }')
    assert_fragment_type(:classdef, 'Foo', 'interface Foo {}')
    assert_fragment_type(:classdef, 'Foo', 'struct Foo {}')
    assert_fragment_type(:classdef, 'Foo', 'union Foo {}')
    assert_fragment_type(:classdef, 'Foo', 'enum Foo {}')
  end

  def test_fundefs
    assert_fragment_type(:fundef, 'foo', 'VALUE foo() {}')
    assert_fragment_type(:fundef, 'foo', 'unittest { VALUE foo() {} }')
    assert_fragment_type(:fundef, 'foo', 'version(HOGE) { VALUE foo() {} }')
    assert_fragment_type(:fundef, 'foo', 'void x() { VALUE foo() {} }')
    assert_fragment_type(:fundef, 'foo', 'void x(...) { VALUE foo() {} }')
  end

  def test_fundecls
    assert_fragment_type(:fundecl, 'foo', 'VALUE foo();')
    assert_fragment_type(:fundecl, 'foo', 'void x() { class C { foo(); } }')
    assert_fragment_type(:fundecl, 'foo', 'version(HOGE) { VALUE foo(); }')
    assert_fragment_type(:fundecl, 'foo', 'template T { VALUE foo(); }')
    assert_fragment_type(:fundecl, 'foo', 'template T(T) { VALUE foo(); }')
    assert_fragment_type(:fundecl, 'foo', 'template T(T,T) { VALUE foo(); }')
    assert_fragment_type(:fundecl, 'foo', 'template T(T,T,T) { VALUE foo(); }')
    assert_fragment_type(:fundecl, 'foo', 'template T(T:char[]) { VALUE foo(); }')
    assert_fragment_type(:fundecl, 'foo', 'void x(int a, int b, int c, int d, ...) { class C { foo(); } }')
  end

  def test_funcalls
    assert_fragment_type(:funcall, 'foo', 'x(foo());')
    assert_fragment_type(:funcall, 'foo', 'void x() { foo(); }')
    assert_fragment_type(:funcall, 'foo', 'void x() { a.foo(); }')
    assert_fragment_type(:funcall, 'foo', 'unittest { VALUE foo(); }')
    assert_fragment_type(:funcall, 'foo', 'void x() body { VALUE foo(); }')
    assert_fragment_type(:funcall, 'foo', 'void x() in { VALUE foo(); }')
    assert_fragment_type(:funcall, 'foo', 'out { VALUE foo(); }')
    assert_fragment_type(:funcall, 'foo', 'void x() {{{{VALUE foo();}}}}')
    assert_fragment_type(:funcall, 'foo', 'for (int i=0; i<10; i++) { VALUE foo(); }')
    assert_fragment_type(:funcall, 'foo', 'void x() { debug(D) { VALUE foo(); } }')
    assert_fragment_type(:funcall, 'foo', 'void x() { with(c) { VALUE foo(); } }')
  end

  def test_delegates
    assert_fragment_type(:keyword, 'delegate', 'void delegate() fp;')
    assert_fragment_type(:keyword, 'delegate', 'return delegate void() {}')
    assert_fragment_type(:ident, 'type', 'return delegate type() {}')
    assert_fragment_type(:keyword, 'function', 'void function() fp;')
    assert_fragment_type(:keyword, 'function', 'return function type() {}')
    assert_fragment_type(:ident, 'type', 'return function type() {}')
  end

   def test_funcables
     assert_fragment_type(:keyword, 'new', 'c = new C();')
     assert_fragment_type(:keyword, 'delete', 'delete p;')
     assert_fragment_type(:keyword, 'this', 'return this;')
     assert_fragment_type(:keyword, '~this', '~this();')
   end
end
