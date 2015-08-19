program Bracket;{FULL}
const P = 1000007;
type TList = array[0..1000] of longint;
var n, i: longint;
    List: TList;
    ch: char;
begin
 //assign(input, 'input.txt');
 //reset(input);
 fillchar(List, sizeof(List), 0);
 List[0]:=1;
 n:=0;
 while not(eoln) do
  begin
   read(ch);
   case ch of
    '(':
        begin
         inc(n);
         for i:=n downto 1 do List[i]:=(List[i] + List[i - 1]) mod P;
        end;
    ')':
        begin
         for i:=0 to n - 1 do List[i]:=(List[i] + List[i + 1]) mod P;
        end;
    ']':
        begin
         for i:=1 to n do List[0]:=(List[0] + List[i]) mod P;
        end;
   end;
  end;
 write(List[0]);
 //close(input);
end.