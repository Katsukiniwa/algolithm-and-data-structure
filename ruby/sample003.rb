n = gets.chomp
n_array = gets.chomp.split(' ').map { |e| e.to_i }
sorted_array = n_array.sort.reverse
alice = 0
bob = 0
sorted_array.each_with_index do |i, index|
	(index + 1).odd? ? alice += i : bob += i
end
puts alice - bob