program Chess;
var A: array[-10..10, -10..10] of longint;
    s: string;
    i, j, fx, fy, lx, ly, kx, ky, tx, ty, d: longint;
function CharTolongint(c: char): longint;
begin
 CharTolongint:=ord(c) - ord('A') + 1;
end;
function NumTolongint(c: char): longint;
begin
 NumTolongint:=ord(c) - ord('0');
end;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 fillchar(A, sizeof(A), 0);
 read(s);
 fx:=CharTolongint(s[1]);
 fy:=NumTolongint(s[2]);
 lx:=CharTolongint(s[4]);
 ly:=NumTolongint(s[5]);
 kx:=CharTolongint(s[7]);
 ky:=NumTolongint(s[8]);
 for i:=1 to fx do A[i, fy]:=1;
 for i:=fx to 8 do A[i, fy]:=1;
 for i:=1 to fy do A[fx, i]:=1;
 for i:=fy to 8 do A[fx, i]:=1;
 tx:=fx;
 ty:=fy;
 while (tx > 1) and (ty > 1) do
  begin
   dec(tx);
   dec(ty);
   A[tx, ty]:=1;
  end;
 tx:=fx;
 ty:=fy;
 while (tx < 8) and (ty < 8) do
  begin
   inc(tx);
   inc(ty);
   A[tx, ty]:=1;
  end;
 tx:=fx;
 ty:=fy;
 while (tx > 1) and (ty < 8) do
  begin
   dec(tx);
   inc(ty);
   A[tx, ty]:=1;
  end;
 tx:=fx;
 ty:=fy;
 while (tx < 8) and (ty > 1) do
  begin
   inc(tx);
   dec(ty);
   A[tx, ty]:=1;
  end;
 for i:=1 to lx do A[i, ly]:=1;
 for i:=lx to 8 do A[i, ly]:=1;
 for i:=1 to ly do A[lx, i]:=1;
 for i:=ly to 8 do A[lx, i]:=1;
 A[kx + 2, ky + 1]:=1;
 A[kx + 2, ky - 1]:=1;
 A[kx - 2, ky + 1]:=1;
 A[kx - 2, ky - 1]:=1;
 A[kx + 1, ky + 2]:=1;
 A[kx + 1, ky - 2]:=1;
 A[kx - 1, ky + 2]:=1;
 A[kx - 1, ky - 2]:=1;
 A[fx, fy]:=0;
 A[lx, ly]:=0;
 A[kx, ky]:=0;
 d:=0;
 for i:=1 to 8 do
  for j:=1 to 8 do
   if A[i, j] = 1 then inc(d);
 write(d);
 close(input);
 close(output);
end.