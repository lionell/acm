program Language;
type Str = record
            a, b, c: longint;
            s: string;
            bool: boolean;
           end;
var n, i, j: longint;
    A: array[1..1000] of Str;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 readln(n);
 for i:=1 to n do
  begin
   readln(A[i].s);
   A[i].a:=0;
   A[i].b:=0;
   A[i].c:=0;
   A[i].bool:=true;
   for j:=1 to Length(A[i].s) do
    begin
    if (A[i].s[j] = '0') then
     begin
      inc(A[i].a);
      if (A[i].b > 0) or (A[i].c > 0) then A[i].bool:=false;
     end;
    if (A[i].s[j] = '1') then
     begin
      inc(A[i].b);
      if (A[i].c > 0) then A[i].bool:=false;
     end;
    if (A[i].s[j] = '2') then inc(A[i].c);
    end;
   if (A[i].a <> A[i].b) or (A[i].b <> A[i].c) or (A[i].a <> A[i].c) then A[i].bool:=false;
  end;
 for i:=1 to n do
  if A[i].bool = true then writeln('YES')
  else writeln('NO');
 close(input);
 close(output);
end.