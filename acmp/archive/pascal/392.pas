program Pre;
var n, i, k: longint;
    a: array[1..100000] of integer;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 read(n);
 for i:=1 to n do
  begin
   read(a[i]);
   if(a[i] = 1) then k:=i;
  end;
 for i:=k to n do write(a[i], ' ');
 for i:=1 to k - 1 do write(a[i], ' ');
 close(input);
 close(output);
end.