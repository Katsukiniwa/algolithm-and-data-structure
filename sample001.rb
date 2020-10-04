# frozen_string_literal: true

a_size = gets.chomp.to_i + 1
b_size = gets.chomp.to_i + 1
c_size = gets.chomp.to_i + 1
x = gets.chomp.to_i
res = 0
a_size.times do |a|
	b_size.times do |b|
		c_size.times do |c|
			if x == (a * 500) + (b * 100) + (c * 50)
				res += 1
			end
		end
	end
end
puts res
