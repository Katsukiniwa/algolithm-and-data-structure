n = gets.chomp!.to_i
a_n = gets.chomp!.split(" ").map(&:to_i).sort!

counter = Hash.new {|h, k| h[k] = 0 }
a_n.each { |a| counter[a] += 1 }

odd = 0
even = 0

counter.each { |v, i| i.even? ? even += 1 : odd += 1 }

puts odd + (even.even? ? even : even - 1)