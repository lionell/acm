program Noom;
var n, i, d, k, l: int64;
    chr: char;
function CharToByte(ch: char): byte;
var code: integer;
    t: byte;
begin
 val(ch, t, code);
 CharToByte:=t;
end;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 l:=0;
 n:=0;
 while not(eof(input)) do
  begin
   read(chr);
   n:=n + CharToByte(chr);
   inc(l);
  end;
 if (l = 1) and (n < 10) then i:=0
 else i:=1;
 while n > 9 do
  begin
   d:=n;
   n:=0;
   while d > 9 do
    begin
     n:=n + d mod 10;
     d:=d div 10;
    end;
   n:=n + d;
   inc(i);
  end;
 write(n, ' ', i);
 close(input);
 close(output);
end.