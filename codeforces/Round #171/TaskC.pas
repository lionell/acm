Program TaskC;

var a:array[1..100050] of longint;
    c:array[1..100050] of boolean;
    b:array[1..100050,1..3] of longint;
    i,j,t,m,n:longint;

procedure sort(l,r: longint);
     var i,j,x,y: longint;
   begin
     i := l;
     j := r;
     x := b[ (l + r) div 2 ,1];
     repeat
       while b[i,1] < x do inc(i);
       while x < b[j,1] do dec(j);
       if not (i>j) then
         begin
           y    := b[i,1];
           b[i,1] := b[j,1];
           b[j,1] := y;
           y    := b[i,2];
           b[i,2] := b[j,2];
           b[j,2] := y;
           y    := b[i,3];
           b[i,3] := b[j,3];
           b[j,3] := y;
           inc(i);
           dec(j);
         end;
     until i>j;
     if l < j then sort(l,j);
     if i < r then sort(i,r);
   end;

begin
Read(n,m);
For i:=1 to n do
  Read(a[i]);
j:=1;
For i:=1 to m do 
  begin
  Read(b[i,1],b[i,2]);
  b[i,3]:=i;
  c[i]:=true;
  end;
sort(1,m);
t:=1;
For i:=3 to n do
  begin
  If (a[i-2]>a[i-1])and(a[i]>a[i-1])then 
    begin
    While (b[t,1]<=i-1)and(t<=m) do
      begin
      If (b[t,1]<=i-2)and(b[t,2]>=i) then c[b[t,3]]:=false;
      inc(t);
      end;
    end;
  end;
For i:=1 to m do
  If c[i]=true then writeln('Yes')
  else Writeln('No');
end.