program Strip;{FULL}
type TList = array[1..1000] of string;
var N, i: longint;
    List: TList;
function Check(a, b: string): byte;
 var x, y: string;
 begin
  x:=a + b;
  y:=b + a;
  if x < y then Check:=1;
  if y < x then Check:=2;
  if x = y then Check:=3;
 end;
procedure QSort(var A : TList; N: longint);
 procedure Sort(l, r: longint);
  var i, j: longint;
      x, y: string;
   begin
    i:=l;
    j:=r;
    x:=A[(l + r) div 2];
    repeat
     while Check(A[i], x) = 1 do inc(i); {A[i] < x}
     while Check(x, A[j]) = 1 do dec(j); {x < A[j]}
     if not(i > j) then
      begin
       y:=A[i];
       A[i]:=A[j];
       A[j]:=y;
       inc(i);
       dec(j);
      end;
    until i > j;
    if l < j then Sort(l, j);
    if i < r then Sort(i, r);
   end;
 begin
  Sort(1, N);
 end;
begin
 fillchar(List, sizeof(List), 0);
 readln(N);
 for i:=1 to N do readln(List[i]);
 QSort(List, N);
 for i:=N downto 1 do write(List[i]);
end.
