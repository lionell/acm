program Dragons;
var n, s: int64;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 read(n);
 s:=1;
 while n > 4 do
  begin
   s:=s * 3;
   n:=n - 3;
  end;
 s:=s * n;
 write(s);
 close(input);
 close(output);
end.