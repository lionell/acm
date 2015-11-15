program Collapse;
var n, m, i, d: longint;
    a: array[0..100001] of byte;
    ch: char;
function IntToStr(t: longint): string;
var s: string;
begin
 str(t, s);
 IntToStr:=s;
end;
function isntSimple(x, y: longint): boolean;
begin
 while (x <> 0) and (y <> 0) do
  begin
   if x >= y then x:=x mod y
   else y:=y mod x;
  end;
 if (x + y <> 1) then isntSimple:=true
 else isntSimple:=false;
end;
function Push(k: longint): string;
var i: longint;
    bool: boolean;
begin
 if(a[k] = 1) then Push:='Already on'
 else
  begin
   i:=0;
   bool:=true;
   while (i <= n) and (bool) do
    begin
     inc(i);
     if (a[i] = 1) and (isntSimple(k, i)) then bool:=false;
    end;
   if bool then
    begin
     Push:='Success';
     a[k]:=1;
    end
   else Push:='Conflict with ' + IntToStr(i);
  end;
end;
function Pop(k: longint): string;
begin
 if(a[k] = 0) then Pop:='Already off'
 else
  begin
   a[k]:=0;
   Pop:='Success';
  end;
end;
begin
 {assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);}
 readln(n, m);
 for i:=1 to m do
  begin
   read(ch);
   readln(d);
   if(ch = '+') then writeln(Push(d))
   else writeln(Pop(d));
  end;
 {close(input);
 close(output);}
end.
