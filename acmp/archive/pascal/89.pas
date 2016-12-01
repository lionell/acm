program SpeedTrain;
var k, j, x, y, mtime, i, time, speed: longint;
    n, mn, s: string;
function GetD(i: integer): integer;
var t, code: integer;
    f: string;
begin
 f:=s[i] + s[i + 1];
 val(f, t, code);
 GetD:=t;
end;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 readln(k);
 mtime:=10000;
 for i:=1 to k do
  begin
   readln(s);
   n:='';
   j:=2;
   while(s[j] <> '"') do
    begin
     n:=n + s[j];
     inc(j);
    end;
   x:=GetD(j + 2) * 60 + GetD(j + 5);
   y:=GetD(j + 8) * 60 + GetD(j + 11);
   time:=y - x;
   if time <= 0 then time:=time + 1440;
   if (time < mtime) then
    begin
     mtime:=time;
     mn:=n;
    end;
  end;
 speed:=round(39000 / mtime);
 writeln('The fastest train is "', mn, '".');
 write('It', chr(39) ,'s speed is ', speed, ' km/h, approximately.');
 close(input);
 close(output);
end.