program Heap;
var n, i, j, x, m: longint;
    d: int64;
    A: array[0..100010] of longint;
begin
 fillchar(A, sizeof(A), 0);
 read(n);
 m:=0;
 for i:=1 to n do
  begin
   read(x);
   inc(A[x]);
   if A[x] > m then m:=A[x];
  end;
 if (n div 2) < (n - m + 1) then x:=n div 2
 else x:=n - m + 1;
 i:=100001;
 d:=0;
 j:=0;
 while (i > 0) and (x > 0) do
  begin
   dec(i);
   if A[i] > x then
    begin
     d:=d + i * x;
     x:=0;
    end
   else
    begin
     d:=d + A[i] * i;
     x:=x - A[i];
    end;
  end;
 write(d);
end.
