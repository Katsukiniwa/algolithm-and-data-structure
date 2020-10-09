n = gets.to_i
a = gets.split.map(&:to_i)

ans_even = 0
sum = 0
a.each_with_index do |ai, i|
	sum += ai
	if i.even? && sum <= 0
		ans_even += 1 - sum
		sum = 1
	elsif i.odd? && sum >= 0
		ans_even += 1 + sum
		sum = -1
	end
end

ans_odd = 0
sum = 0
a.each_with_index do |ai, i|
	sum += ai
	if i.odd? && sum <= 0
		ans_odd += 1 - sum
		sum = 1
	elsif i.even? && sum >= 0
		ans_odd += 1 + sum
		sum = -1
	end
end
puts [ans_even, ans_odd].min