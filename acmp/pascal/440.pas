program Bitlon;
type Point = record
              x, y: real;
             end;
type Circle = record
               x, y: real;
               Enable: boolean;
              end;
var x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, i, j, d: longint;
    Shoots: array[1..5] of Point;
    Circles: array[1..5] of Circle;
function Dest(x1, y1, x2, y2: real): real;
begin
 Dest:=sqrt(sqr(x1- x2) + sqr(y1 - y2));
end;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 d:=0;
 for i:=1 to 5 do Circles[i].Enable:=true;
 Circles[1].x:=0;
 Circles[1].y:=0;
 Circles[2].x:=25;
 Circles[2].y:=0;
 Circles[3].x:=50;
 Circles[3].y:=0;
 Circles[4].x:=75;
 Circles[4].y:=0;
 Circles[5].x:=100;
 Circles[5].y:=0;
 for i:=1 to 5 do read(Shoots[i].x, Shoots[i].y);
 for i:=1 to 5 do
  begin
   for j:=1 to 5 do if(Dest(Circles[i].x, Circles[i].y, Shoots[j].x, Shoots[j].y) <= 10) then Circles[i].Enable:=false;
   if not(Circles[i].Enable) then inc(d);
  end;
 write(d);
 close(input);
 close(output);
end.