program ProblemD;
type Mass = array[1..1000000] of longint;
var A, B: Mass;
    n, i, m, d: longint;
function GCD(a, b: longint): longint;
 begin
  while (a <> b) do
   begin
    if a > b then a:=a - b
    else b:=b - a;
   end;
  GCD:=a;
 end;
function Step(x: longint): longint;
 var m, d, i: longint;
 begin
  m:=0;
  for i:=x + 1 to n do
   begin
    if (GCD(A[x], A[i]) > 1) then
     begin
      if (B[A[i]] > 0) and (B[A[i]] > m) then m:=B[A[i]]
      else
       begin
        d:=Step(i);
        if d > m then m:=d;
       end;
     end;
   end;
  inc(m);
  B[A[x]]:=m;
  Step:=m;
 end;
begin
 read(n);
 m:=0;
 for i:=1 to n do read(A[i]);
 for i:=1 to n do
  begin
   d:=Step(i);
   if m < d then m:=d;
  end;
 write(m);
end.