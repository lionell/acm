program Horse;
var n, i, j, d, x1, y1, x2, y2: longint;
    a, b: array[1..100, 1..100] of byte;
function Min(a, b: longint): longint;
begin
 if a > b then Min:=b
 else Min:=a;
end;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 fillchar(a, sizeof(a), 0);
 fillchar(b, sizeof(b), 0);
 read(n, x1, y1, x2, y2);
 a[x1, y1]:=1;
 d:=0;
 while a[x2, y2] = 0 do
  begin
   inc(d);
   b:=a;
   for i:=1 to n do
    begin
     for j:=1 to n do
      begin
       if b[i, j] <> 0 then
        begin
         if (i + 2 <= n) and (j + 1 <= n) then a[i + 2, j + 1]:=d;
         if (i + 2 <= n) and (j - 1 >= 1) then a[i + 2, j - 1]:=d;
         if (i - 2 >= 1) and (j + 1 <= n) then a[i - 2, j + 1]:=d;
         if (i - 2 >= 1) and (j - 1 >= 1) then a[i - 2, j - 1]:=d;
         if (i + 1 <= n) and (j + 2 <= n) then a[i + 1, j + 2]:=d;
         if (i + 1 <= n) and (j - 2 >= 1) then a[i + 1, j - 2]:=d;
         if (i - 1 >= 1) and (j + 2 <= n) then a[i - 1, j + 2]:=d;
         if (i - 1 >= 1) and (j - 2 >= 1) then a[i - 1, j - 2]:=d;
        end;
      end;
    end;
  end;
 write(d);
 close(input);
 close(output);
end.
