n, k = gets.split.map { |i| i.to_i }
l_array = gets.split.map { |i| i.to_i }.sort.reverse
sum = 0
l_array.each do |l|
	if k > 0
		sum += l
		k -= 1
	end
end
p sum