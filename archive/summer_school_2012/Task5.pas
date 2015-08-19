program Problem5; // FULL
const Max = 1000000000;
var n, m, k, r, c, d, i: longint;
    a: array[1..1000] of longint;
begin
 d:=0;
 read(n, m, k);
 for i:=1 to n do a[i]:=Max;
 for i:=1 to n do
  begin
   read(r, c);
   if a[r] > c then a[r]:=c;
  end;
  for i:=1 to n do if a[i] <> Max then d:=d + a[i];
  if d > k then write(k)
  else write(d);
end.
