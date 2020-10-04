string = gets.chomp.chars
odd_string = []
string.each.with_index(1) do |c,i|
	if i.odd?
		odd_string << c
	end
end
puts odd_string.join
