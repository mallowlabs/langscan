
langs = srcentries( "langscan" )
langs.each do |x|
	path = File.join( "langscan", x, "test" )
	test = "test_#{x}.rb"
	test = srcfile( test )
	File.delete( test ) if ( File.exist?( test ) )
end


