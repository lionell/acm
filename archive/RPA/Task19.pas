program Problem19;{FULL}
var n: longint;
function Step(k: longint): longint;
begin
 case k of
  1: Step:=1;
  2: Step:=1;
  3: Step:=2;
  else Step:=Step(k - 1)  + Step(k - 2) + Step(k - 3);
 end;
end;
begin
 read(n);
 write(Step(n));
end.