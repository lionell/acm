=begin
$stdin = File.open("./in.txt", "r")
$stdout = File.open("./out.txt", "w")
=end

n = gets.to_i
k = gets.split.map { |number| number.to_i }
m = []
n.times do |i|
  m << gets.split.map { |number| number.to_i }
end

answer = m.map { |queue|
  time = queue.size * 15
  queue.each { |items| time += items * 5 }
  time
}.min

print answer