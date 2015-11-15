program Eratosthenes;
type TList = array[1..10000000] of byte;
var List: TList;
    n, i, d: longint;
procedure GetList(n: longint);
var i, k, j: longint;
 begin
  List[1]:=1;
  i:=2;
  k:=trunc(sqrt(n)) + 1;
  while(i <= k) do
   begin
    if (List[i] = 0) then
     begin
      j:=i * i;
      while (j <= n) do
       begin
        List[j]:=1;
        j:=j + i;
       end;
     end;
    inc(i);
   end;
 end;
begin
 assign(output, 'simple.txt');
 rewrite(output);
 fillchar(List, sizeof(List), 0);
 read(n);
 GetList(n);
 d:=0;
 for i:=1 to n do
  begin
   if List[i] = 0 then
    begin
     write(i, ', ');
     inc(d);
     if d mod 10 = 0 then writeln;
    end;
  end;
 write(d);
 close(output);
end.
