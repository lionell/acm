program Problem14;{FULL}
var A: array[1..100] of byte;
    S: set of byte;
    n, i, d: longint;
begin
 read(n);
 S:=[];
 for i:=1 to n do read(A[i]);
 d:=0;
 for i:=1 to n do S:=S + [A[i]];
 for i:=0 to 255 do
  begin
   if (i in S) then d:=d + 1;
  end;
 write(d);
end.
