program ProblemB;
var A: array[1..100000] of longint;
    n, k, i, l, r, q, s, t, m: longint;
begin
 read(n, k);
 for i:=1 to n do read(A[i]);
 q:=k;
 i:=0;
 s:=0;
 while (q > 0) and (i < n) do
  begin
   inc(i);
   if q >= A[i] then
    begin
     q:=q - A[i];
     s:=s + A[i];
    end
   else
    begin
     dec(i);
     q:=0;
    end;
  end;
 l:=1;
 r:=i;
 m:=i;
 while (r < n) do
  begin
   s:=s - A[l];
   inc(l);
   i:=r;
   q:=k - s;
   t:=0;
   while (q > 0) and (i < n) do
    begin
     inc(i);
     if q >= A[i] then
      begin
       q:=q - A[i];
       t:=t + A[i];
      end
     else
      begin
       dec(i);
       q:=0;
      end;
    end;
   s:=s + t;
   r:=i;
   if r - l + 1 > m then m:=r - l + 1;
  end;
 write(m);
end.