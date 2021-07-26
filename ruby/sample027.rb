w, h, n = gets.split.map { |i| i.to_i }
array = []
w_start = 0
h_start = 0
w_end = w
h_end = h

n.times { array.push(gets.split.map { |j| j.to_i }) }
array.each do |e|
	if e[2] == 1
		w_start = e[0] if e[0] > w_start
	elsif e[2] == 2
		w_end = e[0]  if e[0] < w_end
	elsif e[2] == 3
		h_start = e[1]  if e[1] > h_start
	elsif e[2] == 4
		h_end = e[1]  if e[1] < h_end
	end
end
if w_end - w_start <= 0 || h_end - h_start <= 0
	puts 0
else
	p (w_end - w_start) * (h_end - h_start)
end