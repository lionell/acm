program Second;{F}
type Mass = array[1..100] of byte;
var a: Mass;
    n, i, l: longint;
procedure AB(var a: Mass; b: longint);
 var i, j: longint;
 begin
  j:=0;
  for i:=1 to l do
   begin
    a[i]:=a[i] * b + j;
    j:=a[i] div 10;
    a[i]:=a[i] mod 10;
   end;
  if j > 0 then
   begin
    inc(l);
    a[l]:=j;
   end;
 end;
begin
 for n:=3 to 100 do
 begin
  fillchar(a, sizeof(a), 0);
  a[1]:=2;
  l:=1;
  for i:=1 to n - 3 do AB(a, 2);
  for i:=l downto 1 do write(a[i]);
  writeln;
 end;
end.
