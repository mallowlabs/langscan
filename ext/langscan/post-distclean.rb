require "fileutils"

def remove(iPath)
	if ( File.exist?( iPath ) )
		File.delete( iPath )
	end
end

srcdirectories.each do |sub_name|
	path = File.join( curr_srcdir, sub_name, sub_name )

	flex_file = ( sub_name + "tok.l" )
	flex_file = File.join( path, flex_file )
	next unless ( File.file?( flex_file ) )
	flex_outh = File.basename( flex_file, ".l" ) << ".h"
	flex_outc = File.basename( flex_file, ".l" ) << ".c"
	[flex_outh, flex_outc, sub_name + ".h", sub_name + ".c", "extconf.rb"].each do |x|
		x = File.join( path, x )
		remove( x )
	end
end
