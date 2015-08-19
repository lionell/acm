program Bamboo;{Full}
const Infinity = 9000000;
type Item = record
            k, p: longint;
            end;
var n, k, i, j: longint;
    d: int64;
    a: array[1..150010] of Item;
    m: array[1..150010] of longint;
begin
 d:=0;
 fillchar(a, sizeof(a), 0);
 fillchar(m, sizeof(m), 0);
 read(n, k);
 for i:=1 to n do read(a[i].k, a[i].p);
 for i:=n downto 1 do
  begin
   j:=0;
   while (j < k) and (i - j >= 1) do
    begin
     if m[i - j] < a[i].p then m[i - j]:=a[i].p;
     inc(j);
    end;
  end;
 for i:=1 to n do d:=d + m[i]*a[i].k;
 write(d);
end.
