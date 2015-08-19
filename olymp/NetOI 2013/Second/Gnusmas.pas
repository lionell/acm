program Gnusmas;{FULL}
var m, n, k: int64;
    d: int64;
procedure Swap(var a, b: int64);
 var t: int64;
 begin
  t:=a;
  a:=b;
  b:=t;
 end;
function GCD(a, b: int64): int64;
 var t: int64;
 begin
  while (b > 0) do
   begin
    a:=a mod b;
    Swap(a, b);
   end;
  GCD:=a;
 end;
begin
 read(m, n);
 d:=m * n;
 k:=GCD(m, n);
 m:=m div k;
 n:=n div k;
 d:=d - k * (m + n - 1);
 write(d);
end.
