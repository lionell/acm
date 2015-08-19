program Temp;
var i, n, t: longint;
    a: array[-100..100] of integer;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 fillchar(a, sizeof(a), 0);
 read(n);
 for i:=1 to n do
  begin
   read(t);
   inc(a[t]);
  end;
 for i:=-100 to 100 do
  begin
   if a[i] > 0 then
    begin
     for t:=1 to a[i] do write(i, ' ');
    end;
  end;
 close(input);
 close(output);
end.