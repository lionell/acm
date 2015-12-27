program Balanse;
const Infinity = 10000;
type Mass = array[0..10] of longint;
var a, b, x, y: longint;
function Min(x: longint): longint;
var i, m, d: longint;
    A: Mass;
begin
 fillchar(A, sizeof(A), 0);
 m:=Infinity;
 while x > 0 do
  begin
   if (x mod 10 < m) and (x mod 10 <> 0) then m:=x mod 10;
   inc(A[x mod 10]);
   x:=x div 10;
  end;
 dec(A[m]);
 d:=m;
 for i:=0 to 9 do
  begin
   while A[i] > 0 do
    begin
     d:=d * 10 + i;
     dec(A[i]);
    end;
  end;
 Min:=d;
end;
function Max(x: longint): longint;
var i, d: longint;
    A: Mass;
begin
 fillchar(A, sizeof(A), 0);
 while x > 0 do
  begin
   inc(A[x mod 10]);
   x:=x div 10;
  end;
 d:=0;
 for i:=9 downto 0 do
  begin
   while A[i] > 0 do
    begin
     d:=d * 10 + i;
     dec(A[i]);
    end;
  end;
 Max:=d;
end;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 read(a, b);
 x:=abs(a);
 y:=abs(b);
 if (a < 0) and (b < 0) then write(Max(y) - Min(x));
 if (a < 0) and (b > 0) then write(-Min(x) - Min(y));
 if (a > 0) and (b < 0) then write(Max(x) + Max(y));
 if (a > 0) and (b > 0) then write(Max(x) - Min(y));
 if (a = 0) and (b > 0) then write(-Min(y));
 if (a = 0) and (b < 0) then write(Max(y));
 if (a > 0) and (b = 0) then write(Max(x));
 if (a < 0) and (b = 0) then write(-Min(x));
 if (a = 0) and (b = 0) then write('0');
 close(input);
 close(output);
end.