program Test;
var n, m, k, i: longint;
function nod(a, b: longint): longint;
begin
while (a <> 0) and (b <> 0) do
 begin
  if a>=b then a:=a mod b
  else b:=b mod a;
 end;
 nod:=a + b;
end;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 read(n, m);
 k:=nod(n, m);
 for i:=1 to k do write('1');
 close(input);
 close(output);
end.