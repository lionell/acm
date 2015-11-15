program Cracks;
const E = 0.00001;
const Infinity = 10000000;
type Point = record x, y: real; end;
     Line = record A, B: Point; end;
     TArray = array[1..1000] of Line;
     Struct = array[1..1000, 1..1000] of real;
     TAnswer = array[1..1000] of real;
     TVisited = array[1..1000] of boolean;
var A, B, C, D: Point;
    AMass, BMass: TArray;
    AWeight, BWeight: Struct;
    AAnswer, BAnswer: TAnswer;
    AVisited, BVisited: TVisited;
    W, H, M: real;
    n, i, j, v, Minimal: longint;
function NP(A, B, C: Point): Point;
var D: Point;
begin
 D.y:=((C.x - A.x) * (B.x - A.x) * (B.y - A.y) + C.y * (sqr(B.y - A.y)) + A.y * (sqr(B.x - A.x))) / (sqr(B.x - A.x) + sqr(B.y - A.y));
 if (B.x <> A.x) then D.x:=C.x + ((B.y - A.y) * (C.y - D.y)) / (B.x - A.x)
 else D.x:=A.x;
 NP:=D;
end;
function Dist(A, B: Point): real;
begin
 Dist:=sqrt(sqr(A.x - B.x) + sqr(A.y - B.y));
end;
function Check(A, B, C: Point): boolean;
begin
 if((Dist(A, C) + Dist(C, B) - Dist(A, B)) < E) then
  begin
   Check:=true
  end
 else Check:=false;
end;
function Min(a, b: real): real;
begin
 if (a < b) then Min:=a
 else Min:=b;
end;
function Find(A, B, C, D: Point): real;
var T: Point;
    s: real;
begin
 s:=Infinity;
 T:=NP(A, B, C);
 if Check(A, B, T) then s:=Dist(C, T);
 T:=NP(A, B, D);
 if Check(A, B, T) then s:=Min(Dist(D, T), s);
 T:=NP(C, D, A);
 if Check(C, D, T) then s:=Min(Dist(A, T), s);
 T:=NP(C, D, B);
 if Check(C, D, T) then s:=Min(Dist(B, T), s);
 s:=Min(Dist(A, C), s);
 s:=Min(Dist(A, D), s);
 s:=Min(Dist(B, C), s);
 s:=Min(Dist(B, D), s);
 Find:=s;
end;
begin
 //assign(input, 'input.txt');
 //reset(input);
 fillchar(AMass, sizeof(AMass), 0);
 fillchar(BMass, sizeof(BMass), 0);
 fillchar(AVisited, sizeof(AVisited), 0);
 fillchar(BVisited, sizeof(BVisited), 0);
 for i:=1 to 1000 do
  for j:=1 to 1000 do
   AWeight[i, j]:=-1;
 for i:=1 to 1000 do
  for j:=1 to 1000 do
   BWeight[i, j]:=-1;
 for i:=1 to 1000 do AAnswer[i]:=Infinity;
 AAnswer[1]:=0;
 for i:=1 to 1000 do BAnswer[i]:=Infinity;
 BAnswer[1]:=0;
 read(w, h);
 read(n);
 inc(n);
 AMass[1].A.x:=0;
 AMass[1].A.y:=0;
 AMass[1].B.x:=0;
 AMass[1].B.y:=h;
 BMass[1].A.x:=0;
 BMass[1].A.y:=0;
 BMass[1].B.x:=w;
 BMass[1].B.y:=0;
 for i:=2 to n do
  begin
   read(AMass[i].A.x, AMass[i].A.y, AMass[i].B.x, AMass[i].B.y);
   BMass[i]:=AMass[i];
  end;
 inc(n);
 AMass[n].A.x:=w;
 AMass[n].A.y:=0;
 AMass[n].B.x:=w;
 AMass[n].B.y:=h;
 BMass[n].A.x:=0;
 BMass[n].A.y:=h;
 BMass[n].B.x:=w;
 BMass[n].B.y:=h;
 for i:=1 to n do
  begin
   for j:=i + 1 to n do
    begin
     AWeight[i, j]:=Find(AMass[i].A, AMass[i].B, AMass[j].A, AMass[j].B);
     AWeight[j, i]:=AWeight[i, j];
     BWeight[i, j]:=Find(BMass[i].A, BMass[i].B, BMass[j].A, BMass[j].B);
     BWeight[j, i]:=BWeight[i, j];
    end;
  end;
 v:=0;
 while (v < n) do
  begin
   Minimal:=n;
   for i:=1 to n do
    begin
     if (AVisited[i] = false) and (AAnswer[i] < AAnswer[Minimal]) then Minimal:=i;
    end;
   for i:=1 to n do
    begin
     if (AVisited[i] = false) and (AWeight[Minimal, i] <> -1) and (AAnswer[i] > AAnswer[Minimal] + AWeight[Minimal, i]) then AAnswer[i]:=AAnswer[Minimal] + AWeight[Minimal, i];
    end;
   AVisited[Minimal]:=true;
   inc(v);
  end;
 v:=0;
 while (v < n) do
  begin
   Minimal:=n;
   for i:=1 to n do
    begin
     if (BVisited[i] = false) and (BAnswer[i] < BAnswer[Minimal]) then Minimal:=i;
    end;
   for i:=1 to n do
    begin
     if (BVisited[i] = false) and (BWeight[Minimal, i] <> -1) and (BAnswer[i] > BAnswer[Minimal] + BWeight[Minimal, i]) then BAnswer[i]:=BAnswer[Minimal] + BWeight[Minimal, i];
    end;
   BVisited[Minimal]:=true;
   inc(v);
  end;
 if AAnswer[n] < BAnswer[n] then write(AAnswer[n]:0:11)
 else write(BAnswer[n]:0:11);
 //close(input);
end.
