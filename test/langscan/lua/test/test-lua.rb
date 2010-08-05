require 'test/unit'
require 'langscan/lua'

class TestLua < Test::Unit::TestCase
  def assert_fragments(expected, code)
    result = []
    LangScan::Lua.scan(code) {|f| result.push(f) }
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
    LangScan::Lua.scan(src) {|f|
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
    assert_fragments([[:string, %Q("s\\"")]], %Q("s\\""))
    assert_fragments([[:string, %Q("")]], %Q(""))
    assert_fragments([[:string, %Q('s\\'')]], %Q('s\\''))
    assert_fragments([[:string, %Q('')]], %Q(''))
    assert_fragments([[:string, %Q([[s\ns]])]], %Q([[s\ns]]))
  end

  def test_integers
    assert_fragments([[:integer, "123"]], "123")
  end

  def test_floatings
    assert_fragments([[:floating, "123.456"]], "123.456")
    assert_fragments([[:floating, "0.456"]], "0.456")
    assert_fragments([[:floating, "123.456e-2"]], "123.456e-2")
    assert_fragments([[:floating, "123.456E2"]], "123.456E2")
  end

  def test_fundefs
    assert_fragment_type(:fundef, "foo", "function foo()")
    assert_fragment_type(:fundef, "foo", "local function foo()")
    assert_fragment_type(:fundef, "foo", "foo = function()")
  end

  def test_funcalls
    assert_fragment_type(:funcall, "foo", "foo()")
    assert_fragment_type(:funcall, "foo", "a = foo()")
  end

end
