program Mytv;{FULL}
type TSet = set of byte;
var a, b: longint;

function One(x: longint): TSet;
var D: TSet;
 begin
  D:=[1..9];
  case x of
   1:
    begin
     D:=D - [1] + [99];
    end;
   2..8:
    begin
     D:=D - [x];
    end;
   9:
    begin
     D:=D - [9] + [10];
    end;
   10..98:
    begin
     D:=D + [x - 1, x + 1];
    end;
   99:
    begin
     D:=D + [98];
    end;
  end;
  One:=D;
 end;

function Two(x: longint): TSet;
var T, D: TSet;
    i: longint;
 begin
  T:=One(x);
  D:=[];
  for i:=1 to 99 do
   begin
    if i in T then D:=D + One(i);
   end;
  D:=D - [x];
  Two:=D;
 end;

begin
 read(a, b);
 if a = b then write('0')
 else
  begin
   if b in One(a) then write('1')
   else
    begin
     if b in Two(a) then write('2')
     else write('3');
    end;
  end;
end.