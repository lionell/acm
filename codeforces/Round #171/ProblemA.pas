program ProblemA;
var a, b, x, y, i, d, ox, oy: longint;
    bool: boolean;
begin
 read(x, y);
 i:=0;
 a:=0;
 b:=0;
 d:=-1;
 bool:=true;
 while bool do
  begin
   inc(i);
   inc(d);
   ox:=a;
   oy:=b;
   a:=a + i;
   if ((b = y) and (ox <= x) and (x <= a)) then bool:=false
   else
    begin
     ox:=a;
     inc(d);
     b:=b + i;
     if ((a = x) and (oy <= y) and (y <= b)) then bool:=false
     else
      begin
       oy:=b;
       inc(i);
       inc(d);
       a:=a - i;
       if ((b = y) and (ox >= x) and (x >= a)) then bool:=false
       else
        begin
         ox:=a;
         inc(d);
         b:=b - i;
         if ((a = x) and (oy >= y) and (y >= b)) then bool:=false
        end;
      end;
    end;
  end;
 write(d);
end.
