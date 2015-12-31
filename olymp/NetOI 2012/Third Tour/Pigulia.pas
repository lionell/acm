program Pigulia;{Full}
const Infinity = 99999999;
type Link = record
             a, b, d: longint;
            end;
type Mass = array[1..1000010] of Link;
var n, m, i, k, t: longint;
    A: Mass;
    D: array[1..1000010] of longint;
function Max(a, b: longint): longint;
begin
 if a > b then Max:=a
 else Max:=b;
end;
procedure qsort(var A : Mass);

    procedure sort(l,r: longint);
      var
         i, j, x: longint;
         y: Link;
      begin
         i:=l;
         j:=r;
         x:=A[(l+r) div 2].d;
         repeat
           while A[i].d < x do
            inc(i);
           while x < A[j].d do
            dec(j);
           if not(i > j) then
             begin
                y:=a[i];
                a[i]:=a[j];
                a[j]:=y;
                inc(i);
                dec(j);
             end;
         until i > j;
         if l < j then
           sort(l, j);
         if i < r then
           sort(i, r);
      end;

    begin
       sort(1, m);
    end;
begin
 {assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);}
 fillchar(A, sizeof(A), 0);
 fillchar(D, sizeof(D), 0);
 read(n, m);
 for i:=2 to n do D[i]:=Infinity;
 for i:=1 to m do read(A[i].a, A[i].b, A[i].d);
 qsort(A);
 t:=Infinity;
 for i:=1 to m do
  begin
   if ((A[i].a = 1) or (A[i].b = 1)) and (A[i].d < t) then
    begin
     k:=i;
     t:=A[i].d;
    end;
  end;
 D[k]:=A[k].d;
 while D[n] = Infinity do
  begin
   t:=Infinity;
   for i:=1 to m do
    begin
     if (((D[A[i].a] = Infinity) and (D[A[i].b] <> Infinity)) or ((D[A[i].a] <> Infinity) and (D[A[i].b] = Infinity))) and (A[i].d < t) then
      begin
       k:=i;
       t:=A[i].d;
      end;
    end;
   if D[A[k].a] = Infinity then D[A[k].a]:=Max(D[A[k].b], t);
   if D[A[k].b] = Infinity then D[A[k].b]:=Max(D[A[k].a], t);
  end;
 write(D[n]);
 {close(input);
 close(output);}
end.
