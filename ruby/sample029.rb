n, k = gets.split.map(&:to_i)
a = gets.split.map(&:to_i)
b = Array.new(n, 0)
a.each { |e| b[e - 1] += 1 }
b.sort!
puts 0 < n - k ? b[0, n - k].sum : 0
