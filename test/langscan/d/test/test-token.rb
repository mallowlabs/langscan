require 'test/unit'
require 'langscan/d'

class TestTokenD < Test::Unit::TestCase
  def test_d_puncts
    t = LangScan::D::Tokenizer.new('~=')
    type, text = t.get_token
    assert_equal('~=', text)
    assert_equal(:punct, type)
    assert_equal(nil, t.get_token)

    t = LangScan::D::Tokenizer.new('>>>=')
    type, text = t.get_token
    assert_equal('>>>=', text)
    assert_equal(:punct, type)
    assert_equal(nil, t.get_token)
  end

  def test_d_idents
    t = LangScan::D::Tokenizer.new('~this')
    type, text = t.get_token
    assert_equal('~this', text)
    assert_equal(:ident, type)
    assert_equal(nil, t.get_token)
  end

  def test_d_preprocs
    t = LangScan::D::Tokenizer.new('#line 6 "foo\bar"')
    type, text = t.get_token
    assert_equal('#line 6 "foo\bar"', text)
    assert_equal(:preproc, type)
    assert_equal(nil, t.get_token)

    t = LangScan::D::Tokenizer.new('int #line 6 "foo\bar"')
    type, text = t.get_token  # int
    type, text = t.get_token  # space
    type, text = t.get_token
    assert_equal('#line 6 "foo\bar"', text)
    assert_equal(:preproc, type)
    assert_equal(nil, t.get_token)
  end

  def test_d_escape_integers
    t = LangScan::D::Tokenizer.new('0XA2FlU')
    type, text = t.get_token
    assert_equal('0XA2FlU', text)
    assert_equal(:integer, type)
    assert_equal(nil, t.get_token)

    t = LangScan::D::Tokenizer.new('0b100L_0127u__')
    type, text = t.get_token
    assert_equal('0b100L_0127u__', text)
    assert_equal(:integer, type)
    assert_equal(nil, t.get_token)
  end

  def test_d_escape_floatings
    t = LangScan::D::Tokenizer.new('123_456.567_8')
    type, text = t.get_token
    assert_equal('123_456.567_8', text)
    assert_equal(:floating, type)
    assert_equal(nil, t.get_token)

    t = LangScan::D::Tokenizer.new('1_2_3_4_5_6_._5e-6_fI')
    type, text = t.get_token
    assert_equal('1_2_3_4_5_6_._5e-6_fI', text)
    assert_equal(:floating, type)
    assert_equal(nil, t.get_token)

    t = LangScan::D::Tokenizer.new('0x1.FFFFFFFFFFFFFp1023i')
    type, text = t.get_token
    assert_equal('0x1.FFFFFFFFFFFFFp1023i', text)
    assert_equal(:floating, type)
    assert_equal(nil, t.get_token)
  end

  def test_d_escape_strings
    t = LangScan::D::Tokenizer.new('\?')
    type, text = t.get_token
    assert_equal('\?', text)
    assert_equal(:string, type)
    assert_equal(nil, t.get_token)

    t = LangScan::D::Tokenizer.new('\200')
    type, text = t.get_token
    assert_equal('\200', text)
    assert_equal(:string, type)
    assert_equal(nil, t.get_token)

    t = LangScan::D::Tokenizer.new('\UF0101234')
    type, text = t.get_token
    assert_equal('\UF0101234', text)
    assert_equal(:string, type)
    assert_equal(nil, t.get_token)

    t = LangScan::D::Tokenizer.new('\&reg;')
    type, text = t.get_token
    assert_equal('\&reg;', text)
    assert_equal(:string, type)
    assert_equal(nil, t.get_token)
  end

  def test_d_escapes
    t = LangScan::D::Tokenizer.new('"\""')
    type, text = t.get_token
    assert_equal('"\""', text)
    assert_equal(:string, type)
    assert_equal(nil, t.get_token)

    t = LangScan::D::Tokenizer.new('`\``')
    type, text = t.get_token
    assert_equal('`\`', text)
    assert_equal(:string, type)
    assert_not_equal(nil, t.get_token)
  end

  def test_d_characters
    t = LangScan::D::Tokenizer.new("'a'")
    type, text = t.get_token
    assert_equal("'a'", text)
    assert_equal(:character, type)
    assert_equal(nil, t.get_token)

    t = LangScan::D::Tokenizer.new("'\\''")
    type, text = t.get_token
    assert_equal("'\\''", text)
    assert_equal(:character, type)
    assert_equal(nil, t.get_token)

    t = LangScan::D::Tokenizer.new("'\\x24'")
    type, text = t.get_token
    assert_equal("'\\x24'", text)
    assert_equal(:character, type)
    assert_equal(nil, t.get_token)

    t = LangScan::D::Tokenizer.new("'\\&quot;'")
    type, text = t.get_token
    assert_equal("'\\&quot;'", text)
    assert_equal(:character, type)
    assert_equal(nil, t.get_token)
  end

  def test_d_string
    t = LangScan::D::Tokenizer.new(%Q("hello"))
    type, text = t.get_token
    assert_equal(%Q("hello"), text)
    assert_equal(:string, type)
    assert_equal(nil, t.get_token)

    t = LangScan::D::Tokenizer.new(%Q(`hello`d))
    type, text = t.get_token
    assert_equal(%Q(`hello`d), text)
    assert_equal(:string, type)
    assert_equal(nil, t.get_token)

    t = LangScan::D::Tokenizer.new(%Q(x"012f"))
    type, text = t.get_token
    assert_equal(%Q(x"012f"), text)
    assert_equal(:string, type)
    assert_equal(nil, t.get_token)

    t = LangScan::D::Tokenizer.new(%Q(`hello`c))
    type, text = t.get_token
    assert_equal(%Q(`hello`c), text)
    assert_equal(:string, type)
    assert_equal(nil, t.get_token)

    t = LangScan::D::Tokenizer.new(%Q(r"hello\n"w))
    type, text = t.get_token
    assert_equal(%Q(r"hello\n"w), text)
    assert_equal(:string, type)
    assert_equal(nil, t.get_token)
  end

  def test_d_comment
    t = LangScan::D::Tokenizer.new("/+ + +/")
    type, text = t.get_token
    assert_equal("/+ + +/", text)
    assert_equal(:comment, type)
    assert_equal(nil, t.get_token)

    t = LangScan::D::Tokenizer.new("/++/")
    type, text = t.get_token
    assert_equal("/++/", text)
    assert_equal(:comment, type)
    assert_equal(nil, t.get_token)

    t = LangScan::D::Tokenizer.new("/+ /++/+/")
    type, text = t.get_token
    assert_equal("/+ /++/+/", text)
    assert_equal(:comment, type)
    assert_equal(nil, t.get_token)

    t = LangScan::D::Tokenizer.new("/+/++//+\n+/+//++/")
    tok = t.get_token
    assert_equal(:comment, tok[0])
    assert_equal("/+/++//+\n+/+/", tok[1])
    assert_equal(1, tok[2])
    assert_equal(0, tok[3])
    assert_equal(0, tok[4])
    assert_equal(2, tok[5])
    assert_equal(4, tok[6])
    assert_equal(13, tok[7])
  end
end
