program Route;
type Mass = array[1..10000, 1..10000] of longint;
var A: Mass;
    n, m, k, i, x, y, kx, ky, d: longint;
function Check(A: Mass): boolean;
var d: boolean;
begin
 d:=true;
 i:=1;
 while (i <= n) and (d) do
  begin
   if (A[i, 1] > -1) or (A[i, m] > -1) then d:=false;
   inc(i);
  end;
 i:=1;
 while (i <= m) and (d) do
  begin
   if (A[1, i] > -1) or (A[n, i] > -1) then d:=false;
   inc(i);
  end;
 Check:=d;
end;
begin
 fillchar(A, sizeof(A), 0);
 read(n, m, k);
 for i:=1 to k do
  begin
   read(x, y);
   A[x, y]:=-1;
  end;
 read(kx, ky);
 A[kx, ky]:=1;
 d:=1;
 while Check(A) do
  begin
   for i:=1 to n do
    begin
     for j:=1 to
    end;
  end;
end.