program PPoint;{Full}
const Infinity = 90000000;
const E = 0.0000001;
type Point = record
              x, y: longint;
             end;
type Line = record
             k, b: real;
            end;
type Lines = array[1..1000100] of Line;
var A: Lines;
    B: array[1..1010] of Point;
    n, i, j, l, d: longint;
procedure QSort(var A: Lines);
 procedure Sort(l, r: longint);
  var i, j: longint;
      x1, x2: real;
      t: Line;
  begin
   i:=l;
   j:=r;
   x1:=A[(l + r) div 2].k;
   x2:=A[(l + r) div 2].b;
   repeat
    while (A[i].k < x1) or ((abs(A[i].k - x1) < E) and (A[i].b < x2)) do inc(i);
    while (A[j].k > x1) or ((abs(A[j].k - x1) < E) and (A[j].b > x2)) do dec(j);
    if (i <= j) then
     begin
      t:=A[i];
      A[i]:=A[j];
      A[j]:=t;
      inc(i);
      dec(j);
     end;
   until i > j;
   if (l < j) then Sort(l, j);
   if (i < r) then Sort(i, r);
  end;
 begin
  Sort(1, l);
 end;
begin
 {assign(input, 'input.txt');
 reset(input);}
 read(n);
 for i:=1 to n do
  begin
   read(B[i].x, B[i].y);
  end;
 l:=0;
 for i:=1 to n - 1 do
  begin
   for j:=i + 1 to n do
    begin
     inc(l);
     if (B[i].x <> B[j].x) then
      begin
       A[l].k:=(B[i].y - B[j].y) / (B[i].x - B[j].x);
       A[l].b:=B[i].y - A[l].k * B[i].x;
      end
     else
      begin
       A[l].k:=Infinity;
       A[l].b:=B[i].x;
      end;
    end;
  end;
 QSort(A);
 d:=0;
 j:=1;
 for i:=1 to l - 1 do
  begin
   if ((A[i + 1].k - A[i].k) < E) and ((A[i + 1].b - A[i].b) < E) then inc(j)
   else
    begin
     if j <> 1 then
      begin
       d:=d + (j * (((1 + round(sqrt(1 + 8 * j))) div 2) - 2));
       j:=1;
      end;
    end;
  end;
 if j <> 1 then
  begin
   d:=d + (j * (((1 + round(sqrt(1 + 8 * j))) div 2) - 2));
   j:=1;
  end;
 write(d);
 {close(input);}
end.
