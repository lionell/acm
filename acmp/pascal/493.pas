program War;
var a: array[0..101, 0..101] of char;
    n, m, i, j, k: longint;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 fillchar(a, sizeof(a), '.');
 readln(n, m);
 k:=0;
 for i:=1 to n do
  begin
   for j:=1 to m do read(a[i, j]);
   readln;
  end;
 for i:=1 to n do
  begin
   for j:=1 to m do
    begin
     if (a[i, j] = '.') and (a[i, j - 1] = '.') and (a[i, j + 1] = '.')
     and (a[i - 1, j] = '.') and (a[i + 1, j] = '.') then inc(k);
    end;
  end;
 write(k);
 close(input);
 close(output);
end.