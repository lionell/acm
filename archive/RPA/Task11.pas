program Problem11;{FULL}
var A: array[1..100, 1..100] of longint;
    n, m, i, j, S, D: longint;
begin
 read(n, m);
 S:=0;
 D:=0;
 for i:=1 to n do
  begin
   for j:=1 to m do
    begin
     read(A[i, j]);
     S:=S + A[i, j];
    end;
  end;
 for i:=1 to n do D:=D + A[i, 1];
 for i:=1 to n do D:=D + A[i, m];
 for i:=1 to m do D:=D + A[1, i];
 for i:=1 to m do D:=D + A[n, i];
 D:=D - A[1, 1] - A[1, m] - A[n, 1] - A[n, m];
 if D > S then write('First Bigger')
 else write('Second Bigger');
end.