program Problem12;{FULL}
var n, i, j: longint;
    A: array[1..100, 1..100] of longint;
begin
 Randomize;
 read(n);
 for i:=1 to n do
  begin
   A[i, i]:=Sqr(i);
  end;
 for i:=1 to n do
  begin
   for j:=i + 1 to n do
    begin
     A[i, j]:=Random(n * n);
    end;
  end;
 for i:=1 to n do
  begin
   for j:=1 to i - 1 do
    begin
     A[i, j]:=i + j;
    end;
  end;
 for i:=1 to n do
  begin
   for j:=1 to n do
    begin
     write(A[i, j], ' ');
    end;
   writeln;
  end;
end.