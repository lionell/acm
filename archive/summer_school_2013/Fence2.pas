program Fence2;
type Data = array[1..50000] of longint;
var A, B: Data;
    n, i, j, w, d, s: longint;
procedure Sort(var A: Data; l, r: longint);
var m, y, i, j: longint;
begin
 i:=l;
 j:=r;
 m:=A[(l + r) div 2];
 repeat
  while A[i] < m do inc(i);
  while A[j] > m do dec(j);
  if i <= j then
   begin
    y:=A[i];
    A[i]:=A[j];
    A[j]:=y;
    inc(i);
    dec(j);
   end;
 until i > j;
 if j > l then Sort(A, l, j);
 if i < r then Sort(A, i, r);
end;
begin
 //assign(input, 'input.txt');
 //reset(input);
 fillchar(A, sizeof(A), 0);
 fillchar(B, sizeof(B), 0);
 d:=0;
 read(n);
 for i:=1 to n do read(A[i]);
 read(w);
 Sort(A, 1, n);
 for i:=2 to n do B[i - 1]:=A[i] - A[i - 1];
 for i:=1 to n - 1 do
  begin
   s:=0;
   j:=i;
   while (j < n) and ((s + B[j]) <= w) do
    begin
     s:=s + B[j];
     inc(j);
    end;
   if ((j - i) > d) then d:=j - i;
  end;
 write(d + 1);
 //close(input);
end.
