program Cub;
var n, i, w, m, s, k1, k2, c, o: longint;
    S1, S2: int64;
begin
 //assign(input, 'input.txt');
 //reset(input);
 read(n);
 k1:=0;
 k2:=0;
 S1:=0;
 S2:=0;
 for i:=1 to n do
  begin
   read(w, m ,s);
   c:=60 * m + s;
   if k1 > k2 then S1:=S1 + c - o;
   if k2 > k1 then S2:=S2 + c - o;
   if w = 1 then inc(k1);
   if w = 2 then inc(k2);
   o:=c;
  end;
 if k1 > k2 then S1:=S1 + 2880 - o;
 if k2 > k1 then S2:=S2 + 2880 - o;

 write(S1, ' ', S2);
 //close(input);
end.