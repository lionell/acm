program Numbers;
type TString = record S: array[1..25000] of char; Length: longint; end;
     TArray = array[1..1000] of TString;
var A: TArray;
    n, i, j: longint;
    ch: char;
function Compare(A, B: TString): byte;
var i: longint;
begin
 i:=1;
 while (A[i] = B[i]) and  do inc(i);

end;
procedure Sort(var A: TArray; l, r: longint);
var i, j: longint;
    m, y: TString;
begin
 i:=l;
 j:=r;
 m:=A[(l + r) div 2];
 repeat
  while A[i] < m do inc(i);
  while A[j] > m do dec(j);
  if i <= j then
   begin
    y:=A[i];
    A[i]:=A[j];
    A[j]:=y;
    inc(i);
    dec(j);
   end;
 until i > j;
 if j > l then Sort(A, l, j);
 if i < r then Sort(A, i, r);
end;
begin
 assign(input, 'input.txt');
 reset(input);
 read(n);
 for i:=1 to n do
  begin
   j:=0;
   while not(eoln) do
    begin
     inc(j);
     read(ch);
     A[i].S[j]:=ch;
    end;
   A[i].Length:=j;
  end;
 close(input);
end.
