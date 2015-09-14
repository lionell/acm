program Pill;
const Infinity = 1000000;
type Point = record x, y: real; end;
var n, i, Min, C, O: longint;
    Length: real;
    A: array[1..1000] of Point;
    D: Point;
function Dest(A, B: Point): real;
 begin
  Dest:=Sqrt(Sqr(A.x - B.x) + Sqr(A.y - B.y));
 end;
function New(x, y: real): Point;
 var T: Point;
 begin
  T.x:=x;
  T.y:=y;
  New:=T;
 end;
function GetCos(A, B: Point): real;
 begin
  GetCos:=(A.x * B.x + A.y * B.y) / Dest(New(0, 0), A);
 end;
function FindMin(D: Point; Current: longint): longint;
 var i, M: longint;
     CosA, CosM, L, LM: real;
 begin
  CosM:=-1;
  for i:=1 to n do
   begin
    if i <> Current then
     begin
      L:=Dest(A[Current], A[i]);
      CosA:=GetCos(New(A[i].x - A[Current].x, A[i].y - A[Current].y), D);
      //CosA:=((abs(A[Current].x - A[i].x) * D.x + abs(A[Current].y - A[i].y) * D.y) / L);
      if CosA > CosM then
       begin
        CosM:=CosA;
        M:=i;
        LM:=L;
       end
      else if (CosA = CosM) and (L > LM) then
       begin
        CosM:=CosA;
        M:=i;
        LM:=L;
       end;
     end;
   end;
  FindMin:=M;
 end;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 fillchar(A, sizeof(A), 0);
 read(n);
 Min:=1;
 for i:=1 to n do
  begin
   read(A[i].x, A[i].y);
   if A[i].y < A[Min].y then Min:=i
   else if (A[i].y = A[Min].y) and (A[i].x < A[Min].x) then Min:=i;
  end;
 D.x:=-1;
 D.y:=0;
 O:=Min;
 C:=FindMin(D, Min);
 while C <> Min do
  begin
   Length:=Length + Dest(A[O], A[C]);
   D.x:=(A[C].x - A[O].x) / Dest(A[O], A[C]);
   D.y:=(A[C].y - A[O].y) / Dest(A[O], A[C]);
   O:=C;
   C:=FindMin(D, C);
  end;
 Length:=Length + Dest(A[O], A[C]);
 write(Length:0:2);
 close(input);
 close(output);
end.
