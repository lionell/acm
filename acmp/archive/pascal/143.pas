program LongMinus;
type Mass = record
             Arr: array[1..100] of byte;
             Length: byte;
            end;
var a, b, c: Mass;
procedure Clear(var a: Mass);
begin
 fillchar(a.Arr, sizeof(a.Arr), 0);
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
function Plus(x, y: Mass): Mass;
var d: Mass;
    i, c: longint;
begin
 c:=0;
 Clear(d);
 if x.Length > y.Length then d.Length:=x.Length
 else d.Length:=y.Length;
 for i:=1 to d.Length do
  begin
   c:=c + x.Arr[i] + y.Arr[i];
   d.Arr[i]:=c mod 10;
   c:=c div 10;
  end;
 if c > 0 then
  begin
   inc(d.Length);
   d.Arr[d.Length]:=c;
  end;
 Plus:=d;
end;
begin
 a.Arr[1]:=3;
 a.Length:=1;
 b.Arr[1]:=1;
 b.Length:=1;
 c:=Minus(a, b);
end.