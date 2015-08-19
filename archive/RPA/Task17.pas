program Problem17;{FULL}
var s, s1, s2: string;
    i: longint;
begin
 read(s);
 i:=1;
 while (s[i] <> ' ') do i:=i + 1;
 s1:=copy(s, 1, i - 1);
 s2:=copy(s, i + 1, length(s) - i);
 write(s2, ' ', s1)
end.