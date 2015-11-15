program Rook; {FAST}
const NaN = 2000000000;
type TPoint = record x, y, i: longint; end;
     TPoints = array[-1..1003] of TPoint;
     TElement = record P: TPoint; d: longint; end;
     TList = array[1..3000] of TElement;
     TQueue = record
               List: TList;
               C, Length: longint;
              end;
     TMap = array[1..2005, 1..2005] of integer;
var Points, NewPoints: TPoints;
    Start, Finish: TPoint;
    n, i, j, MinX, MinY, MaxX, MaxY, Flag: longint;
    Queue1, Queue2: TQueue;
    Map, D1, D2: TMap;
    E: TElement;
    Answer: longint;
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

function Min(a, b: longint): longint;
 begin
  if a < b then Min:=a
  else Min:=b;
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

procedure Push1(E: TElement);
 begin
  if D1[E.P.x, E.P.y] = 0 then
   begin
    inc(Queue1.Length);
    Queue1.List[Queue1.Length]:=E;
    D1[E.P.x, E.P.y]:=E.d;
    if D2[E.P.x, E.P.y] > 0 then
     begin
      if Answer = 0 then Answer:=D1[E.P.x, E.P.y] + D2[E.P.x, E.P.y]
      else Answer:=Min(Answer, D1[E.P.x, E.P.y] + D2[E.P.x, E.P.y]);
     end;
   end;
 end;

procedure Push2(E: TElement);
 begin
  if D2[E.P.x, E.P.y] = 0 then
   begin
    inc(Queue2.Length);
    Queue2.List[Queue2.Length]:=E;
    D2[E.P.x, E.P.y]:=E.d;
    if D1[E.P.x, E.P.y] > 0 then
     begin
      if Answer = 0 then Answer:=D1[E.P.x, E.P.y] + D2[E.P.x, E.P.y]
      else Answer:=Min(Answer, D1[E.P.x, E.P.y] + D2[E.P.x, E.P.y]);
     end;
   end;
 end;

begin
 {assign(input, 'tornis2.in');
 reset(input);
 assign(output, 'tornis2.out');
 rewrite(output);}
 //fillchar(Points, sizeof(Points), 0);
 //fillchar(NewPoints, sizeof(NewPoints), 0);
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
 Answer:=0;
 //fillchar(Map, sizeof(Map), 0);
 //fillchar(D1, sizeof(D1), 0);
 //fillchar(D2, sizeof(D2), 0);
 for i:=1 to n do Map[NewPoints[i].x, NewPoints[i].y]:=1;
 //fillchar(Queue1, sizeof(Queue1), 0);
 //fillchar(Queue2, sizeof(Queue2), 0);
 Push1(NewE(NewPoints[-1].x, NewPoints[-1].y, 1));
 Push2(NewE(NewPoints[0].x, NewPoints[0].y, 1));
 Queue1.C:=1;
 Queue2.C:=1;
 Flag:=1;
 while ((Answer = 0) and (Queue1.C <= Queue1.Length) and (Queue2.C <= Queue2.Length)) do
  begin
   if (Flag = 1) then
    begin
     E:=Queue1.List[Queue1.C];
     {Top}
     j:=1;
     while((E.P.x - j > 0) and (Map[E.P.x - j, E.P.y] = 0)) do
      begin
       Push1(NewE(E.P.x - j, E.P.y, E.d + 1));
       inc(j);
      end;
     {Down}
     j:=1;
     while((E.P.x + j <= MaxX) and (Map[E.P.x + j, E.P.y] = 0)) do
      begin
       Push1(NewE(E.P.x + j, E.P.y, E.d + 1));
       inc(j);
      end;
     {Left}
     j:=1;
     while((E.P.y - j > 0) and (Map[E.P.x, E.P.y - j] = 0)) do
      begin
       Push1(NewE(E.P.x, E.P.y - j, E.d + 1));
       inc(j);
      end;
     {Right}
     j:=1;
     while((E.P.y + j <= MaxY) and (Map[E.P.x, E.P.y + j] = 0)) do
      begin
       Push1(NewE(E.P.x, E.P.y + j, E.d + 1));
       inc(j);
      end;
     inc(Queue1.C);
     Flag:=2;
    end
   else
    begin
     E:=Queue2.List[Queue2.C];
     {Top}
     j:=1;
     while((E.P.x - j > 0) and (Map[E.P.x - j, E.P.y] = 0)) do
      begin
       Push2(NewE(E.P.x - j, E.P.y, E.d + 1));
       inc(j);
      end;
     {Down}
     j:=1;
     while((E.P.x + j <= MaxX) and (Map[E.P.x + j, E.P.y] = 0)) do
      begin
       Push2(NewE(E.P.x + j, E.P.y, E.d + 1));
       inc(j);
      end;
     {Left}
     j:=1;
     while((E.P.y - j > 0) and (Map[E.P.x, E.P.y - j] = 0)) do
      begin
       Push2(NewE(E.P.x, E.P.y - j, E.d + 1));
       inc(j);
      end;
     {Right}
     j:=1;
     while((E.P.y + j <= MaxY) and (Map[E.P.x, E.P.y + j] = 0)) do
      begin
       Push2(NewE(E.P.x, E.P.y + j, E.d + 1));
       inc(j);
      end;
     inc(Queue2.C);
     Flag:=1;
    end;
  end;
 if (Queue1.C > Queue1.Length) or (Queue2.C > Queue2.Length) then write('-1')
 else write(Answer - 2);
 {close(output);
 close(input);}
end.
