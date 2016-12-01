program DangerousZone;
type Point = record x, y: real; end;
var D: Point;
    m, i, j, Min, C, N: longint;
    S: real;
    A: array[1..100000] of Point;
    B: array[1..100000] of longint;
function New(x, y: real): Point;
 var T: Point;
 begin
  T.x:=x;
  T.y:=y;
  New:=T;
 end;
function Dest(A, B: Point): real;
 begin
  Dest:=Sqrt(Sqr(A.x - B.x) + Sqr(A.y - B.y));
 end;
function GetCos(A: Point; B: Point): real;
 begin
  GetCos:=(A.x * B.x + A.y * B.y) / (Dest(New(0, 0), A));
 end;
function Find(D: Point; C: longint): longint;
 var i, Min: longint;
     MaxCos, CCos, MaxLength: real;
     Length: real;
 begin
  MaxCos:=-1;
  Min:=1;
  for i:=1 to m do
   begin
    if (A[i].x <> A[C].x) or (A[i].y <> A[C].y) then
     begin
      Length:=Dest(A[i], A[C]);
      CCos:=GetCos(New(A[i].x - A[C].x, A[i].y - A[C].y), D);
      if (CCos > MaxCos) or ((CCos = MaxCos) and (Length > MaxLength)) then
       begin
        MaxCos:=CCos;
        MaxLength:=Length;
        Min:=i;
       end;
     end;
   end;
  Find:=Min;
 end;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 fillchar(A, sizeof(A), 0);
 fillchar(B, sizeof(B), 0);
 read(m);
 Min:=1;
 S:=0;
 for i:=1 to m do
  begin
   read(A[i].x, A[i].y);
   if (A[i].y < A[Min].y) or ((A[i].y = A[Min].y) and (A[i].x < A[Min].x)) then Min:=i;
  end;
 D:=New(-1, 0);
 C:=Min;
 N:=Find(D, C);
 i:=1;
 B[1]:=Min;
 while (N <> Min) do
  begin
   inc(i);
   B[i]:=N;
   D.x:=(A[N].x - A[C].x) / Dest(A[C], A[N]);
   D.y:=(A[N].y - A[C].y) / Dest(A[C], A[N]);
   C:=N;
   N:=Find(D, C);
  end;
 B[i + 1]:=Min;
 for j:=1 to i do
  begin
   S:=S + (A[B[j + 1]].x - A[B[j]].x) * (A[B[j]].y + A[B[j + 1]].y) / 2;
  end;
 write(S:0:0);
 close(input);
 close(output);
end.
