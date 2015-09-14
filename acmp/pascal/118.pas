program Flawel;
var a: array[1..100000] of byte;
    n, k, l, i, j: longint;
begin
 fillchar(a, sizeof(a), 0);
 read(n, k);
 i:=0;
 l:=n;
 while (l > 1) do
  begin
   j:=0;
   while (j < k) do
    begin
     inc(i);
     if(a[i] = 0) then inc(j);
     i:=i mod n;
    end;
   a[i]:=1;
   dec(l);
  end;
 for i:=1 to n do if a[i] = 0 then write(i);
end.
