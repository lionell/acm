program Rook; {SLOW}
const NaN = 2000000000;
type TPoint = record x, y, i: longint; end;
     TPoints = array[-1..1003] of TPoint;
     TElement = record P: TPoint; d: longint; end;
     TList = array[1..4000000] of TElement;
     TQueue = record
               List: TList;
               C, Length: longint;
              end;
     TMap = array[1..2005, 1..2005] of integer;
var Points, NewPoints: TPoints;
    Start, Finish: TPoint;
    n, i, j, MinX, MinY, MaxX, MaxY: longint;
    Queue: TQueue;
    Map, D: TMap;
    E: TElement;
procedure SortX(var A: TPoints; l, r: longint);
var i, j: longint;
    x, y: TPoint;
begin
 i:=l;
 j:=r;
 x:=A[(l + r) div 2];
 repeat
  while A[i].x < x.x do inc(i);
  while A[j].x > x.x do dec(j);
  if i <= j then
   begin
    y:=A[i];
    A[i]:=A[j];
    A[j]:=y;
    inc(i);
    dec(j);
   end;
 until i > j;
 if i < r then SortX(A, i, r);
 if l < j then SortX(A, l, j);
end;
procedure SortY(var A: TPoints; l, r: longint);
var i, j: longint;
    x, y: TPoint;
begin
 i:=l;
 j:=r;
 x:=A[(l + r) div 2];
 repeat
  while A[i].y < x.y do inc(i);
  while A[j].y > x.y do dec(j);
  if i <= j then
   begin
    y:=A[i];
    A[i]:=A[j];
    A[j]:=y;
    inc(i);
    dec(j);
   end;
 until i > j;
 if i < r then SortY(A, i, r);
 if l < j then SortY(A, l, j);
end;

function NewE(x, y, d: longint): TElement;
 var P: TPoint;
     T: TElement;
 begin
  P.x:=x;
  P.y:=y;
  T.P:=P;
  T.d:=d;
  NewE:=T;
 end;

procedure Push(E: TElement);
 begin
  if D[E.P.x, E.P.y] = 0 then
   begin
    inc(Queue.Length);
    Queue.List[Queue.Length]:=E;
    D[E.P.x, E.P.y]:=E.d;
   end;
 end;
begin
 assign(input, 'tornis2.in');
 reset(input);
 assign(output, 'tornis2.out');
 rewrite(output);
 fillchar(Points, sizeof(Points), 0);
 fillchar(NewPoints, sizeof(NewPoints), 0);
 read(Start.x, Start.y, Finish.x, Finish.y);
 Start.i:=-1;
 Finish.i:=0;
 MinX:=NaN;
 MinY:=NaN;
 read(n);
 for i:=1 to n do
  begin
   read(Points[i].x, Points[i].y);
   if Points[i].x < MinX then MinX:=Points[i].x;
   if Points[i].y < MinY then MinY:=Points[i].y;
   Points[i].i:=i;
  end;
 Points[n + 1]:=Start;
 Points[n + 2]:=Finish;
 for i:=1 to n + 2 do
  begin
   Points[i].x:=Points[i].x + abs(MinX) + 1;
   Points[i].y:=Points[i].y + abs(MinY) + 1;
  end;
 MaxX:=0;
 SortX(Points, 1, n + 2);
 NewPoints[Points[1].i].x:=2;
 for i:=2 to n + 2 do
  begin
   if (Points[i].x - Points[i - 1].x) = 0 then
    begin
     NewPoints[Points[i].i].x:=NewPoints[Points[i - 1].i].x;
    end;
   if (Points[i].x - Points[i - 1].x) = 1 then
    begin
     NewPoints[Points[i].i].x:=NewPoints[Points[i - 1].i].x + 1;
    end;
   if (Points[i].x - Points[i - 1].x) > 1 then
    begin
     NewPoints[Points[i].i].x:=NewPoints[Points[i - 1].i].x + 2;
    end;
   if NewPoints[Points[i].i].x > MaxX then MaxX:=NewPoints[Points[i].i].x;
  end;
 inc(MaxX);
 MaxY:=0;
 SortY(Points, 1, n + 2);
 NewPoints[Points[1].i].y:=2;
 for i:=2 to n + 2 do
  begin
   if (Points[i].y - Points[i - 1].y) = 0 then
    begin
     NewPoints[Points[i].i].y:=NewPoints[Points[i - 1].i].y;
    end;
   if (Points[i].y - Points[i - 1].y) = 1 then
    begin
     NewPoints[Points[i].i].y:=NewPoints[Points[i - 1].i].y + 1;
    end;
   if (Points[i].y - Points[i - 1].y) > 1 then
    begin
     NewPoints[Points[i].i].y:=NewPoints[Points[i - 1].i].y + 2;
    end;
   if NewPoints[Points[i].i].y > MaxY then MaxY:=NewPoints[Points[i].i].y;
  end;
 inc(MaxY);
 fillchar(Map, sizeof(Map), 0);
 fillchar(D, sizeof(D), 0);
 for i:=1 to n do Map[NewPoints[i].x, NewPoints[i].y]:=1;
 fillchar(Queue, sizeof(Queue), 0);
 Push(NewE(NewPoints[0].x, NewPoints[0].y, 1));
 Queue.C:=1;
 while ((D[NewPoints[-1].x, NewPoints[-1].y] = 0) and (Queue.C <= Queue.Length)) do
  begin
   E:=Queue.List[Queue.C];
   {Top}
   j:=1;
   while((E.P.x - j > 0) and (Map[E.P.x - j, E.P.y] = 0)) do
    begin
     Push(NewE(E.P.x - j, E.P.y, E.d + 1));
     inc(j);
    end;
   {Down}
   j:=1;
   while((E.P.x + j <= MaxX) and (Map[E.P.x + j, E.P.y] = 0)) do
    begin
     Push(NewE(E.P.x + j, E.P.y, E.d + 1));
     inc(j);
    end;
   {Left}
   j:=1;
   while((E.P.y - j > 0) and (Map[E.P.x, E.P.y - j] = 0)) do
    begin
     Push(NewE(E.P.x, E.P.y - j, E.d + 1));
     inc(j);
    end;
   {Right}
   j:=1;
   while((E.P.y + j <= MaxY) and (Map[E.P.x, E.P.y + j] = 0)) do
    begin
     Push(NewE(E.P.x, E.P.y + j, E.d + 1));
     inc(j);
    end;
   inc(Queue.C);
  end;
 if Queue.C > Queue.Length then write('NEVAR')
 else write(D[NewPoints[-1].x, NewPoints[-1].y] - 1);
 close(output);
 close(input);
end.
