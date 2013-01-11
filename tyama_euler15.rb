#!/usr/bin/ruby
class Integer
	def comb(r)
		if r==0 then return 1 end
		n=self
		ret=1
		if r>n/2 then r=n-r end
		r.times{|i|
			ret=ret*(n-i)/(i+1)
		}
		return ret
	end
end
p 40.comb(20)