x = [0, 0, 0]
y = [0, 0, 0]
ary = 3.times.map { gets.split.map(&:to_i) }
3.times { |i| y[i] = ary[0][i] - x[0] }
3.times { |i| x[i] = ary[i][0] - y[0] }
flg = true

3.times do |i|
	3.times do |j|
		flg = false if x[i] + y[j] != ary[i][j]
	end
end

puts flg ? 'Yes' : 'No'