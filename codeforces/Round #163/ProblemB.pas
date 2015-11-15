program ProblemB;
var s, s1: string;
    n, d, i, j: longint;
begin
 readln(n, d);
 read(s);
 for i:=1 to d do
  begin
  s1:=s;
   for j:=1 to n do
    begin
     if (s[j] = 'B') and (s[j + 1] = 'G') then
      begin
       s1[j]:='G';
       s1[j + 1]:='B';
      end;
    end;
   s:=s1;
  end;
 for i:=1 to n do write(s[i]);
end.