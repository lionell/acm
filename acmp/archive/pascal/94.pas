program Dragon;
var n, m, k, i: longint;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 read(n, m, k);
 if m = n then write('1')
 else
  begin
   if(n <= k) then write('NO')
   else
    begin
     i:=0;
     m:=m - k;
     while (m > 0) do
      begin
       m:=m + k;
       m:=m - n;
       inc(i);
      end;
     write(i);
    end;
  end;
 close(input);
 close(output);
end.