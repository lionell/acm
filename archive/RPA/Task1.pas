program Problem1;{FULL}
var n, i, d: longint;
    A: array[1..100] of byte;
begin
 read(n);
 i:=0;
 while n > 0 do
  begin
   i:=i + 1;
   A[i]:=n mod 10;
   n:=n div 10;
  end;
 for d:=1 to i do if A[d] = 4 then A[d]:=7;
 for d:=i downto 1 do write(A[d]);
end.