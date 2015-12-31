program Problem16;{FULL}
var a, b, i: longint;
    c, d, e: set of byte;
    bool: boolean;
begin
 c:=[];
 d:=[];
 read(a, b);
 while(a > 0) do
  begin
   c:=c + [a mod 10];
   a:=a div 10;
  end;
 while(b > 0) do
  begin
   d:=d + [b mod 10];
   b:=b div 10;
  end;
 e:=c * d;
 i:=10;
 bool:=true;
 while (i > 0) and (bool) do
  begin
   i:=i - 1;
   if (i in e) then bool:=false;
  end;
 write(i);
end.