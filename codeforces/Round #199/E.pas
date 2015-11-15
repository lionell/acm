program ProblemE;
type Mass  = record
             Arr: array[1..10000] of longint;
             length: integer;
             end;
var n, m, i, j, x, y, d: longint;
    a: array[1..10000] of Mass;
procedure Push(var t: Mass; k: longint);
var bool: boolean;
    j: integer;
begin
 bool:=true;
 j:=0;
 while (j <= t.length) and (bool) do
  begin
   inc(j);
   if(t.Arr[j] = k) then bool:=false;
  end;
 if bool then
  begin
   inc(t.length);
   t.Arr[t.length]:=k;
  end;
end;
function Equals(x, y: Mass): boolean;
var bool: boolean;
    j: longint;
begin
 bool:=true;
 if x.length <> y.length then bool:=false;
 j:=0;
 while (j <= x.length) and (bool) do
  begin
   inc(j);
   if (x.Arr[j] <> y.Arr[j]) then bool:=false;
  end;
 Equals:=bool;
end;
begin
 read(n, m);
 for i:=1 to m do
  begin
   read(x, y);
   Push(a[x], y);
   Push(a[y], x);
   Push(a[x], x);
   Push(a[y], y);
  end;
 d:=0;
 for i:=1 to n do
  begin
   for j:=1 to n do
    begin
     if (i <> j) and (Equals(a[i], a[j])) then inc(d);
    end;
  end;
 write(d div 2);
end.
