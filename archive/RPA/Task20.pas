program Problem20;{FULL}
type Item = record
             Country, Mountain: string;
             Height: longint;
            end;
type Mass = array[1..1000] of Item;
var A: Mass;
    n, i: longint;
procedure Sort(var A: Mass; l, r: longint);
var i, j, x: longint;
    y: Item;
begin
 i:=l;
 j:=r;
 x:=A[(l + r) div 2].Height;
 repeat
  while A[i].Height < x do inc(i);
  while A[j].Height > x do dec(j);
  if i <= j then
   begin
    y:=A[i];
    A[i]:=A[j];
    A[j]:=y;
    inc(i);
    dec(j);
   end;
 until i > j;
 if i < r then Sort(A, i, r);
 if l < j then Sort(A, l, j);
end;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 readln(n);
 for i:=1 to n do
  begin
   readln(A[i].Country);
   readln(A[i].Mountain);
   readln(A[i].Height);
  end;
 Sort(A, 1, n);
 for i:=1 to n do writeln(A[i].Country, ' ', A[i].Mountain, ' ', A[i].Height);
 close(input);
 close(output);
end.