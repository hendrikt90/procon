#!/usr/bin/ruby
require 'yaml'
a=gets.chomp[1..-1].split('.')
h=YAML.load(STDIN.read.gsub(/([a-z0-9][a-z0-9 ]*)/,'!str \1'))
a.each{|e|
	if h.class.name=='String' then puts 'no such property';exit end
	h=h[e]
	if !h then puts 'no such property';exit end
}
puts h.class.name=='String'?"string \"#{h}\"":'object'