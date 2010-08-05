#
# pairmatcher.rb - a pair matching parser
#
# Copyright (C) 2005 Akira Tanaka <akr@m17n.org> 
#     All rights reserved.
#     This is free software with ABSOLUTELY NO WARRANTY.
#
# You can redistribute it and/or modify it under the terms of 
# the GNU General Public License version 2.
#

require 'langscan/_common'
require 'langscan/pairmatcher/pairmatcher'

class Struct::LangScanPair
  def outmost
    ret = self
    while o = ret.outer
      ret = o
    end
    ret
  end

end

module LangScan
  def PairMatcher.fragmentsorter(block)
    buf = []
    pos = 0
    lambda {|f|
      if pos == f.beg_byteno
        pos += f.text.length
        block.call(f)
        buf.sort! {|f1, f2| f1.beg_byteno <=> f2.beg_byteno }
        while !buf.empty? && buf.first.beg_byteno == pos
          f = buf.first
          pos += f.text.length
          block.call(f)
          buf.shift
        end
      else
        buf << f
      end
    }
  end
end
