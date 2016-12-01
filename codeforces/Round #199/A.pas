program aAA;
var n,i,temp,max,min,jump:integer;
begin
Read(n,max);
min:=max;
temp:=0;
jump:=0;
For i:=1 to n-1 do begin
  Read(temp);
  If temp>max then begin inc(jump); max:=temp; end
  else
  If temp<min then begin inc(jump); min:=temp;
end;
end;
Write(jump);
end.


