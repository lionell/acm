program Problem2;{FULL}
var d, m, y: longint;
begin
 read(d, m, y);
 d:=d + 1;
 case m of
  1: begin
      if d = 32 then
       begin
        d:=1;
        m:=2;
       end;
     end;
  2: begin
      if d = 29 then
       begin
        d:=1;
        m:=3;
       end;
     end;
  3: begin
      if d = 32 then
       begin
        d:=1;
        m:=4;
       end;
     end;
  4: begin
      if d = 31 then
       begin
        d:=1;
        m:=5;
       end;
     end;
  5: begin
      if d = 32 then
       begin
        d:=1;
        m:=6;
       end;
     end;
  6: begin
      if d = 31 then
       begin
        d:=1;
        m:=7;
       end;
     end;
  7: begin
      if d = 32 then
       begin
        d:=1;
        m:=8;
       end;
     end;
  8: begin
      if d = 32 then
       begin
        d:=1;
        m:=9;
       end;
     end;
  9: begin
      if d = 31 then
       begin
        d:=1;
        m:=10;
       end;
     end;
  10: begin
       if d = 32 then
        begin
         d:=1;
         m:=11;
        end;
      end;
  11: begin
       if d = 31 then
        begin
         d:=1;
         m:=12;
        end;
      end;
  12: begin
       if d = 32 then
        begin
         d:=1;
         m:=1;
         y:=y + 1;
        end;
      end;
  end;
 write(d, ' ', m, ' ', y);
end.