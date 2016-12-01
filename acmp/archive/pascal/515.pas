program Catch;
var n, i, x, y, ox, oy: longint;
    d: real;
function Dest(x1, y1, x2, y2: real): real;
begin
 Dest:=sqrt(sqr(x1 - x2) + sqr(y1 - y2));
end;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 d:=0;
 ox:=0;
 oy:=0;
 read(n);
 for i:=1 to n do
  begin
   read(x, y);
   d:=d + Dest(ox, oy, x, y);
   ox:=x;
   oy:=y;
  end;
 d:=d + Dest(ox, oy, 0, 0);
 write(d:0:3);
 close(input);
 close(output);
end.