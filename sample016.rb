a, b, c, x, y = gets.chomp.split("\s").map{|x| x.to_i}

sep_total = a * x + b * y

min = [x, y].min
max = [x, y].max
mix_total1 = min * c * 2 + (x - min) * a + (y - min) * b

mix_total2 = max * c * 2

puts [sep_total, mix_total1, mix_total2].min