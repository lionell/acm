program Sequence;
var A: array[1..1000000] of longint;
    n, i, l, x, m: longint;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 read(n);
 l:=0;
 m:=0;
 for i:=1 to n do
  begin
   read(x);
   if l >= 2 then
    begin
     if ((A[l] < x) and (A[l - 1] > A[l])) or ((A[l] > x) and (A[l - 1] < A[l])) then
      begin
       inc(l);
       A[l]:=x;
      end
     else
      begin
       A[1]:=A[l];
       A[2]:=x;
       l:=2;
      end;
    end
   else
    begin
     inc(l);
     A[l]:=x;
    end;
   if l > m then m:=l;
  end;
 write(m);
 close(input);
 close(output);
end.
