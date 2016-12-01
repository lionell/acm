program Sets;
var a: array[0..1000001] of integer;
    n, m, i, d, max: longint;
begin
 fillchar(a, sizeof(a), 0);
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 max:=-1;
 read(n, m);
 for i:=1 to n do
  begin
   read(d);
   if d > max then max:=d;
   a[d]:=1;
  end;
 for i:=1 to m do
  begin
   read(d);
   if d > max then max:=d;
   if a[d] = 1 then a[d]:=2;
  end;
 for i:=0 to max do if a[i] = 2 then write(i, ' ');
 close(input);
 close(output);
end.