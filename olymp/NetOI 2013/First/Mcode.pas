program Mcode;
const E = 0.00001;
var n, k, i, x: longint;
    A: array[1..1000000] of byte;
function Code(h, w, k: longint): longint;
 begin
  Code:=abs(h - w) + (k - h * w);
 end;
function Find(k: longint): longint;
 var M, x, y: longint;
 begin
  M:=A[k - 1] + 1;
  x:=round(sqrt(k));
  while (k mod x > 0 ) do dec(x);
  y:=Code(x, k div x, k);
  if M > y then M:=y;
  Find:=M;
 end;
begin
 assign(output, 'input.txt');
 rewrite(output);
 fillchar(A, sizeof(A), 0);
 A[1]:=0;
 read(n);
 write(A[1]);
 for i:=2 to n do
  begin
   A[i]:=Find(i);
   write(', ', A[i]);
   if i mod 10 = 0 then writeln;
  end;
 close(output);
end.
