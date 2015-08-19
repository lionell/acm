program Problem4;  // FULL
const Min = -10001;         // Min border
      Max = 10001;
      C = 20000000;
var a: array[Min..Max] of longint;
    n, i, x, d: longint;
    bool: boolean;
begin
 read(n);
 for i:=Min to Max do a[i]:=C;
 for i:=1 to n do
  begin
   read(x, d);
   a[x]:=x + d;
  end;
 i:=Min - 1;
 bool:=true;
 while (i < Max) and (bool) do
  begin
   inc(i);
   if (a[i] <> C) and (a[i] > Min) and (a[i] < Max) then
    begin
     if (a[a[i]] = i) then bool:=false;
    end;
  end;
 if bool then write('NO')
 else write('YES');
end.
