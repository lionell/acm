program Problem6; // FULL
const Min = -1000;
      Max = 1000;
var n, m, i, d, x: longint;
    a: array[Min..Max] of integer;
    b: boolean;
begin
 d:=0;
 read(n, m);
 for i:=1 to n do
  begin
   read(x);
   inc(a[x]);
  end;
 b:=true;
 i:=Min;
 while (i <= 0) and (m > 0) do
  begin
   if m < a[i] then
    begin
     d:=d + a[m] * i;
     m:=0;
    end
   else
    begin
     d:=d + a[i] * i;
     m:=m - a[i];
    end;
   inc(i);
  end;
 d:=abs(d);
 write(d);
end.
