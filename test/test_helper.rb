require 'stringio'
require 'test/unit'
begin
  require 'redgreen'
rescue LoadError
end
require File.dirname(__FILE__) + '/../lib/langscan'
