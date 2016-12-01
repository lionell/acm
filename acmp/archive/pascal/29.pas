program Game;
var A, B: array[1..30000] of longint;
    n, i: longint;
function Min(a, b: longint): longint;
begin
 if a < b then Min:=a
 else Min:=b
end;
begin
 read(n);
 for i:=1 to n do read(A[i]);
 B[1]:=0;
 B[2]:=abs(A[2] - A[1]);
 for i:=3 to n do B[i]:=Min(B[i - 1] + (abs(A[i - 1] - A[i])), B[i - 2] + (3 * abs(A[i - 2] - A[i])));
 write(B[n]);
end.