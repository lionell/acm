program Stairs;
var n, i: longint;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 read(n);
 i:=1;
 while (n - i >= 0) do
  begin
   n:=n - i;
   inc(i);
  end;
 write(i - 1);
 close(input);
 close(output);
end.