program ProblemB;
type Mass = array[1..201] of longint;
var A, L, R: Mass;
    n, i: longint;
    b, c: boolean;
    s: string;
procedure Sort(var A: Mass; n: longint);
var i, j, key: longint;
begin
 for i:=2 to n do
  begin
   key:=A[i];
   j:=i - 1;
   while (j > 0) and (A[j] > key) do
    begin
     A[j + 1]:=A[j];
     dec(j);
    end;
   A[j + 1] :=key;
  end;
end;
begin
 readln(n);
 n:=n * 2;
 read(s);
 for i:=1 to n do A[i]:=(ord(s[i]) - ord('0'));
 for i:=1 to (n div 2) do L[i]:=A[i];
 for i:=(n div 2) + 1 to n do R[i - (n div 2)]:=A[i];
 Sort(L, (n div 2));
 Sort(R, (n div 2));
 b:=true;         {L < R}
 c:=true;         {R < L}
 for i:=1 to (n div 2) do
  begin
   if (L[i] <= R[i]) then c:=false;
   if (R[i] <= L[i]) then b:=false;
  end;
 if (b) or (c) then write('YES')
 else write('NO');
end.