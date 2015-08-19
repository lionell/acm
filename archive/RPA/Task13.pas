program Problem13;{FULL}
var a, b, i: longint;
    c, d: set of byte;
begin
 assign(input, 'Task.dat');
 reset(input);
 assign(output, 'Task.sol');
 rewrite(output);
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
 for i:=0 to 9 do
  begin
   if (i in c) and (i in d) then write(i, ' ');
  end;
 close(input);
 close(output);
end.