program ProblemA;
var n, i, j, d, o, s1, s2: longint;
    a: array[1..100, 1..100] of byte;
begin
 //assign(input, 'input.txt');
 //reset(input);
 //assign(output, 'output.txt');
 //rewrite(output);
 read(n);
 d:=0;
 for i:=1 to n do
  for j:=1 to n do read(a[i, j]);
 for i:=1 to n do
  for j:=1 to n do
   begin
    s1:=0;
    s2:=0;
    for o:=1 to n do s1:=s1 + a[i, o];
    for o:=1 to n do s2:=s2 + a[o, j];
    if s1 > s2 then inc(d);
   end;
  write(d);
  //close(input);
  //close(output);
end.