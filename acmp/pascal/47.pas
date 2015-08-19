program TheBestDivisor;
var i, n, d, s: longint;
function Sum(x: longint): longint;
var s: longint;
begin
 s:=0;
 while x > 0 do
  begin
   s:=s + x mod 10;
   x:=x div 10;
  end;
 Sum:=s;
end;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 s:=0;
 d:=0;
 read(n);
 for i:=1 to n do
  begin
   if n mod i = 0 then
    begin
     if Sum(i) > s then
      begin
       s:=Sum(i);
       d:=i;
      end;
    end;
  end;
 write(d);
 close(input);
 close(output);
end.