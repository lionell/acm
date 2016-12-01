program b;
var i,j,u,score,n:integer;
    a:array[1..1000,1..2]of integer;
procedure swap(x,y:integer);
var temp:integer;
begin
  temp:=a[x,2];
  a[x,2]:=a[y,2];
  a[y,2]:=temp;
  temp:=a[x,1];
  a[x,1]:=a[y,1];
  a[y,1]:=temp;
end;
procedure swap1(x,y:integer);
var temp:integer;
begin
  temp:=a[x,1];
  a[x,1]:=a[y,1];
  a[y,1]:=temp;
end;
begin
Read(n);
For i:=1 to n do
  Read(a[i,1],a[i,2]);
For i:=1 to n-1 do begin
  For j:=n-1 downto i do begin
    If a[j,2]<a[j+1,2] then swap(j,j+1);
  end;
end;
i:=1;
While a[i,2]<>0 do inc(i);
u:=i;
For i:=u to n-1 do begin
  For j:=n-1 downto i do begin
    If a[j,1]<a[j+1,1] then swap1(j,j+1);
  end;
end;
u:=1;
i:=1;
score:=0;
While (u>0)and(i<=n) do begin
  dec(u);
  inc(u,a[i,2]);
  inc(score,a[i,1]);
  inc(i);
end;
Write(score);
end.