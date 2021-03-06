program ProblemC;
type Data = array[1..100000] of longint;
var A, B: Data;
    n, i, d, j: longint;
    k: int64;
procedure qsort(var a: Data);

    procedure sort(l,r: longint);
      var
         i,j,x,y: longint;
      begin
         i:=l;
         j:=r;
         x:=a[(l+r) div 2];
         repeat
           while a[i]<x do
            inc(i);
           while x<a[j] do
            dec(j);
           if not(i>j) then
             begin
                y:=a[i];
                a[i]:=a[j];
                a[j]:=y;
                inc(i);
                j:=j-1;
             end;
         until i>j;
         if l<j then
           sort(l,j);
         if i<r then
           sort(i,r);
      end;

    begin
       sort(1,n);
    end;
function BSearch(d, l, r: longint): longint;
var c: longint;
begin
 if r - l = 1 then
  begin
   if A[r] = d then BSearch:=r
   else if A[l] = d then BSearch:=l
   else BSearch:=0;
  end
 else
  begin
   c:=A[(l + r) div 2];
   if c = d then BSearch:=(l + r) div 2
   else
    begin
     if c > d then BSearch:=BSearch(d, l, ((l + r) div 2))
     else BSearch:=BSearch(d, ((l + r) div 2), r);
    end;
  end;
end;
begin
 {assign(input, 'input.txt');
 reset(input);}
 fillchar(A, sizeof(A), 0);
 fillchar(B, sizeof(B), 0);
 read(n, k);
 for i:=1 to n do read(A[i]);
 qsort(A);
 d:=0;
 for i:=1 to n do
  begin
   if (B[i] = 0) then
    begin
     inc(d);
     if A[i] * k  <= n then j:=BSearch(A[i] * k, i, A[i] * k)
     else j:=BSearch(A[i] * k, i, n);
     if j > 0 then B[j]:=1;
    end;
  end;
 write(d);
 {close(input);}
end.