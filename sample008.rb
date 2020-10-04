n = gets.chomp.to_i
sum = 0
[*1..n].each do |i|
	while true do
		break if i.odd?
		i = i / 2
		sum += 1
	end
end
puts sum