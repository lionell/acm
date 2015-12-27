program Lisa;
var n, k, l: longint;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 k:=0;
 l:=0;
 read(n);
 while (n > 0) do
  begin
   if (n mod 5 = 0) then
    begin
     inc(k, n div 5);
     n:=0;
    end
    else
     begin
      if (n mod 3 = 0) and (n < 15)then
       begin
        inc(l, n div 3);
        n:=0;
       end
       else
        begin
         n:=n - 5;
         inc(k);
        end;
     end;
  end;
 write(k, ' ', l);
 close(input);
 close(output);
end.