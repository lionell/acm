program Painter;
var a: array[0..2000, 0..2000] of byte;
    w, h, n, x1, y1, x2, y2, i, j, o, d: longint;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 fillchar(a, sizeof(a), 0);
 read(w, h);
 read(n);
 for i:=1 to n do
  begin
   read(x1, y1, x2, y2);
   dec(x2);
   dec(y2);
   for j:=x1 to x2 do
   for o:=y1 to y2 do
   a[j, o]:=1;
  end;
 d:=0;
 for i:=0 to w do
 for j:=0 to h do
  if a[i, j] = 1 then inc(d);
 d:=(w*h) - d;
 write(d);
 close(input);
 close(output);
end.