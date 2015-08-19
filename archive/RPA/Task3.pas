program Problem3;{FULL}
var a1, d, x, b: longint;
begin
 read(a1, d, x);
 b:=trunc((x - a1) / d) + 1;
 write(b);
end.