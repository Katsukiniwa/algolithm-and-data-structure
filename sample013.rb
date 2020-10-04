x = gets.chomp.to_i
i = x % 11
j = x / 11
if i == 0
	j = 2 * j
elsif i <= 6
	j = 2 * j + 1
else
	j = 2 * j + 2
end
p j