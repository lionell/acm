program Bitris;{Full}
type Point = record f, r: longint; end;
var A: array[1..200020] of longint;
    D: array[1..100010] of Point;
    n, i, j, l: longint;
    r: int64;
begin
 {assign(input, 'input.txt');
 reset(input);}
 fillchar(A, sizeof(A), 0);
 fillchar(D, sizeof(D), 0);
 read(n);
 for i:=1 to 2 * n do read(A[i]);
 r:=0;
 l:=0;
 i:=0;
 while l < 2 * n do
  begin
   inc(i);
   if D[A[i]].f = 0 then
    begin
     D[A[i]].f:=i;
     D[A[i]].r:=i;
    end
   else
    begin
     for j:=D[A[i]].f + 1 to i - 1 do if (D[A[j]].r <> 0) then dec(D[A[j]].r);
     r:=r + i - D[A[i]].r - l - 1;
     D[A[i]].r:=0;
     l:=l + 2;
    end;
  end;
 write(r);
 {close(input);}
end.
