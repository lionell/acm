program Chokolate;
var rez,a,b,c:longint;
    mass:array[1..100,1..100,1..100] of longint;

function fun(x,y,z:longint):longint;
var temp:longint;
begin
If (x=1)or(y=1)or(z=1) then temp:=1
else If mass[x,y,z]<>0 then temp:=mass[x,y,z]
else
begin
  If (x=y)and(x=z) then temp:=fun(x-1,y,z)
  else If (x=y)or(z=y) then temp:=fun(x-1,y,z)+fun(x,y,z-1)
      else If (z=x) then temp:=fun(x-1,y,z)+fun(x,y-1,z)
          else temp:=fun(x-1,y,z)+fun(x,y-1,z)+fun(x,y,z-1);
end;
temp:=temp mod 1000007;
mass[x,y,z]:=temp;
fun:=temp;
end;

begin
Read(a,b,c);
Fillchar(mass,sizeof(mass),0);
Rez:=fun(a,b,c);
Write(rez);
end.
