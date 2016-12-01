program Shapo;
var p, k, d, i, q: longint;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 read(p, k);
 d:=0;
 for i:=p to k do
  begin
   q:=i;
   while q > 2 do
    begin
     if q mod 2 = 0 then q:=q div 2
     else q:=3 * q + 1;
     inc(d);
    end;
  end;
 write(d);
 close(input);
 close(output);
end.