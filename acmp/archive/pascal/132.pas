program Deixtra;
const Infinity = 1000000000;
type Data = array[1..100, 1..100] of longint;
     Mass = array[1..100] of longint;
     Bool = array[1..100] of boolean;
var A: Data;
    D: Mass;
    B: Bool;
    n, s, f, i, j, k, m: longint;
procedure Search(A: Data; var D: Mass; B: Bool; x: longint);
 begin
  for i:=1 to n do
   begin
    if (A[x, i] > -1) and (D[i] > D[x] + A[x, i]) then D[i]:=D[x] + A[x, i];
   end;
 end;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 fillchar(A, sizeof(A), 0);
 fillchar(D, sizeof(D), 0);
 fillchar(B, sizeof(B), 0);
 read(n, s, f);
 for i:=1 to n do D[i]:=Infinity;
 for i:=1 to n do
  begin
   for j:=1 to n do
    begin
     read(A[i, j]);
    end;
  end;
 B[s]:=true;
 D[s]:=0;
 Search(A, D, B, s);
 i:=1;
 while i > 0 do
  begin
   k:=n + 1;
   m:=Infinity;
   for j:=1 to n do
    begin
     if (B[j] = false) and (D[j] < m) then
      begin
       m:=D[j];
       k:=j;
      end;
    end;
   if k = n + 1 then i:=0
   else
    begin
     i:=1;
     B[k]:=true;
     Search(A, D, B, k);
    end;
  end;
 if D[f] >= Infinity then write('-1')
 else write(D[f]);
 close(input);
 close(output);
end.
