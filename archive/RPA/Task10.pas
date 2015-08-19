program Problem10;{FULL}
var A: array[1..1000] of longint;
    n, i, j, Key: longint;
begin
 assign(input, 'Task.dat');
 reset(input);
 assign(output, 'Task.sol');
 rewrite(output);
 read(n);
 for i:=1 to n do read(A[i]);
 for i:=2 to n do
  begin
   Key:=A[i];
   j:=i - 1;
   while (j > 0) and (Key <= A[j]) do
    begin
     A[j + 1]:=A[j];
     j:=j - 1;
    end;
   A[j + 1]:=Key;
  end;
 write(A[n - 2] - A[1]);
 close(input);
 close(output);
end.