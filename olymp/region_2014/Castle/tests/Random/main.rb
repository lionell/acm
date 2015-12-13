#!/usr/bin/env ruby

class Maze
  def self.generate(m, n)
    result = [[1] * n]
    (m - 2).times do
      row = [1]
      (n - 2).times do
        row << ((rand(100) + 1) <= 5 ? 1 : 0)
      end
      row << 1
      result << row
    end
    result << [1] * n
    result
  end
end

m = 1000
n = 1000

File.open('/home/lionell/Documents/Work/ACM/Olymp/VinRegion2014/Castle/tests/test29in.txt', 'w') do |file|
  file << m << "\n"
  file << n << "\n"
  file << Maze.generate(m, n).map { |row| row.join }.join("\n")
end