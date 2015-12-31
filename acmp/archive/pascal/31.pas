program StablePoints;
type Mass = array[1..1000] of byte;
var A: Mass;
    D: array[1..100] of longint;
    m, k, n, i, s, Ans: longint;
    b: boolean;
function Factor(n: longint): longint;
var i, s: longint;
begin
 s:=1;
 for i:=1 to n do s:=s * i;
 Factor:=s;
end;
function Find(l: longint): longint;
var i: longint;
    b: boolean;
begin
 b:=true;
 i:=l - 1;
 while (i <= n) and (b) do
  begin
   inc(i);
   if D[i] = 0 then b:=false;
  end;
 Find:=i;
end;
procedure Go(x: longint);
var i, k: longint;
    bool: boolean;
begin
 if x = n + 1 then
  begin
   bool:=true;
   for i:=1 to n do if A[i] = i then bool:=false;
   if bool then inc(s);
  end
 else
  begin
   k:=Find(1);
   while k <= n do
    begin
     A[x]:=k;
     D[k]:=1;
     Go(x + 1);
     D[k]:=0;
     k:=Find(k + 1);
    end;
  end;
end;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 fillchar(A, sizeof(A), 0);
 fillchar(D, sizeof(D), 0);
 read(m, k);
 Ans:=Factor(m) div (Factor(m - k) * Factor(k));
 n:=m - k;
 s:=0;
 Go(1);
 Ans:=Ans * s;
 write(Ans);
 close(input);
 close(output);
end.