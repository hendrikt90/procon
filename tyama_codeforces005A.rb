#!/usr/bin/ruby
h=Hash.new
n=0
while s=gets
  s.chomp!
  if s[0,1]=="+" then h[s[1..-1]]=true
  elsif s[0,1]=="-" then h.delete(s[1..-1])
  else
    x=s.split(":")[1]
    if x then n+=x.length*h.size end
  end
end
puts n