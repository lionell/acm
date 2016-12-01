program ProblemC;
var a, b: array[-2000..2000] of char;
    f: array[-2000..2000] of integer;
    c, d, i, j, k, m: longint;
begin
 fillchar(a, sizeof(a), '0');
 fillchar(b, sizeof(b), '1');
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 c:=0;
 while not(eoln) do
  begin
   inc(c);
   read(a[c]);
  end;
 readln;
 d:=0;
 while not(eoln) do
  begin
   inc(d);
   read(b[d]);
  end;
 for i:=-d to c do
  begin
   k:=0;
   j:=1;
   while a[i + j - 1] = b[j] do inc(j);
    while (j < d + 1) do
     begin
      if a[j] <> b[j] then inc(k);
      inc(j);
     end;
   f[i]:=k;
  end;
 m:=10000;
 for i:=1 to c do if f[i] < m then m:=f[i];
 write(m);
 close(input);
 close(output);
end.
