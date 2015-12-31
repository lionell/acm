program Likely;
var k, n, m, i, j, o, t: longint;
    a: array[1..101, 1..101] of byte;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 read(k);
 for i:=1 to k do
  begin
   fillchar(a, sizeof(a), 2);
   read(n, m);
   for j:=1 to n do
    for o:=1 to m do
     read(a[j, o]);
   t:=0;
   for j:=1 to n do
    begin
     for o:=1 to m do
      begin
       if ((a[j, o] = 0) and (a[j + 1, o] = 0) and (a[j, o + 1] = 0) and (a[j + 1, o + 1] = 0))
       or ((a[j, o] = 1) and (a[j + 1, o] = 1) and (a[j, o + 1] = 1) and (a[j + 1, o + 1] = 1)) then
       t:=1;
      end;
    end;
   if t = 1 then writeln('NO')
   else writeln('YES');
  end;
 close(input);
 close(output);
end.