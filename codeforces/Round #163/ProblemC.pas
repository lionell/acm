program ProblemC;
type Mass = array[1..1000, 1..1000] of byte;
type Str = array[1..1000] of longint;
var A: Mass;
    R, C: Str;
    n, i, j, x, y: longint;
begin
 fillchar(A, sizeof(A), 0);
 fillchar(R, sizeof(R), 0);
 fillchar(C, sizeof(C), 0);
 read(n);
 for i:=1 to n - 1 do
  begin
   read(x, y);
   A[x, y]:=1;
  end;
 for i:=1 to n do
  begin
   for j:=1 to n do
    begin
     R[i]:=R[i] + A[i, j];
     C[j]:=C[j] + A[i, j];
    end;
  end;

end.