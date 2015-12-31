program Total;
type TList = array[1..2000] of longint;
var n, i: longint;
    A: TList;
    S: int64;
procedure QSort(var A : TList; n: longint);
    procedure Sort(l, r: longint);
      var i, j, x, y: longint;
      begin
         i:=l;
         j:=r;
         x:=A[(l + r) div 2];
         repeat
           while A[i] > x do
            inc(i);
           while x > A[j] do
            dec(j);
           if not(i > j) then
             begin
                y:=A[i];
                A[i]:=A[j];
                A[j]:=y;
                inc(i);
                j:=j - 1;
             end;
         until i > j;
         if l < j then
           Sort(l, j);
         if i < r then
           Sort(i, r);
      end;
    begin
       Sort(1, n);
    end;
begin
 //assign(input, 'input.txt');
 //reset(input);
 fillchar(A, sizeof(A), 0);
 S:=0;
 read(n);
 for i:=1 to n do read(A[i]);
 QSort(A, n);
 for i:=1 to n div 2 do S:=S + A[i];
 for i:=(n div 2 + 1) to n do S:=S - A[i];
 write(S);
 //close(input);
end.
