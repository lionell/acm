program Problem21;{FULL}
type Item = record
             Text: string;
             Price, Number: longint;
            end;
type Mass = array[1..1000] of Item;
var A: Mass;
    n, x, y, i: longint;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 readln(n, x, y);
 for i:=1 to n do
  begin
   readln(A[i].Text);
   readln(A[i].Price);
   readln(A[i].Number);
  end;
 for i:=1 to n do if (A[i].Price >= x) and (A[i].Price <= y) then writeln(A[i]. Text, ' ', A[i].Price, ' ', A[i].Number);
 close(input);
 close(output);
end.
