program Carnations;
const Infinity = 1000000;
type Mass = array[0..100] of longint;
var A, B: Mass;
    n, i: longint;
function Min(a, b: longint): longint;
begin
 if a < b then Min:=a
 else Min:=b;
end;
procedure Sort(var A: Mass; l, r: longint);
var i, j, d, t: longint;
begin
 i:=l;
 j:=r;
 d:=A[(r + l) div 2];
 repeat
  while A[i] < d do inc(i);
  while A[j] > d do dec(j);
  if i <= j then
   begin
    t:=A[i];
    A[i]:=A[j];
    A[j]:=t;
    inc(i);
    dec(j);
   end;
 until i > j;
 if l < j then Sort(A, l, j);
 if i < r then Sort(A, i, r);
end;
begin
 fillchar(A, sizeof(A), 0);
 fillchar(B, sizeof(B), 0);
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 read(n);
 for i:=1 to n do read(A[i]);
 Sort(A, 1, n);
 B[2]:=A[2] - A[1];
 B[3]:=A[3] - A[1];
 for i:=4 to n do B[i]:=Min(B[i - 1], B[i - 2]) + A[i] - A[i - 1];
 write(B[n]);
 close(input);
 close(output);
end.
