program Bicycle;
var A: array[1..100] of byte;
    n, i, j: longint;
begin
 read(n);
 i:=0;
 while n > 0 do
  begin
   inc(i);
   A[i]:=n mod 9;
   n:=n div 9;
   if A[i] = 8 then A[i]:=9;
  end;
 for j:=i downto 1 do write(A[j]);
end.