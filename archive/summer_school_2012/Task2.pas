program Problem2; //FULL
type Point = record
              x, y: longint;
             end;
var a, b, c: Point;
    bool: boolean;
function Dist(a, b: Point): longint;
 var d: longint;
 begin
  d:=sqr(a.x - b.x) + sqr(a.y - b.y);
  Dist:=d;
 end;
function Check(a, b, c: Point): boolean;
 var ab, bc, ca: longint;
 begin
  ab:=Dist(a, b);
  bc:=Dist(b, c);
  ca:=Dist(c, a);
  if (ab = bc + ca) or (bc = ab + ca) or (ca = ab + bc) then Check:=true
  else Check:=false;
 end;
function Eq(a, b, c: Point): boolean;
 begin
  if ((a.x = b.x) and  (a.y = b.y)) or ((b.x = c.x) and (b.y = c.y)) or ((a.x = c.x) and (a.y = c.y)) then Eq:=true
  else Eq:=false;
 end;
function Change(a, b, c: Point): boolean;
 var d: boolean;
 begin
  d:=false;
  a.x:=a.x + 1;
  d:=d or Check(a, b, c);
  if Eq(a, b, c) then d:=false;
  a.x:=a.x - 2;
  d:=d or Check(a, b, c);
  if Eq(a, b, c) then d:=false;
  a.x:=a.x + 1;
  a.y:=a.y + 1;
  d:=d or Check(a, b, c);
  if Eq(a, b, c) then d:=false;
  a.y:=a.y - 2;
  d:=d or Check(a, b, c);
  if Eq(a, b, c) then d:=false;
  Change:=d;
 end;
begin
 read(a.x, a.y, b.x, b.y, c.x, c.y);
 if Check(a, b, c) then write('RIGHT')
 else
  begin
   bool:=false;
   bool:=bool or Change(a, b, c);
   bool:=bool or Change(b, c, a);
   bool:=bool or Change(c, a, b);
   if bool then write('ALMOST')
   else write('NEITHER');
  end;
end.
