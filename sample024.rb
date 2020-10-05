n = gets.chomp.to_i
s_array = []
n.times { |i| s_array.push(gets.chomp) }
puts s_array.uniq.length