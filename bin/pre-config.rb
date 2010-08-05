require "fileutils"

winstandalone = config( 'winstandalone' )
files = %W!langscan-test!

script = <<-EOS
$: << File.join( File.dirname( $0 ), '..', 'lib' )
$: << File.join( File.dirname( $0 ), '..', 'lib', '#{Config::CONFIG["sitearch"]}' )
ENV['PATH'] += File::PATH_SEPARATOR + File.dirname( $0 )
EOS
files.each do |name|
	path = "#{name}.in"
	path = File.join( curr_srcdir, path )
	text = File.read( path )
	if ( winstandalone )
		text.gsub!( /^#\s*%LOADPATH%$/, script )
	end
		text.gsub!( /%RUBY%/, "/usr/bin/env ruby" )
	path = "gonzui-#{name}.rb"
	path = File.join( curr_srcdir, path )
	open( path, "w" ) do |h|
		h.write( text )
	end
end


