program Kon;
var ch: char;
    x, y: integer;
function AtoB(a: char): byte;
begin
 case a of
  'a': AtoB:=1;
  'b': AtoB:=2;
  'c': AtoB:=3;
  'd': AtoB:=4;
  'e': AtoB:=5;
  'f': AtoB:=6;
  'g': AtoB:=7;
  'h': AtoB:=8;
 end;
end;
function BtoA(b: byte): char;
begin
 case b of
  1: BtoA:='a';
  2: BtoA:='b';
  3: BtoA:='c';
  4: BtoA:='d';
  5: BtoA:='e';
  6: BtoA:='f';
  7: BtoA:='g';
  8: BtoA:='h';
 end;
end;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 read(ch, y);
 x:=AtoB(ch);
 if ((x + 2) < 9) and ((y + 1) < 9) then writeln(BtoA(x + 2), y + 1);
 if ((x + 2) < 9) and ((y - 1) > 0) then writeln(BtoA(x + 2), y - 1);
 if ((x - 2) > 0) and ((y + 1) < 9) then writeln(BtoA(x - 2), y + 1);
 if ((x - 2) > 0) and ((y - 1) > 0) then writeln(BtoA(x - 2), y - 1);
 if ((x + 1) < 9) and ((y + 2) < 9) then writeln(BtoA(x + 1), y + 2);
 if ((x + 1) < 9) and ((y - 2) > 0) then writeln(BtoA(x + 1), y - 2);
 if ((x - 1) > 0) and ((y + 2) < 9) then writeln(BtoA(x - 1), y + 2);
 if ((x - 1) > 0) and ((y - 2) > 0) then writeln(BtoA(x - 1), y - 2);
 close(input);
 close(output);
end.