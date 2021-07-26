s = gets.chomp.chars
f = 0
l = 0
s.each_with_index do |e, i|
	f = i if e == 'A'
	f
end
s.reverse.each_with_index do |j, k|
	l = s.length - k if j == 'Z' && l < s.length - k
	l
end
p f
p l
puts f - l
