program PupsiCola;
const Infinity = 1000000;
type Cell = record
             a, b, c, d: longint;
            end;
var a, b, c, k, n, i: longint;
    Mass: array[-3..1000] of Cell;
begin
 read(a, b, c, k);
 n:=a + 2*b + 3*c;
 for i:=1 to n do Mass[i].d:=Infinity;

 if a > 0 then
  begin
   Mass[1].d:=1;
   Mass[1].a:=1;
  end;
 if b > 0 then
  begin
   Mass[2].d:=2;
   Mass[2].b:=1;
  end;
 if c > 0 then
  begin
   Mass[3].d:=3;
   Mass[3].c:=1;
  end;
 for i:=4 to n do
  begin
   Mass[i].d:=Infinity;
   if (Mass[i - 1].d + 1 < Mass[i].d) and (Mass[i - 1].a < a) then
    begin
     Mass[i]:=Mass[i - 1];
     inc(Mass[i].a);
     Mass[i].d:=Mass[i - 1].d + 1;
    end;
   if (Mass[i - 2].d + 2 < Mass[i].d) and (Mass[i - 1].b < b) then
    begin
     Mass[i]:=Mass[i - 2];
     inc(Mass[i].b);
     Mass[i].d:=Mass[i - 2].d + 2;
    end;
   if (Mass[i - 3].d + 3 < Mass[i].d) and (Mass[i - 1].c < c) then
    begin
     Mass[i]:=Mass[i - 3];
     inc(Mass[i].c);
     Mass[i].d:=Mass[i - 3].d + 3;
    end;
  end;
 write(Mass[k].a, ' ', Mass[k].b, ' ',  Mass[k].c);
end.
