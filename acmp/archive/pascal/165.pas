program RightDown;
var A, B: array[1..100, 1..100] of longint;
    n, m, i, j: longint;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 read(n, m);
 for i:=1 to n do
  for j:=1 to m do
   read(A[i, j]);
 B[1, 1]:=1;
 for i:=1 to n do
  begin
   for j:=1 to m do
    begin
     if (i + A[i, j] <= n) and (B[i, j] <> 0) then
      begin
       B[i + A[i, j], j]:=B[i + A[i, j], j] + B[i, j];
      end;
     if (j + A[i, j] <= m) and (B[i, j] <> 0) then
      begin
       B[i, j + A[i, j]]:=B[i, j + A[i, j]] + B[i, j];
      end;
    end;
  end;
 write(B[n, m] div 4);
 close(input);
 close(output);
end.