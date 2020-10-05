n, k = gets.split.map { |i| i.to_i }
array = []
n.times { array.push(gets.split.map { |l| l.to_i }) }
result = nil
key = 0
array.sort_by!{|x, y| x}
array.each do |a|
	key += a[1]
	if key >= k
		result = a[0]
		break
	end
end
p result