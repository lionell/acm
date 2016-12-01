type mass=array[0..100000]of integer;
var k,n:int64;
    i:longint;
    z,h:mass;
function mul(a:mass; b:integer):mass;
 var c,i:integer;
 begin
  c:=0;
 for i:=1 to a[0] do
  begin
   a[i]:=a[i]*b+c;
   c:=a[i] div 10;
   a[i]:=a[i] mod 10;
  end;
 while c>0 do 
  begin
   inc(a[0]);
   a[a[0]]:=c mod 10;
   c:=c div 10;
  end;
  mul:=a;
 end;
function sum(a,b:mass):mass;
 var i,l,c:integer;
 begin
  c:=0;
  if a[0]>b[0] then l:=a[0] else l:=b[0];
   for i:=1 to l do
    begin
     c:=c+a[i]+b[i];
     a[i]:=c mod 10;
     c:=c div 10;
    end;
  if (c>0) then 
   begin 
    inc(l); 
	a[l+1]:=c; 
   end;
  a[0]:=l;
  sum:=a;
 end;
BEGIN
 read(n);
  if (n mod 3<>0) or (n<3) then 
   write(0)
  else if (n=3) then write(4)
       else 
	    begin
         h[1]:=8;
         h[2]:=1;
         h[0]:=2;
         k:=6;
         z[1]:=1;
         z[0]:=1;
         while k<n do
          begin
           k:=k+3;
           h:=sum(mul(h,4), mul(z,8));
           z:=mul(z,4);
          end;
         for i:=h[0] downto 1 do write(h[i]);
        end;
END.