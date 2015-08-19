program Tourist;
var k, w, a1, a2, a3, b1, b2, b3, c1, c2, c3, d1, d2, d3: longint;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 readln(k, w);
 read(a1, b1, a2, b2, a3, b3);
 if ((k - b1 <= 0) and (w - a1 >= 0)) or ((k - b2 <= 0) and (w - a2 >= 0)) or ((k - b3 <= 0) and (w - a3 >= 0))
 or ((k - b1 - b2 <= 0) and (w - a1 - a2 >= 0)) or ((k - b1 - b3 <= 0) and (w - a1 - a3 >= 0))
 or ((k - b2 - b3 <= 0) and (w - a2 - a3 >= 0)) or ((k - b1 - b2 - b3 <= 0) and (w - a1 - a2 - a3 >=0)) then write('YES')
 else write('NO');
 close(input);
 close(output);
end.