program Problem9;{FULL}
var A, B: array[1..1000] of longint;
    n, m, i, j: longint;
begin
 read(n, m);
 for i:=1 to n do read(A[i]);
 j:=0;
 for i:=1 to n do
  begin
   if(A[i] <> m) then
    begin
     inc(j);
     B[j]:=A[i];
    end;
  end;
 for i:=1 to j do write(B[i], ' ');
end.