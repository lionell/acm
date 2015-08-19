program QuickSort;
type Mass = array[1..100000] of longint;
var A: Mass;
    n, i: longint;
procedure Sort(var A: Mass; l, r: longint);
var i, j, x, y: longint;
begin
 i:=l;
 j:=r;
 x:=A[(l + r) div 2];
 repeat
  while (A[i] < x) do inc(i);
  while (A[j] > x) do dec(j);
  if (i <= j) then
   begin
    y:=A[i];
    A[i]:=A[j];
    A[j]:=y;
    inc(i);
    dec(j);
   end;
 until i > j;
 if (l < j) then Sort(A, l, j);
 if (i < r) then Sort(A, i, r);

end;
begin
 read(n);
 for i:=1 to n do read(A[i]);
 Sort(A, 1, n);
 for i:=1 to n do write(A[i], ' ');
end.