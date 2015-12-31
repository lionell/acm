program Triangle;
const E = 0.0000001;
var x1, y1, x2, y2, x3, y3, x4, y4: extended;
function Dist(x1, y1, x2, y2: extended): extended;
 begin
  Dist:=sqrt(sqr(x1 - x2) + sqr(y1 - y2));
 end;
function Square(x1, y1, x2, y2, x3, y3: extended): extended;
 var a, b, c, p: extended;
 begin
  a:=Dist(x1, y1, x2, y2);
  b:=Dist(x2, y2, x3, y3);
  c:=Dist(x3, y3, x1, y1);
  p:=(a + b + c) / 2;
  Square:=sqrt(p * (p - a) * (p - b) * (p - c));
 end;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 read(x1, y1, x2, y2, x3, y3, x4, y4);
 if abs(Square(x1, y1, x2, y2, x4, y4) + Square(x2, y2, x3, y3, x4, y4) + Square(x3, y3, x1, y1, x4, y4) - Square(x1, y1, x2, y2, x3, y3)) > E then write('Out')
 else write('In');
 close(output);
 close(input);
end.
