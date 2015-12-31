program Keyboard2;
var a: array[1..100] of longint;
    n, k, i, t : longint;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 fillchar(a, sizeof(a), 0);
 readln(n);
 for i:=1 to n do read(a[i]);
 read(k);
 for i:=1 to k do
  begin
   read(t);
   dec(a[t]);
  end;
 for i:=1 to n do
  begin
   if a[i] >= 0 then writeln('no')
   else writeln('yes');
  end;
 close(input);
 close(output);
end.