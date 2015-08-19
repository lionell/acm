program Dance;
var n, i: longint;
    c: char;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 read(n);
 c:='B';
 if n = 2 then write('BR')
 else
  begin
   while n > 1 do
    begin
     n:=n - 2;
     write(c);
     write(c);
     if c = 'B' then c:='R'
     else c:='B';
    end;
   if n = 1 then write(c);
  end;
 close(input);
 close(output);
end.