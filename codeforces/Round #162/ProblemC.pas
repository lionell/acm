program ProblemC;
var s: string;
    a: array[1..1000000] of longint;
    i, l, r: longint;
begin
 read(s);
 l:=1;
 r:=length(s);
 for i:=1 to length(s) do
  begin
   if s[i] = 'r' then
    begin
     a[l]:=i;
     inc(l);
    end
   else
    begin
     a[r]:=i;
     dec(r);
    end;
  end;
 for i:=1 to length(s) do writeln(a[i]);
end.