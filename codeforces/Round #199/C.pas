program Cccc;
var c1,c2:char;
    a:array[1..100000] of char;
    rez,i,n,k,j,l:longint;
begin
i:=1;
While not(eoln) do begin
  Read(a[i]);
  inc(i);
end;
n:=i-1;
Read(k);
rez:=0;
readln;
For j:=1 to k do begin
  Read(c1, c2);
  for i:=1 to n - 2 do
   begin
    if (a[i] = c1) and (a[i + 1] = c2) and (a[i + 2] = c1) then
     begin
      inc(Rez);

     end;
   end;
  For i:=1 to n-2 do begin
    If (a[i]=c1) then
      If a[i+1]=c2 then
        if a[i+2]=c1 then begin
          for l:=i+2 to n do
            a[l-1]:=a[l];
            dec(n);
          inc(rez);
        end
      else begin
          for l:=i+1 to n do
            a[l-1]:=a[l];
          dec(n);
          inc(rez);
      end;
    If (a[i]=c2) then
      If a[i+1]=c1 then
        if a[i+2]=c2 then begin
          for l:=i+2 to n do
            a[l-1]:=a[l];
          dec(n);
          inc(rez);
        end
      else begin
          for l:=i+1 to n do
            a[l-1]:=a[l];
          dec(n);
          inc(rez);
      end;
  end;
  readln;
end;
Write(rez);
end.
