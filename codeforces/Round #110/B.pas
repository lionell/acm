program ProblemB;
var a: array[0..101] of integer;
    n, i, j: byte;
    d: real;
begin
 fillchar(a, sizeof(a), 0);
 read(n);
 for i:=1 to n do read(a[i]);
 for i:=1 to n do
  begin
   for j:=i to n do
    begin
     if a[j] < a[i] then
      begin
       a[j]:=a[j] xor a[i];
       a[i]:=a[j] xor a[i];
       a[j]:=a[j] xor a[i];
      end;
    end;
  end;
 d:=0;
 if n mod 2 = 0 then
  begin
   for i:=1 to n do
    begin
     if i mod 2 = 0 then d:=d + pi*sqr(a[i]) - pi*sqr(a[i - 1]);
    end;
  end
  else
   begin
    for i:=1 to n do
     begin
      if i mod 2 = 1 then d:=d + pi*sqr(a[i]) - pi*sqr(a[i - 1]);
     end;
   end;
  write(d:0:10);
end.