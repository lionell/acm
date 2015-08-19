program ProblemC;
type Mass = array[1..100000] of longint;
var A: Mass;
    n, k, i, j, o: longint;
procedure Sort(var A: Mass; n: longint);
var i, j, key: longint;
begin
 for i:=2 to n do
  begin
   key:=A[i];
   j:=i - 1;
   while (j > 0) and (A[j] > key) do
    begin
     A[j + 1]:=A[j];
     dec(j);
    end;
   A[j + 1]:=key;
  end;
end;
begin
 read(n, k);
 for i:=1 to n do read(A[i]);
 Sort(A, n);
 j:=k div n;
 if j = 0 then j:=1;
 o:=k mod n;
 if o = 0 then o:=n;
 write(A[j], ' ', A[o]);
end.