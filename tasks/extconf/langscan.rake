namespace :extconf do
  extension = File.basename(__FILE__, '.rake')
  ext_confs = Dir.glob("**/extconf.rb")

  task :compile => :compile_all do
    if Dir.glob("**/*.{o,so,dll,bundle}").length == 0
      STDERR.puts "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"
      STDERR.puts "Gem actually failed to build.  Your system is"
      STDERR.puts "NOT configured properly to build langscan."
      STDERR.puts "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"
      exit(1)
    end
  end

  task :compile_all do
    oks = []
    ngs = []
    ext_confs.each do |ext_conf|
      _ext = File.dirname(ext_conf)
      lang_name = File.basename(_ext)
      Dir.chdir(_ext) do
        ruby "extconf.rb"
        sh(PLATFORM =~ /win32/ ? 'nmake' : 'make') do |ok, res|
          if !ok
            require "fileutils"
            FileUtils.rm Dir.glob('*.{so,o,dll,bundle}')
            ngs << lang_name
          else
            oks << lang_name
          end
        end
      end
    end
    oks.each do |lang_name|
      STDOUT.puts "#{lang_name}: SUCCESS"
    end
    ngs.each do |lang_name|
      STDERR.puts "#{lang_name}: FAILED"
    end
  end

end
