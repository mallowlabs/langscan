require "fileutils"

r = system( "flex -V" )
unless ( r )
	raise "not available flex command."
end

ruby_exe = "ruby"
flex_exe = "flex"
nounistd = ( "yes" == config('nounistd') ? '--nounistd' : '' )


srcdirectories.each do |sub_name|
	path = File.join( curr_srcdir, sub_name, sub_name )

	flex_file = ( sub_name + "tok.l" )
	flex_file = File.join( path, flex_file )
	next unless ( File.file?( flex_file ) )

	flex_out = File.basename( flex_file, ".l" ) << ".c"
	flex_out = File.join( path, flex_out )
	dist = flex_out + ".dist"

	module_name = File.read( File.join( path, "modulename.txt" ) )

	r = system( %Q;#{flex_exe} #{nounistd} -L -t "#{flex_file}" > "#{flex_out}"; )
	if ( r && File.exist?( dist ) )
		FileUtils.copy( dist, flex_out )
	end

	# cmp -s javatok.c javatok.c.dist
	if ( File.exist?( dist ) )
		s = File.read( flex_out ).gsub( /\s+/m, " " )
		d = File.read( dist     ).gsub( /\s+/m, " " )
		if ( s != d )
			FileUtils.copy( flex_out, dist )
		end
	end

	mh = File.join( curr_srcdir, "_make_h.rb" )
	tp = File.join( curr_srcdir, "_template.h" )
	tl = File.join( curr_srcdir, sub_name, sub_name, "tokenlist.txt" )
	r = system( %Q;#{ruby_exe} "#{mh}" "#{tp}" "#{path}" "#{tl}" #{sub_name} #{module_name}; )
	raise "fail: _make_h.rb #{sub_name}." unless (r)
	mc = File.join( curr_srcdir, "_make_c.rb" )
	tp = File.join( curr_srcdir, "_template.c" )
	r = system( %Q;#{ruby_exe} "#{mc}" "#{tp}" "#{path}" #{sub_name} #{module_name}; )
	raise "fail: _make_c.rb #{sub_name}." unless (r)

	open( File.join( path, "extconf.rb" ), "w" ) do |h|
		h.write( <<-EOS )
require "mkmf"
dir_config( 'include' )
create_makefile('langscan/#{sub_name}/#{sub_name}')
		EOS
	end
end
