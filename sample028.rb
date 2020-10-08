n = gets.chomp.to_i
s_array = []
n.times { s_array.push(gets.chomp) }
unique_s_array = s_array.uniq
m = gets.chomp.to_i
m_array = []
m.times { m_array.push(gets.chomp) }
sum = 0
unique_s_array.each do |s|
	if s_array.count{ |x| x == s } > m_array.count{ |y| y == s }
		if sum < s_array.count{ |x| x == s } - m_array.count{ |y| y == s }
			sum = s_array.count{ |x| x == s } - m_array.count{ |y| y == s }
		end
	end
end
p sum