program ProblemA;
type Mass = array[1..100] of longint;
var A: Mass;
    n, i, d, s: longint;
procedure Sort(var A: Mass; n: longint);
var i, j, key: longint;
begin
 for i:=2 to n do
  begin
   key:=A[i];
   j:=i - 1;
   while (j > 0) and (A[j] < key) do
    begin
     A[j + 1]:=A[j];
     dec(j);
    end;
   A[j + 1]:=key;
  end;
end;
begin
 read(n);
 s:=0;
 for i:=1 to n do
  begin
   read(A[i]);
   s:=s + A[i];
  end;
 Sort(A, n);
 d:=0;
 i:=0;
 while (s - d >= d) do
  begin
   inc(i);
   d:=d + A[i];
  end;
 write(i);
end.