program Sys;
var s: string;
    i, m, d: integer;
function GetSystem(a: char): integer;
var d: integer;
begin
 d:=-1;
 case a of
  '0': d:=2;
  '1': d:=2;
  '2': d:=3;
  '3': d:=4;
  '4': d:=5;
  '5': d:=6;
  '6': d:=7;
  '7': d:=8;
  '8': d:=9;
  '9': d:=10;
  'A': d:=11;
  'B': d:=12;
  'C': d:=13;
  'D': d:=14;
  'E': d:=15;
  'F': d:=16;
  'G': d:=17;
  'H': d:=18;
  'I': d:=19;
  'J': d:=20;
  'K': d:=21;
  'L': d:=22;
  'M': d:=23;
  'N': d:=24;
  'O': d:=25;
  'P': d:=26;
  'Q': d:=27;
  'R': d:=28;
  'S': d:=29;
  'T': d:=30;
  'U': d:=31;
  'V': d:=32;
  'W': d:=33;
  'X': d:=34;
  'Y': d:=35;
  'Z': d:=36;
 end;
 GetSystem:=d;
end;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 m:=0;
 read(s);
 i:=0;
 for i:=1 to length(s) do
  begin
   d:=GetSystem(UpCase(s[i]));
   if d = -1 then m:=-1;
   if (m <> -1) and (d > m) then m:=d;
  end;
 write(m);
 close(input);
 close(output);
end.