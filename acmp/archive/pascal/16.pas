program Lesenka;
var n: longint;
function Calc(x, k: longint): longint;
var i: longint;
    d: int64;
begin
 if (x = 1) or (x = 0) then d:=1
 else
  begin
   d:=0;
   for i:=2 to k do
    begin
     if x - i >= 0 then
      begin
       d:=d + Calc(x - i, i - 1);
      end;
    end;
  end;
 Calc:=d;
end;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 read(n);
 write(Calc(n, n));
 close(input);
 close(output);
end.
