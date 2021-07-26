n, y = gets.split.map { |i| i.to_i }
a = -1
b = -1
c = -1
(0..2000).each do |j|
	(0..2000).each do |k|
		if y == 10000 * j + 5000 * k + 1000 * (n - j - k) && (n - j - k) >= 0
			a = j
			b = k
			c = n - j - k
		end
	end
end
puts "#{a} #{b} #{c}"