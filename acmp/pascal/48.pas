program TheWorthDivisor;
type Mass = array[1..5002] of byte;
var i, d: longint;
    x: char;
    A, B: Mass;
procedure WriteM(X: Mass; n: longint);
var i: longint;
begin
 for i:=1 to n do write(X[i]);
end;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 i:=0;
 d:=0;
 while not(eoln) do
  begin
   read(x);
   inc(i);
   A[i]:=ord(x) - 48;
  end;
 while A[i] = 0 do
  begin
   inc(d);
   dec(i);
  end;
 if d = 0 then write('1')
 else
  begin
   fillchar(B, sizeof(B), 0);
   B[1]:=1;
   writeM(B, d + 1);
  end;
 close(input);
 close(output);
end.