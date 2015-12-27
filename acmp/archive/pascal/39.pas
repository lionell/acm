program Buisnes;
var A, B: array[0..100] of longint;
    n, i, l, s: longint;
function Max(l, r: longint): longint;
var i, d: longint;
begin
 d:=0;
 for i:=l to r do if A[i] > d then d:=A[i];
 Max:=d;
end;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 fillchar(A, sizeof(A), 0);
 fillchar(B, sizeof(B), 0);
 read(n);
 s:=0;
 for i:=1 to n do
  begin
   read(A[i]);
  end;
 for i:=1 to n do
  begin
   s:=s + Max(i, n);
  end;
 write(s);
 close(input);
 close(output);
end.