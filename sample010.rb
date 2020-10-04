n = gets.chomp.to_i
t, a  = gets.split(' ').map { |i| i.to_i }
h_array = gets.split(' ').map { |i| i.to_i }

min = 100000000000
ans = 0
h_array.each_with_index do |h, i|
	tem = t - h * 0.006
	if (a - tem).abs < min
		min = (a - tem).abs
		ans = i + 1
	end
end
puts ans

