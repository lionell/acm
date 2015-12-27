program Dyn;
var n, i: longint;
    a: array[1..100] of longint;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 fillchar(a, sizeof(a), 0);
 read(n);
 a[1]:=1;
 a[2]:=1;
 a[3]:=2;
 a[4]:=4;
 a[5]:=6;
 i:=5;
 while i < n do
  begin
   inc(i);
   a[i]:=a[i - 1] + a[i - 2] - a[i - 5];
  end;
 write(a[n]);
 close(input);
 close(output);
end.