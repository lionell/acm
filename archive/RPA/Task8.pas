program Problem8;{FULL}
var A: array[1..1000] of longint;
    n, i, Min, Max: longint;
begin
 read(n);
 Min:=999999;
 Max:=-999999;
 for i:=1 to n do read(A[i]);
 for i:=1 to n do
  begin
   if(A[i] > Max) then Max:=A[i];
   if(A[i] < Min) then Min:=A[i];
  end;
 write(Max - Min);
end.