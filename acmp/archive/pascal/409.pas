program Railway;
type Point = record
              x, y: longint;
             end;
var n, i: longint;
    s: real;
    a: array[0..30002] of Point;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 read(n);
 a[0].x:=1;
 a[0].y:=0;
 for i:=1 to n do
  begin
   read(a[i].y);
   a[i].x:=i;
  end;
 a[n + 1].x:=a[n].x;
 a[n + 1].y:=0;
 a[n + 2]:=a[0];
 s:=0;
 for i:=0 to n + 1 do s:=s + (((a[i].y + a[i + 1].y) / 2) * (a[i + 1].x - a[i].x));
 if n > 1 then s:=s / (n - 1);
 write(s:0:10);
 close(input);
 close(output);
end.