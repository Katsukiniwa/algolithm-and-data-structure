n, x = gets.chomp.split(' ').map { |e| e.to_i }
m_array = n.times.map{ gets.to_i }.sort
p ((x - m_array.sum) / m_array[0]) + m_array.size