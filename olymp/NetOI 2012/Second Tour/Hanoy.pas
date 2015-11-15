program Hanoy;
var n, a, b, i: longint;
    r: int64;
begin
 read(n, a, b);
 r:=1;
 for i:=1 to n - 1 do
  begin
   r:=r * 3 + 1;
   r:=r mod 1000000007;
  end;
 if(a + b = 4) then
  begin
   r:=r * 2;
   r:=r mod 1000000007;
  end;
 write(r);
end.
