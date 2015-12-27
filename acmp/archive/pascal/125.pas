program Color;
var n, i, j, d: longint;
    a: array[1..101] of byte;
    b: array[1..101, 1..101] of byte;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 fillchar(b, sizeof(b), 0);
 read(n);
 d:=0;
 for i:=1 to n do
  for j:=1 to n do
   read(b[i, j]);
 for i:=1 to n do
  read(a[i]);
 for i:=1 to n do
  begin
   for j:=1 to n do
    begin
     if (b[i, j] = 1) and (a[j] <> a[i]) then inc(d);
    end;
  end;
 d:=d div 2;
 write(d);
 close(input);
 close(output);
end.