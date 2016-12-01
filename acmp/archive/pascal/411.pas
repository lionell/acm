program Square;
const e = 0.000001;
var a, b, c: real;
    d, x1, x2: real;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 read(a, b, c);
 if a = 0 then
  begin
   if b = 0 then
    begin
     if c = 0 then write('-1')
     else write('0');
    end
   else
    begin
     writeln('1');
     x1:=-(c / b);
     write(x1:0:10);
    end;
  end
 else
  begin
   d:=sqr(b) - 4 * a * c;
   if d < 0 then write('0')
   else
    begin
     if d = 0 then
      begin
       writeln('1');
       x1:=-(b / (2 * a));
       if x1 = -0 then x1:=0;
       write(x1:0:10);
      end
     else
      begin
       writeln('2');
       x1:=-((b + sqrt(d)) / (2 * a));
       x2:=-((b - sqrt(d)) / (2 * a));
       writeln(x1:0:10);
       write(x2:0:10);
      end;
    end;
  end;
 close(input);
 close(output);
end.