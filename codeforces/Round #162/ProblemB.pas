program ProblemB;
var n, i, d: longint;
    A: array[1..100000] of longint;
function FromTo(a, b: longint): longint;
 begin
  FromTo:=abs(a - b) + 1;
 end;
begin
 read(n);
 for i:=1 to n do read(A[i]);
 d:=A[1] + 1;
 for i:=2 to n do
  begin
   d:=d + FromTo(A[i - 1], A[i]) + 1;
  end;
 write(d);
end.