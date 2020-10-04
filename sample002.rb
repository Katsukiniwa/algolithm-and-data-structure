# frozen_string_literal: true
#
n = gets.chomp.to_i
a = gets.chomp.to_i
b = gets.chomp.to_i
sum = 0
(1..n).each do |i|
	j = i.div(10)
	k = i - j * 10
	if a <= (j + k) && (j + k) <= b
		sum = sum + i
	end
end
puts sum