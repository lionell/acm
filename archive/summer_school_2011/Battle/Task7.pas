program Dihlofos;
var a: array[1..1000] of longint;
    n, k, i, x, y, z, s: longint;
begin
read(n, k);
s:=0;
fillchar(a, sizeof(a), 0);
for i:=1 to k do
 begin
  read(x, y, z);
  dec(a[x], z);
  inc(a[y], z);
 end;
for i:=1 to n do
 begin
  if a[i] < 0 then inc(s, abs(a[i]));
 end;
write(s);
end.
