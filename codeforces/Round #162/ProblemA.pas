program ProblemA;
var s, t: string;
    i, j: longint;
begin
 readln(s);
 read(t);
 j:=1;
 for i:=1 to length(t) do
  begin
   if t[i]=s[j] then inc(j);
  end;
 write(j);
end.