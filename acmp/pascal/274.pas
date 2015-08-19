program Friend;
var n, i: integer;
    a, b: longint;
    x, y: set of byte;
    m: array[1..10] of byte;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 read(n);
 for i:=1 to n do
  begin
   read(a, b);
   x:=[];
   y:=[];
   while a > 0 do
    begin
     x:=x + [a mod 10];
     a:=a div 10;
    end;
   while b > 0 do
    begin
     y:=y + [b mod 10];
     b:=b div 10;
    end;
   if x = y then m[i]:=1
   else m[i]:=0;
  end;
 for i:=1 to n do if m[i] = 1 then writeln('YES')
 else writeln('NO');
 close(input);
 close(output);
end.