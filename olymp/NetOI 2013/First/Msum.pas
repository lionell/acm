program Msum;
var n, i: longint;
    x, S1, S2: int64;
begin
 //assign(input, 'input.txt');
 //reset(input);
 read(n);
 for i:=1 to n do
  begin
   read(x);
   if (i mod 2 = 1) then S1:=S1 + x * (i + 1)
   else S2:=S2 + x * (i + 1);
  end;
 if (S1 > S2) then write('1 ', S1);
 if (S2 > S1) then write('2 ', S2);
 if (S1 = S2) then write('-1 ', S1);
 //close(input);
end.