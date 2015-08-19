program Trees;
var n, m, i: longint;
    s: int64;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 read(n, m);
 if m = 0 then write('1')
 else
  begin
   if m = 1 then write(n)
   else
    begin
     s:=0;
     i:=0;
     while m + i * (m - 1) <= n do
      begin
       s:=s + n - (m + i * (m - 1)) + 1;
       inc(i);
      end;
     write(s);
    end;
  end;
 close(input);
 close(output);
end.
