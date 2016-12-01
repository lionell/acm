program Problem1; // FULL
var n, m, a, d, k, g: int64;
begin
 d:=0;
 k:=0;
 g:=0;
 read(n, m, a);
 d:=n div a;
 if n mod a <> 0 then d:=d + 1;
 k:=m div a;
 if m mod a <> 0 then k:=k + 1;
 g:=d*k;
 write(g);
end.
