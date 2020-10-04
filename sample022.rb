n = gets.to_i
a_array = gets.split.map { |i| i.to_i }.sort.reverse
alice = 0
bob = 0
a_array.each_with_index do |a, index|
	if (index + 1).odd?
		alice += a
	else
		bob += a
	end
end

p alice - bob