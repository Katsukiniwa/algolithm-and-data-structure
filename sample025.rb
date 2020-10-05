s = gets.chomp
res = "None"
'abcdefghijklmnopqrstuvwxyz'.split(//, 0).each do |i|
	unless s.include?(i)
		res = i
		break
	end
end
puts res