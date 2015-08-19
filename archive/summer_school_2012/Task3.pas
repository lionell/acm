program Problem3; // FULL
var n, d, i: longint;
function Check(a: longint): boolean;
 var i, d, r: longint;
 begin
  r:=a div 2 + 1;
  d:=0;
  i:=1;
  while (a > 1) do
   begin
    inc(i);
    if a mod i = 0 then
     begin
      while a mod i = 0 do a:=a div i;
      inc(d);
     end;
   end;
  if d = 2 then Check:=true
  else Check:=false;
 end;
begin
 d:=0;
 read(n);
 for i:=1 to n do if Check(i) then inc(d);
 write(d);
end.
