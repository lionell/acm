program Brecketeens2;
var A, B: array[-2..100000] of char;
    i, j, l, d: longint;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 i:=0;
 d:=0;
 while not(eoln) do
  begin
   inc(i);
   read(A[i]);
  end;
 l:=1;
 B[1]:=A[1];
 for j:=2 to i do
  begin
   inc(l);
   B[l]:=A[j];
   if l > 1 then
    begin
     if ((B[l - 1] = '(') and (B[l] = ')')) or ((B[l - 1] = '[') and (B[l] = ']')) then
      begin
       l:=l - 2;
      end;
     if ((B[l - 1] = '(') and (B[l] = ']')) or ((B[l - 1] = '[') and (B[l] = ')')) then
      begin
       l:=l - 2;
       inc(d);
      end;
    end;
  end;
 if l = 0 then write(d)
 else write('-1');
 close(input);
 close(output);
end.
