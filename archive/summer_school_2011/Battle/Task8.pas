program RunAvay;
var a: array[1..1000,1..1000] of byte;
    n,m,x,y,o,l,k,d: integer;
function Min(i,j: integer): integer;
begin
 if i > j then Min:=j
 else Min:=i;
end;
begin
 fillchar(a,sizeof(a),0);
 read(n,m,x,y);
 o:=Min(Min(x-1,n-x),Min(y-1,m-y));
 for l:=x-o to x+o do
  begin
   a[l,y-o]:=1;
   a[l,y+o]:=1;
  end;
 for l:=y-o to y+o do
  begin
   a[x-o,l]:=1;
   a[x+o,l]:=1;
  end;
 d:=0;
 for l:=1 to n do
  begin
   if a[l,1] = 1 then inc(d);
   if a[l,m] = 1 then inc(d);
  end;
 for l:=2 to m-1 do
  begin
   if a[1,l] = 1 then inc(d);
   if a[n,l] = 1 then inc(d);
  end;
 write(d);
end.