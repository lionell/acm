program Lighters;
var a: array[1..10000] of byte;
    n, m, i, x, y: longint;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 read(n, m);
 for i:=1 to m do
  begin
   read(x, y);
   inc(a[x]);
   inc(a[y]);
  end;
 for i:=1 to n do write(a[i], ' ');
 close(input);
 close(output);
end.