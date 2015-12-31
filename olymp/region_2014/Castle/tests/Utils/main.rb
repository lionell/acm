def full_name(test)
  result = ''
  result = '0' if test < 10
  result << test.to_s
  result
end
path = '/home/lionell/Documents/Work/ACM/Olymp/VinRegion2014/Castle/tests/'
1.upto(35) do |test|
  puts full_name(test)
  input = File.open(path + 'test' + full_name(test) + 'in.txt', 'r').readlines
  output = File.open(path + 'test' + full_name(test) + 'out.txt', 'r').readlines

  File.open(path + 'castle.test.' + full_name(test), 'w') do |file|
    input.each do |row|
      file << row
    end
    file << "\n"
    output.each do |row|
      file << row
    end
  end
end