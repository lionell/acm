program Problem5;{FULL}
var a, b, k, m, i: longint;
begin
 read(a, b, k);
 m:=3 * a * a - 2 * a + 5;
 writeln(m);
 i:=a;
 while(i + k <= b) do
  begin
   i:=i + k;
   writeln(3 * i * i - 2 * i + 5);
   if m < (3 * i * i - 2 * i + 5) then m:=(3 * i * i - 2 * i + 5);
  end;
 write(m);
end.