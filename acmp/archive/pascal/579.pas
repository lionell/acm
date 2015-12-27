program ModSum;
var ps, ns, nk, pk, n, i: longint;
    a: array[1..10000] of longint;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 read(n);
 ps:=0;
 ns:=0;
 pk:=0;
 nk:=0;
 for i:=1 to n do
  begin
   read(a[i]);
   if a[i] > 0 then
    begin
     inc(ps, a[i]);
     inc(pk);
    end;
   if a[i] < 0 then
    begin
     inc(ns, a[i]);
     inc(nk);
    end;
  end;
 ns:=abs(ns);
 if ps > ns then writeln(pk)
 else writeln(nk);
 for i:=1 to n do
  begin
   if (ps > ns) and (a[i] > 0) then write(i, ' ');
   if (ns > ps) and (a[i] < 0) then write(i, ' ');
  end;
 close(input);
 close(output);
end.