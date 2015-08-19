program Problem15;{FULL}
var s1, s2: string;
    k1, k2, i: longint;
begin
 readln(s1);
 readln(s2);
 k1:=0;
 k2:=0;
 for i:=1 to length(s1) do
  begin
   if (s1[i] in ['a', 'e', 'i', 'o', 'u', 'y']) then k1:=k1 + 1;
  end;
 for i:=1 to length(s2) do
  begin
   if (s2[i] in ['a', 'e', 'i', 'o', 'u', 'y']) then k2:=k2 + 1;
  end;
 if k1 > k2 then write('First')
 else
  begin
   if k1 < k2 then write('Second')
   else write('Equal');
  end;
end.