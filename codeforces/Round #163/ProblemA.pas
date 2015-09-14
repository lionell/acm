program ProblemA;
var s: string;
    d, i, n: longint;
begin
 d:=0;
 readln(n);
 read(s);
 for i:=2 to n do
  begin
   if s[i - 1] = s[i] then inc(d);
  end;
 write(d);
end.