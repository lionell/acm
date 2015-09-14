program Problem22;
type Stek = ^TStek;
     TStek = record
              Data: longint;
              Next: Stek;
             end;
var StekC, StekN: Stek;
    n, i: longint;
begin
 read(n);
 new(StekC);
 read(StekC.Data);
 for i:=1 to n do
  begin
   new(StekN);
   StekC.Next:=StekN;
   read(StekN.Data);
   StekC:=StekN;
  end;

end.