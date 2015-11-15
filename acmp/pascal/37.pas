program Zip;
var n, i, x1, y1, x2, y2: longint;
    q: real;
    b: boolean;
function Leng(a, b: longint): real;
begin
 Leng:=sqrt(sqr(a) + sqr(b));
end;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 read(n, q);
 b:=true;
 for i:=1 to n do
  begin
   read(x1, y1, x2, y2);
   if (Leng(x1, y1) * q < Leng(x2, y2)) then b:=false;
  end;
 if b then write('Yes')
 else write('No');
 close(input);
 close(output);
end.