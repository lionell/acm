program Birthday;{F}
var n, m, i: longint;
    d: int64;
function Min(x, y: longint): longint;
begin
 if x > y then Min:=y
 else Min:=x;
end;
begin
 d:=0;
 read(n, m);
 for i:=1 to Min(n, m) do
  begin
   d:=d + ((n - i + 1) * (m - i + 1))
  end;
 write(d);
end.
