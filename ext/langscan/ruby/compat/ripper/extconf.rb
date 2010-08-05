require 'mkmf'

$CFLAGS += " -DRIPPER -Iinclude"
create_makefile('langscan/ruby/compat/ripper')
