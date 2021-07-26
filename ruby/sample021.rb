n, k = gets.split.map { |i| i.to_i }
result = 0
Array.new(100) { |i| i }.reverse.each do |i|
	if n >= k ** i
		result = i + 1
		break
	end
end
p result