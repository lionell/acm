program Floid;
var a: array[1..1000, 1..1000] of longint;
    n, i, j, k: longint;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 fillchar(a, sizeof(a), 0);
 read(n);
 for i:=1 to n do
  for j:=1 to n do
   read(a[i, j]);
 for i:=1 to n do
   for j:=1 to n do
     for k:=1 to n do
       if (a[i, j] > a[i, k] + a[k, j]) and (a[i, k] <> 0) and (a[k, j] <> 0) then a[i, j]:=a[i, k] + a[k, j];
 for i:=1 to n do
  begin
   for j:=1 to n do write(a[i, j], ' ');
   writeln;
  end;
 close(input);
 close(output);
end.
