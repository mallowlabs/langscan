require 'test/unit'
require 'langscan/eiffel'

class TestEiffel < Test::Unit::TestCase
  def assert_fragments(expected, code)
    result = []
    LangScan::Eiffel.scan(code) {|f| result.push(f) }
    fragments = []
    result.each {|fragment|
      type, text = fragment.to_a
      unless type == :punct
        fragments << [type, text]
      end
    }
    assert_equal(expected, fragments)
  end

  def assert_fragment_type(type, text, src)
    found = false
    LangScan::Eiffel.scan(src) {|f|
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

  def test_comments
    assert_fragments([[:comment, "-- c"]], "-- c")
  end

  def test_strings
    assert_fragments([[:string, %Q("s%"")]], %Q("s%""))
    assert_fragments([[:string, %Q("")]], %Q(""))
    assert_fragments([[:character, %Q('%'')]], %Q('%''))
    assert_fragments([[:character, %Q('c')]], %Q('c'))
    assert_fragments([[:string, %Q("s%\ns")]], %Q("s%\ns"))
  end

  def test_integers
    assert_fragments([[:integer, "123"]], "123")
    assert_fragments([[:integer, "1_234"]], "1_234")
  end

  def test_floatings
    assert_fragments([[:floating, "1_234.456"]], "1_234.456")
    assert_fragments([[:floating, ".456"]], ".456")
    assert_fragments([[:floating, "123."]], "123.")
    assert_fragments([[:floating, "123.456e-2"]], "123.456e-2")
    assert_fragments([[:floating, "123.456E2"]], "123.456E2")
    assert_fragments([[:floating, "123.456E+2"]], "123.456E+2")
    assert_fragments([[:floating, ".E+2"]], ".E+2")
    assert_fragments([], ".")
  end

  def test_keywords
    assert_fragment_type(:keyword, 'feature', 'feature')
    assert_fragment_type(:keyword, 'fEAtUrE', 'fEAtUrE')
  end

  def test_fundefs
    assert_fragment_type(:fundef, 'foo', 'foo() is do')
    assert_fragment_type(:fundef, 'foo', 'foo(p : INTEGER) is')
    assert_fragment_type(:fundef, 'foo', 'foo(p : INTEGER) : INTEGER is')
    assert_fragment_type(:fundef, 'foo', 'foo is do')
    assert_fragment_type(:fundef, 'foo', 'foo: INTEGER is local')
    assert_fragment_type(:fundef, 'foo', "foo: INTEGER is --comment\nexternal")

    assert_fragment_type(:ident, 'foo', 'foo is REAL')
    assert_fragment_type(:ident, 'foo', 'f (p : INTEGER) : foo is once')
  end

  def test_funcalls
    assert_fragment_type(:funcall, 'foo', 'foo();')
    assert_fragment_type(:funcall, 'foo', 'a.foo(p);')
  end

  def test_renames
    assert_fragment_type(:fundef, 'foo', 'rename f as foo')
    assert_fragment_type(:ident, 'foo', 'rename foo as f')
    assert_fragment_type(:fundef, 'foo', 'rename b as bar, f as foo')
  end

  def test_classdefs
    assert_fragment_type(:classdef, 'foo', 'class foo')
  end

end
