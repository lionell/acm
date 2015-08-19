program Problem4;{FULL}
var x, y, r1, r2: longint;
    d: real;
begin
 read(x, y, r1, r2);
 d:=sqrt(x * x + y * y);
 if(d < r1) and (d < r2) and (y > 0) then write('YES')
 else write('NO');
end.