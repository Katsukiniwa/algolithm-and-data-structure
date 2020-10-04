n, d = gets.split(" ").map { |i| i.to_i }
x_array = []
n.times do |i|
	x_array.push(gets.split(' ').map { |j| j.to_i })
end
result = 0
x_array.each do |x|
	x_array.each do |y|
		if x != y
			v = 0
			d.times do |e|
				v += (x[e] - y[e]) * (x[e] - y[e])
				if e == d - 1 && Math.sqrt(v) - Math.sqrt(v).to_i == 0
					result += 1
				end
			end
		end
	end
end
p result / 2