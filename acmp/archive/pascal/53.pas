program Table;
var n, m, i, j, a, b, c, d: longint;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 read(n, m);
 a:=0;
 b:=0;
 c:=0;
 d:=0;
 for i:=1 to n do
  for j:=1 to m do
   begin
    if i * j mod 5 = 0 then inc(a)
    else if i * j mod 3 = 0 then inc(b)
    else if i * j mod 2 = 0 then inc(c)
    else inc(d);
   end;
  writeln('RED : ', c);
  writeln('GREEN : ', b);
  writeln('BLUE : ', a);
  writeln('BLACK : ', d);

 close(input);
 close(output);
end.