require 'mkmf'

$CFLAGS += " -DRIPPER -Iinclude"
create_makefile('ripper')
