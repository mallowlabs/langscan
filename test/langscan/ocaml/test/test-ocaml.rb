
require 'test/unit'
require 'langscan/ocaml'

module LangScan::OCaml
  class TestToken < Test::Unit::TestCase
    def test_int
      t = Tokenizer.new("123")
      f = t.get_token()
      
      assert_equal("123", f.text)
      assert_equal(:integer, f.type)
    end
    
    def test_comment
      t = Tokenizer.new("(* ... *)")
      f = t.get_token()
      assert_equal("(* ... *)", f.text)
      assert_equal(:comment, f.type)
      assert_equal(nil, t.get_token())

      t = Tokenizer.new("(* (* (* *) *) *)")
      f = t.get_token()      
      assert_equal("(* (* (* *) *) *)", f.text)
      assert_equal(:comment, f.type)
      assert_equal(nil, t.get_token())

      t = Tokenizer.new("(*\n*)")
      f = t.get_token()
      assert_equal("(*\n*)", f.text)
      assert_equal(:comment, f.type)
      assert_equal(nil, t.get_token())

      t = Tokenizer.new("(* \" \" *)")
      f = t.get_token()
      assert_equal("(* \" \" *)", f.text)
      assert_equal(:comment, f.type)
      assert_equal(nil, t.get_token())

      t = Tokenizer.new("(* \" *) (* \" *)")
      f = t.get_token()
      assert_equal("(* \" *) (* \" *)", f.text)
      assert_equal(:comment, f.type)
      assert_equal(nil, t.get_token())
    
    end

    def assert_fragment_type(type, text, src)
      found = false
      LangScan::OCaml.scan(src) {|f|
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

    def test_fundefs
      assert_fragment_type(:ident, "foo", "let foo = bar")
      assert_fragment_type(:fundef, "foo", "let foo bar = bar")
      assert_fragment_type(:fundef, "foo", "let rec foo bar = bar")
      assert_fragment_type(:funcall, "baz", "let foo bar = baz bar")
    end

    def test_methdefs
      assert_fragment_type(:fundef, "foo", "method foo = 0")
      assert_fragment_type(:funcall, "foo", "method f b = foo b")
      assert_fragment_type(:ident, "foo", "method f foo c = a")

      assert_fragment_type(:fundef, "foo", "method private foo = 0")
      assert_fragment_type(:funcall, "foo", "method virtual f b = foo b")
      assert_fragment_type(:ident, "foo", "method private virtual f foo c = a")
    end

    def test_anon_fun
      assert_fragment_type(:ident, "foo", "fun foo bar baz = baz")
      assert_fragment_type(:ident, "bar", "fun foo bar baz = baz")
    end

    def test_funcalls
      assert_fragment_type(:funcall, "foo", "foo bar")
      assert_fragment_type(:ident, "foo", "a:foo b:bar")
      assert_fragment_type(:ident, "foo", "| foo bar")
      assert_fragment_type(:ident, "foo", "with foo bar")
      assert_fragment_type(:ident, "foo", "* foo bar")   # not real?
      assert_fragment_type(:ident, "foo", "'foo bar")
      assert_fragment_type(:funcall, "foo", "foo 1")
      assert_fragment_type(:funcall, "foo", "foo 1.1")
      assert_fragment_type(:funcall, "foo", "foo \"str\"")
      assert_fragment_type(:funcall, "foo", "foo ()")
      assert_fragment_type(:ident, "foo", "foo fun")   # not real?
      assert_fragment_type(:ident, "foo", "foo -1")
      assert_fragment_type(:funcall, "foo", "foo (-1)")
      assert_fragment_type(:funcall, "foo", "foo [ 1 ]")
      assert_fragment_type(:funcall, "foo", "foo [| 1 |]")
      assert_fragment_type(:ident, "foo", "foo list")
      assert_fragment_type(:ident, "foo", "?foo bar")
      assert_fragment_type(:ident, "foo", "~foo bar")
    end

    def test_after_funcalls
      assert_fragment_type(:funcall, "foo", "f (foo bar)")
      assert_fragment_type(:ident, "foo", "f [|1|] foo bar")
      assert_fragment_type(:ident, "foo", "f a.b foo bar")
      assert_fragment_type(:ident, "foo", "f a#b foo bar")
      assert_fragment_type(:ident, "foo", "f a.b c.foo bar")
      assert_fragment_type(:ident, "foo", "f a#b c#foo bar")
    end

    def test_methcalls
      assert_fragment_type(:funcall, "foo", "o#foo 1")
      assert_fragment_type(:funcall, "foo", "o#foo;")
    end
    
    def test_fundecls
      assert_fragment_type(:ident, "foo", "val foo : int")
      assert_fragment_type(:fundecl, "foo", "val foo : int -> int")
      assert_fragment_type(:fundecl, "foo", "val mutable foo : int -> int")
      assert_fragment_type(:fundecl, "foo", "external foo : int -> int")
    end

    def test_methdecls
      assert_fragment_type(:fundecl, "foo", "method foo : int -> int")
      assert_fragment_type(:fundecl, "foo", "method foo : int")
      assert_fragment_type(:ident, "foo", "method f : (int * int) foo b")
      assert_fragment_type(:ident, "foo", "method f : a:foo b")

      assert_fragment_type(:fundecl, "foo", "method private foo : int")
      assert_fragment_type(:fundecl, "foo", "method virtual foo : int")
      assert_fragment_type(:fundecl, "foo", "method private virtual foo : int")
    end

    def test_skiptypes
      assert_fragment_type(:ident, "foo", "of foo bar")
      assert_fragment_type(:ident, "foo", ":> foo bar")
#      assert_fragment_type(:ident, "foo", "| f.foo bar")
    end

    def test_class
      assert_fragment_type(:ident, "foo", "class foo bar")
    end

    def test_skip_comments
      assert_fragment_type(:fundecl, "foo", "method (**) foo (**) : (**) int")
      assert_fragment_type(:funcall, "foo", "foo (**) [| (**) 1 (**) |]")
      assert_fragment_type(:fundef, "foo",
                           "let (**) rec (**) foo (**) bar (**) = (**) bar")
    end

  end

end


