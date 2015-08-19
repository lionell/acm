program Lamp;
var i, j, n, m, k, d, l: longint;
    Q, A: array[1..50] of longint;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 fillchar(Q, sizeof(Q), 0);
 fillchar(A, sizeof(A), 0);
 read(n, m);
 for i:=1 to m do
  begin
   read(k);
   Q[k]:=Q[k] xor 1;
  end;
 l:=0;
 for i:=1 to 50 do
  begin
   if Q[i] = 1 then
    begin
     inc(l);
     A[l]:=i;
    end;
  end;
 d:=0;
 for i:=1 to n do
  begin
   k:=0;
   for j:=1 to l do if i mod A[j] = 0 then k:=k xor 1;
   if k mod 2 = 1 then inc(d);
  end;
 write(d);
 close(input);
 close(output);
end.