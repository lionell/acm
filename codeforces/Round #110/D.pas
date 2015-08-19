program ProblemD;
var a: array[1..100000] of integer;
    n, m, i, j, d: longint;
    s: string;
function CharToByte(c: char): byte;
begin
 CharToByte:=ord(c) - ord('0');
end;
begin
 read(n, m);
 for i:=1 to n do
  begin
   read(s);
   d:=0;
   for j:=2 to length(s) do d:=10 * d + CharToByte(s[j]);
   if s[1] = '+' then inc(a[d])
   else dec(a[d]);
  end;
 for i:=1 to n do
  begin
   if a[i] >= k then write('');
  end;
end.