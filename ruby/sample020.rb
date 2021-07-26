n, a, b = gets.chomp.split(' ').map { |i| i.to_i }
sum = 0
(1..n).each do |i|
	c = i / 10000
	l = (i - c * 10000) / 1000
	h = (i - c * 10000 - 1000 * l) / 100
	j = (i - c * 10000 - 1000 * l - 100 * h) / 10
	k = i % 10
	result = c + j + k + h + l
	if a <= result && result <= b
		sum = sum + i
	end
end
p sum