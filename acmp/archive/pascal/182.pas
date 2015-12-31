program Rect;
type Point = record x, y: real; end;
var a, b, c, d1, d2, f, e, d: Point;
    ab, bc, ac: real;
function Dist(a, b: Point): real;
begin
 Dist:=Sqr(a.x - b.x) + Sqr(a.y - b.y);
end;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 read(a.x, a.y, b.x, b.y, c.x, c.y);
 ab:=Dist(a, b);
 ac:=Dist(a, c);
 bc:=Dist(b, c);
 if (ab >= ac) and (ab >= bc) then
  begin
   d1:=a;
   d2:=b;
   f:=c;
  end;
 if (ac >= ab) and (ac >= bc) then
  begin
   d1:=a;
   d2:=c;
   f:=b;
  end;
 if (bc >= ac) and (bc >= ab) then
  begin
   d1:=b;
   d2:=c;
   f:=a;
  end;
 e.x:=(d1.x + d2.x) / 2;
 e.y:=(d1.y + d2.y) / 2;
 d.x:=2 * e.x - f.x;
 d.y:=2 * e.y - f.y;
 write(d.x:0:0, ' ', d.y:0:0);
 close(input);
 close(output);
end.
