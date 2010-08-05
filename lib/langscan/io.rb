#
# io.rb - a Io module of LangScan
#
# Copyright (C) 2005 Shinichiro Hamaji <hamaji@nii.ac.jp>
#     All rights reserved.
#     This is free software with ABSOLUTELY NO WARRANTY.
#
# You can redistribute it and/or modify it under the terms of 
# the GNU General Public License version 2.
#

require 'langscan/_easyscanner'

module LangScan
  module Io
    module_function
    def name
      "Io"
    end

    def abbrev
      "io"
    end

    def extnames
      [".io"]
    end

    Pattern = [
      [:comment, '/\\*', '\\*/'],
      [:comment, '//.*'],
      [:comment, '#.*'],
      [:string, '"""', '[^\\\\]"""'],
      [:string, '""'],
      [:string, '"', '[^\\\\]"'],
      [:floating, '\\d*(?:(?:\\.\\d+)?(?:e-?\\d+)|(?:\\.\\d+))'],
      [:integer, '0[xX][\\dA-Fa-f]+'],
      [:integer, '\\d+'],
      [:ident, "\\w*[a-zA-Z_]\\w*"],
      [:punct, '[:\\.\'~!@$%=^&*-+|<>?/]+'],
      [:punct, '[\\[\\]{}();,]'],
    ]

    Types = []

    Keywords = %w()

    def parse_token(t, new_tokens)
      if t.type == :ident
        t.type = :funcall
      end

      last_token = new_tokens.last
      return if last_token.nil?

      return unless t.type == :punct and last_token.type == :funcall

      if t.text == ':=' || t.text == '='
        last_token.type = :fundef
      end
    end

    def scan(input, &block)
      scanner = EasyScanner.new(Pattern, Types, Keywords)

      tokens = []
      scanner.scan(input) {|t|
        tokens << t
      }

      new_tokens = []
      tokens.each {|t|
        parse_token(t, new_tokens)
        new_tokens << t
      }

      new_tokens.each {|t|
        yield t
      }
    end

    LangScan.register(self)
  end
end
