#!/usr/bin/ruby
require 'prime'

class Integer
	def pow_binary_mod(y,m)
		x = self
		z = 1
		while y != 0
			while y % 2 == 0
				x = x * x % m
				y = y / 2
			end
			y = y - 1
			z = z * x % m
		end
		z
	end
end

# http://oeis.org/A000864
$enum=Prime.each;$enum.next #2
p Enumerator.new{|y|
#include Enumerable
#def each
	a=$enum.next;b=$enum.next
	loop{
		(a+2).step(b-2,2){|n|
			next if n%5==0
			if 10.pow_binary_mod(n-1,9*n)==1
				#yield n
				y << n
			end
		}
		a=b;b=$enum.next
	}
#end
}.take(25).reduce(:+)
#p take(25).reduce(:+)