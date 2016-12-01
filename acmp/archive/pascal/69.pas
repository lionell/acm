program Circles;
var n, a, RB, RM: real;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 read(n, a);
 RB:=a / (2 * sin(pi / n));
 RM:=a / (2 * sin(pi / n) / cos(pi / n));
 if RB - RM < 1 then write('YES')
 else write('NO');
 close(input);
 close(output);
end.