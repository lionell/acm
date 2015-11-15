program PrimaKraskala;
type Struct = record x, y, d: longint; end;
type Data = array[1..6000] of Struct;
var A: Data;
    C: array[1..100] of byte;
    n, m, i, j, d, t: longint;

procedure QSort(var A : Data; len: longint);
 procedure Sort(l, r: longint);
 var i, j, x: longint;
     y: Struct;
 begin
  i:=l;
  j:=r;
  x:=A[(l + r) div 2].d;
  repeat
   while A[i].d < x do inc(i);
   while x < A[j].d do dec(j);
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
 Sort(1, len);
end;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 read(n, m);
 for i:=1 to n do C[i]:=i;
 for i:=1 to m do read(A[i].x, A[i].y, A[i].d);
 QSort(A, m);
 d:=0;
 for i:=1 to m do
  begin
   if C[A[i].x] <> C[A[i].y] then
    begin
     t:=C[A[i].y];
     for j:=1 to n do if C[j] = t then C[j]:=C[A[i].x];
     d:=d + A[i].d;
    end;
  end;
 write(d);
 close(input);
 close(output);
end.
