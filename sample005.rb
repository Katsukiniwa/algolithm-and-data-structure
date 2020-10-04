n = gets.to_i
data = n.times.map { gets.strip.split.map(&:to_i) }

def is_reachable(current, next_data)
	# 次の地点までのマンハッタン距離
	tc, xc, yc = current
	tn, xn, yn = next_data
	# 移動量を計算
	dist = (xc - xn).abs + (yc - yn).abs

	# 最短距離でも間に合わない
	return false if dist > tn - tc

	# 行ったり来たりでちょうど到着できるか
	# tn - tcは移動回数
	(dist - (tn - tc)).even?
end

current = [0, 0, 0]
data.each do |d|
	unless is_reachable(current, d)
		puts 'No'
		exit 0
	end
	current = d
end

puts 'Yes'