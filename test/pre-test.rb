
langs = srcentries( "langscan" )
langs.each do |x|
	path = File.join( "langscan", x, "test" )
	entries = srcentries( path )
	entries.delete_if { |e| /^test-/ !~ e }

	test = "test_#{x}.rb"
	test = srcfile( test )
	open( test, "w" ) do |w|
		w.puts( "require '_load_path.rb'" )
		entries.each do |e|
			f = File.join( path, e )
			ln = "require %Q;#{f};"
			w.puts( ln )
		end
	end
end


