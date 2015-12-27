program Game2;
var A: array[1..100] of longint;
    B: array[1..100, 1..100, 1..2] of longint;
    n, i, j, d: longint;
function Max(a, b: longint): longint;
begin
 if a > b then Max:=a
 else Max:=b;
end;
procedure Calc(l, r: longint);
var d: longint;
begin
 if r - l = 1 then
  begin
   B[l, r, 1]:=Max(A[l], A[r]);
   B[l, r, 2]:=A[l] + A[r] - B[l, r, 1];
  end
 else
  begin
   if B[l, r - 1, 1] = 0 then Calc(l, r - 1);
   if B[l + 1, r, 1] = 0 then Calc(l + 1, r);
   if (B[l, r - 1, 2] + A[r] > B[l + 1, r, 2] + A[l]) then
    begin
     B[l, r, 1]:=B[l, r - 1, 2] + A[r];
     B[l, r, 2]:=B[l, r - 1, 1];
    end
   else
    begin
     B[l, r, 1]:=B[l + 1, r, 2] + A[l];
     B[l, r, 2]:=B[l + 1, r, 1];
    end;
 end;
end;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 fillchar(A, sizeof(A), 0);
 fillchar(B, sizeof(B), 0);
 read(n);
 for i:=1 to n do read(A[i]);
 Calc(1, n);
 if B[1, n, 1] > B[1, n, 2] then write('1');
 if B[1, n, 1] < B[1, n, 2] then write('2');
 if B[1, n, 1] = B[1, n, 2] then write('0');
 close(input);
 close(output);
end.
