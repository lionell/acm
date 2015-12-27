program Lights;
uses Math;
const e = 0.000001;
var x1, y1, x2, y2: longint;
    r, s, d, h, a, st, o, ss: real;
    angle: real;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 read(x1, y1, x2, y2, r, s);
 d:=sqrt(sqr(x1 - x2) + sqr(y1 - y2));
 if d > 2 * r then o:=2 * pi * r * r
 else
  begin
   h:=d / 2;
   a:=sqrt(sqr(r) - sqr(h)) * 2;
   st:=a * h;
   angle:=arccos(h / r) * 2;
   ss:=angle * r * r;
   o:=2 * pi * r * r - ss + st;
  end;
 if o > s then write('YES')
 else write('NO');
 close(input);
 close(output);
end.
