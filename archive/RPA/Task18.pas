program Problem18;{FULL}
var s: string;
    i, d: longint;
begin
 i:=0;
 d:=0;
 read(s);
 for i:=1 to length(s) - 1 do if (s[i] = 'z') and (s[i + 1] <> 'z') then d:=d + 1;
 write(d);
end.
