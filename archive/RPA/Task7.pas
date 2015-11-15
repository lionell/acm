program Problem7;{FULL}
var n, i: longint;
    A: array[1..1000] of longint;
    x, d: int64;
function Step(i: longint): longint;
begin
 if (i = 0) then Step:=1
 else
  begin
   if (i mod 2 = 0) then Step:=sqr(Step(i div 2))
   else Step:=8 * sqr(Step(i div 2));
  end;
end;
begin
 assign(input, 'Task.dat');
 reset(input);
 assign(output, 'Task.sol');
 rewrite(output);
 read(n, x);
 i:=0;
 d:=0;
 while(x > 0) do
  begin
   d:=d + Step(i) * (x mod 10);
   x:=x div 10;
   i:=i + 1;
  end;
 write(d);
 close(input);
 close(output);
end.
