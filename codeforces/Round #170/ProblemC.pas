program ProblemC;
type Str = set of byte;
var A, B: array[1..100] of Str;
    n, m, i, j, x, s, d: longint;
    bool: boolean;
begin
 {assign(input, 'in.txt');
 reset(input);
 assign(output, 'out.txt');
 rewrite(output);}
 read(n, m);
 for i:=1 to n do
  begin
   read(x);
   for j:=1 to x do
    begin
     read(s);
     A[i]:=A[i] + [s];
    end;
   for j:=1 to i - 1 do
    begin
     if A[i] * A[j] <> [] then A[i]:=A[i] + A[j];
    end;
   for j:=1 to i - 1 do
    begin
     if A[i] * A[j] <> [] then A[j]:=A[j] + A[i];
    end;
  end;
 d:=0;
 s:=0;
 for i:=1 to n do
  begin
   if A[i] = [] then inc(s)
   else
    begin
     bool:=true;
     j:=0;
     while (j < d) and (bool) do
      begin
       inc(j);
       if (A[i] = B[j]) then bool:=false;
      end;
     if bool then
      begin
       inc(d);
       B[d]:=A[i];
      end;
    end;
  end;
 if d = 0 then write(s)
 else write(d + s - 1);
end.