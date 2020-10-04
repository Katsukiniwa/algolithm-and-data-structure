n = gets.chomp.to_i
flag = false
(1..9).each do |i|
	(1..9).each do |j|
		if n == i * j
			flag = true
		end
	end
end
if flag
	puts 'Yes'
else
	puts 'No'
end
