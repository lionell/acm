program Shooter;
type Point = record x, y: real; end;
var n, i, k, j, d: longint;
    A: array[1..100] of Point;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 read(n);
 for i:=1 to n do read(A[i].x, A[i].y);
 k:=0;
 while k < n do
  begin
   inc(k);
   for j:=1 to n do
    begin
     if (A[j].x <> -11) and (A[j].y <> -11) and (j <> k) and ((A[j].x - A[k].x)*(0 - A[k].y) = (A[j].y - a[k].y)*(0 - A[k].x)) then
      begin
       A[j].x:=-11;
       A[j].y:=-11;
       inc(d);
      end;
    end;
   A[k].x:=-11;
   A[k].y:=-11;
  end;
 write(d);
 close(input);
 close(output);
end.