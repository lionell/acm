program Left;
var n, d, i: longint;
    s: string;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 readln(n);
 for i:=1 to n do
  begin
   readln(s);
   if s[1] = s[4] then inc(d);
  end;
 write(d);
 close(input);
 close(output);
end.