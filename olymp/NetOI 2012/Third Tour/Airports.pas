program Airports;{Full}
type Mass = array[1..1010] of longint;
var n, a, b, i: longint;
    D, T: Mass;
    t1, t2: longint;
function Swap(k: longint): longint;
begin
 if k = 1 then Swap:=2
 else Swap:=1;
end;
procedure Search(i, k: longint);
begin
 if k = 1 then inc(t1)
 else inc(t2);
 T[i]:=k;
 if (D[i] = 1) and (T[i - 1] = 0) then Search(i - 1, Swap(k));
 if (D[i] = 2) and (T[i + 1] = 0) then Search(i + 1, Swap(k));
 if (D[i] = 3) then
  begin
   if (T[i - 1] = 0) then Search(i - 1, Swap(k));
   if (T[i + 1] = 0) then Search(i + 1, Swap(k));
  end;
end;
begin
 {assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);}
 read(n);
 D[2]:=1;
 D[n - 1]:=2;
 read(a);
 for i:=2 to n - 1 do
  begin
   read(b);
   if a > b then D[i + 1]:=D[i + 1] + 1
   else D[i - 1]:=D[i - 1] + 2;
   a:=b;
  end;
 for i:=1 to n do
  begin
   fillchar(T, sizeof(T), 0);
   t1:=0;
   t2:=0;
   Search(i, 1);
   if t2 >= t1 then write(i, ' ');
  end;
 {close(input);
 close(output);}
end.
