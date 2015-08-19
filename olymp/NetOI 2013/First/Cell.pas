program Cell; {FULL}
type Point = record
              x, y, d: longint;
             end;
type Vector = record
               x, y: longint;
              end;

var i, s, D: longint;
    P, OP: Point;
    V: Vector;
function NewV(x, y: longint): Vector;
var T: Vector;
begin
 T.x:=x;
 T.y:=y;
 NewV:=T;
end;
function NextV(A: Vector): Vector;
begin
 if A.x > 0 then NextV:=NewV(0, A.x);
 if A.y > 0 then NextV:=NewV(-(A.y + 1), 0);
 if A.x < 0 then NextV:=NewV(0, A.x);
 if A.y < 0 then NextV:=NewV(-(A.y - 1), 0);
end;
begin
 read(D);
 P.x:=0;
 P.y:=0;
 P.d:=1;
 V.x:=1;
 V.y:=0;
 i:=1;
 while (P.d <= D) do
  begin
   OP:=P;
   P.x:=P.x + V.x;
   P.y:=P.y + V.y;
   P.d:=P.d + abs(V.x) + abs(V.y);
   V:=NextV(V);
  end;
 if V.x > 0 then write(OP.x, ' ', (OP.y - (D - OP.d)));
 if V.x < 0 then write(OP.x, ' ', (OP.y + (D - OP.d)));
 if V.y > 0 then write((OP.x + (D - OP.d)), ' ', OP.y);
 if V.y < 0 then write((OP.x - (D - OP.d)), ' ', OP.y);
end.
