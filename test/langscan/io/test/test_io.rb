require 'test/unit'
require 'langscan/io'

class TestIo < Test::Unit::TestCase
  def assert_fragments(expected, code)
    result = []
    LangScan::Io.scan(code) {|f| result.push(f) }
    fragments = []
    result.each {|fragment|
      type, text = fragment.to_a
      unless type == :punct
        fragments << [type, text]
      end
    }
    assert_equal(expected, fragments)
  end

  def assert_punct(expected, code)
    num = 0
    LangScan::Io.scan(code) {|f|
      assert_equal(:punct, f.type)
      assert_equal(expected, f.text)
      num += 1
    }
    assert_equal(1, num)
  end

  def test_comments
    assert_fragments([[:comment, "/*c*/"]], "/*c*/")
    assert_fragments([[:comment, "/*/c\n*/"]], "/*/c\n*/")
    assert_fragments([[:comment, "#c"]], "#c")
    assert_fragments([[:comment, "//c"]], "//c")
  end

  def test_strings
    assert_fragments([[:string, %Q("s")]], %Q("s"))
    assert_fragments([[:string, %Q("""s\ns""")]], %Q("""s\ns"""))
    assert_fragments([[:string, %Q("")]], %Q(""))
  end

  def test_integers
    assert_fragments([[:integer, "123"]], "123")
    assert_fragments([[:integer, "0x0"]], "0x0")
    assert_fragments([[:integer, "0x0F"]], "0x0F")
    assert_fragments([[:integer, "0XeE"]], "0XeE")
  end

  def test_floatings
    assert_fragments([[:floating, "123.456"]], "123.456")
    assert_fragments([[:floating, "0.456"]], "0.456")
    assert_fragments([[:floating, ".456"]], ".456")
    assert_fragments([[:floating, "123e-2"]], "123e-2")
    assert_fragments([[:floating, "123e2"]], "123e2")
    assert_fragments([[:floating, "123.456e-2"]], "123.456e-2")
    assert_fragments([[:floating, "123.456e2"]], "123.456e2")
  end

  def test_fundefs
    assert_fragments([[:fundef, "s"], [:funcall, "f"]], "s := f")
    assert_fragments([[:fundef, "s"], [:funcall, "f"]], "s = f")
  end

  def test_funcalls
    assert_fragments([[:funcall, "f"]], "f")
    assert_fragments([[:funcall, "a"]], "@a")
    assert_fragments([[:funcall, "a"]], "@@a")
  end

  def test_punct
    assert_punct('@@', '@@')
    assert_punct(':=', ':=')
    assert_punct(';', ';')
    assert_punct('(', '(')
    assert_punct('{', '{')
    assert_punct(']', ']')
    assert_punct(',', ',')
  end

end
