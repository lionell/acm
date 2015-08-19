program Test;
const E = 0.0000001;
var n, k, i, j: longint;
    d, l: real;
    b: boolean;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 read(n, k);
 i:=1;
 l:=n/(n - 1);
 b:=true;
 while (b) do
  begin
   d:=i;
   for j:=1 to n do
    begin
     d:=d * l + k;
    end;
   if abs(trunc(d) - d) < E then b:=false;
   inc(i);
  end;
 write(d:0:0, ' ', i - 1);
 close(input);
 close(output);
end.