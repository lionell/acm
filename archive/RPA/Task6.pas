program Problem6;{FULL}
var x, i, j: longint;
    A, B: array[1..100] of byte;
begin
 read(x);
 i:=0;
 while(x > 0) do
  begin
   inc(i);
   A[i]:=x mod 2;
   x:=x div 2;
  end;
 for j:=1 to i do B[i - j + 1]:=A[j];
 for j:=1 to i do write(B[j]);
end.