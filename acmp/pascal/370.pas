program Square;
type Point = record x, y: longint; end;
var A: array[1..50010] of Point;
    n, i: longint;
    d: real;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 read(n);
 d:=0;
 for i:=1 to n do read(A[i].x, A[i].y);
 A[n + 1]:=A[1];
 for i:=1 to n do
  begin
   d:=d + ((A[i].x - A[i + 1].x) * (A[i + 1].y + A[i].y) / 2);
  end;
 write(abs(d):0:1);
 close(input);
 close(output);
end.