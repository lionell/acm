program Bertran;
var n, d: longint;
function Prime(n: longint): longint;
var a: array[1..10000] of longint;
    l, i, j: longint;
    b: boolean;
begin
 a[1]:=2;
 l:=1;
 i:=3;
 while i <= n do
  begin
   b:=true;
   j:=1;
   while (j <= l) and (b) do
    begin
     if i mod a[j] = 0 then b:=false;
     inc(j);
    end;
   if b then
    begin
     inc(l);
     a[l]:=i;
    end;
   i:=i + 2;
  end;
 Prime:=l;
end;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 read(n);
 d:=Prime(2 * n) - Prime(n);
 write(d);
 close(input);
 close(output);
end.