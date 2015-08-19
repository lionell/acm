program Weather;
const Infinity = 10000000;
var n, i, l, x, j, k: longint;
    A, S: array[0..100000] of longint;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 fillchar(A, sizeof(A), 0);
 fillchar(S, sizeof(S), 0);
 read(n);
 A[0]:=Infinity;
 for i:=1 to n do read(A[i]);
 l:=0;
 for i:=1 to n do
  begin
   while A[S[l]] < A[i] do
   dec(l);
   if l = 0 then write('-1 ')
   else write(S[l], ' ');
   inc(l);
   S[l]:=i;
  end;
 close(input);
 close(output);
end.
