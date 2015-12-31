program LongFact;
const Long = 100000;
type Mass = record
             Arr: array[1..100000] of byte;
             Length: integer;
            end;
var a, b: Mass;
    n, i: longint;
    bool: boolean;
procedure Clear(var a: Mass);
begin
 fillchar(a.Arr, sizeof(a.Arr), 0);
 a.Length:=0;
end;
procedure Back(var a: Mass);
var d: Mass;
    i: longint;
begin
 Clear(d);
 for i:=1 to a.Length do d.Arr[a.Length - i + 1]:=a.Arr[i];
 d.Length:=a.Length;
 a:=d;
end;
function Multiply(a: Mass; b: longint): Mass;
var d: Mass;
    i, c: longint;
begin
 Clear(d);
 d.Length:=a.Length;
 c:=0;
 for i:=1 to a.Length do
  begin
   c:=c + a.Arr[i] * b;
   d.Arr[i]:=c mod 10;
   c:=c div 10;
  end;
 while c > 0 do
  begin
   inc(d.Length);
   d.Arr[d.Length]:=c mod 10;
   c:=c div 10;
  end;
 Multiply:=d;
end;
procedure WriteMass(a: Mass);
var i: longint;
begin
 for i:=1 to a.Length do write(a.Arr[i]);
end;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 a.Arr[1]:=1;
 a.Length:=1;
 b.Length:=0;
 read(n);
 while n > 0 do
  begin
   inc(b.Length);
   b.Arr[b.Length]:=n mod 10;
   n:=n div 10;
  end;
 bool:=false;
 i:=0;
 while (i < Long) and not(bool) do
  begin
   inc(i);
   a:=Multiply(a, 2);
   if a.Length >= b.Length then
    begin
     n:=0;
     bool:=true;
     while(n <= a.Length) and (bool) do
      begin
       inc(n);
       if a.Arr[a.Length - b.Length + n] <> b.Arr[n] then bool:=false;
      end;
    end;
  end;
 if i = Long then write('-1')
 else
  begin
   if (b.Arr[1] = 1) and (b.Length = 1) then write('0')
   else write(i);
  end;
 close(input);
 close(output);
end.
