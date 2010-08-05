require File.dirname(__FILE__) + '/test_helper.rb'

class TestLangscan < Test::Unit::TestCase

  def setup
  end

  def test_c
    fragments = []
    LangScan::C.scan('#include <"stdio.h">') do |fragment|
      fragments << fragment
    end
    assert_equal(6, fragments.size)
  end

  def test_csharp
    fragments = []
    LangScan::Csharp.scan('namespace Sample{useing System;}') do |fragment|
      fragments << fragment
    end
    assert_equal(9, fragments.size)
  end


  def test_d
    fragments = []
    LangScan::D.scan('import std.stdio;') do |fragment|
      fragments << fragment
    end
    assert_equal(6, fragments.size)
  end

  def test_java
    fragments = []
    LangScan::Java.scan('package com.example;') do |fragment|
      fragments << fragment
    end
    assert_equal(6, fragments.size)
  end

  def test_ruby
    fragments = []
    LangScan::Ruby.scan('print "Hello", "World"') do |fragment|
      fragments << fragment
    end
    assert_equal(10, fragments.size)
  end

  def test_python
    fragments = []
    LangScan::Python.scan('puts "Hello World"') do |fragment|
      fragments << fragment
    end
    assert_equal(3, fragments.size)
  end

  def test_javascript
    fragments = []
    LangScan::JavaScript.scan('(function(){})();') do |fragment|
      fragments << fragment
    end
    assert_equal(10, fragments.size)
  end

  def test_css
    fragments = []
    LangScan::CSS.scan('div#example p.sample { border: 1px solid red; }') do |fragment|
      fragments << fragment
    end
    assert_equal(14, fragments.size)
  end

  def test_php
    fragments = []
    LangScan::PHP.scan('<?php echo "php"') do |fragment|
      fragments << fragment
    end
    assert_equal(4, fragments.size)
  end

  def test_sh
    fragments = []
    LangScan::Shell.scan('#!/bin/sh\necho $1') do |fragment|
      fragments << fragment
    end
    assert_equal(1, fragments.size)
  end

  def test_text
    fragments = []
    LangScan::Text.scan('This is plain text') do |fragment|
      fragments << fragment
    end
    assert_equal(1, fragments.size)
  end

  def test_elisp
    fragments = []
    LangScan::EmacsLisp.scan('(line-number-mode 1)') do |fragment|
      fragments << fragment
    end
    assert_equal(5, fragments.size)
  end

  def test_scheme
    fragments = []
    LangScan::Scheme.scan('(line-number-mode 1)') do |fragment|
      fragments << fragment
    end
    assert_equal(5, fragments.size)
  end

  def test_brainfuck
    fragments = []
    LangScan::Brainfuck.scan('>+++++++++[<++++++++>-]<.>+++++++[<++++>-]<+.+++++++..+++.[-]>++++++++[<++
++>-]<.>+++++++++++[<+++++>-]<.>++++++++[<+++>-]<.+++.------.--------.[-]>
++++++++[<++++>-]<+.[-]++++++++++.') do |fragment|
      fragments << fragment
    end
    assert_equal(182, fragments.size)
  end

end
