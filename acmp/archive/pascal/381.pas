program Lines;
type TMap = array[1..100, 1..100] of longint;
type TPoint = record x, y, v: longint; end;
type TList = array[1..100000] of TPoint;
var n, i, j, L: longint;
    Map, D, A: TMap;
    List: TList;
    Start, Finish, C, Null: TPoint;
    ch: char;
function New(x, y, v: longint): TPoint;
var T: TPoint;
 begin
  T.x:=x;
  T.y:=y;
  T.v:=v;
  New:=T;
 end;
procedure Push(P: TPoint);
 begin
  inc(L);
  List[L]:=P;
  D[P.x, P.y]:=P.v;
 end;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 fillchar(Map, sizeof(Map), 0);
 fillchar(D, sizeof(D), 0);
 fillchar(A, sizeof(A), 0);
 fillchar(List, sizeof(List), 0);
 {Reading}
 readln(n);
 for i:=1 to n do
  begin
   for j:=1 to n do
    begin
     read(ch);
     case ch of
      '.':
          begin
           Map[i, j]:=0;
          end;
      'O':
          begin
           Map[i, j]:=-1;
          end;
      '@':
          begin
           Map[i, j]:=1;
           Start:=New(i, j, -1);
          end;
      'X':
         begin
           Map[i, j]:=2;
           Finish:=New(i, j, -1);
          end;
     end;
    end;
   readln;
  end;
 {Breadth-First Search}
 i:=0;
 L:=0;
 Push(Start);
 while((i < L) and (D[Finish.x, Finish.y] = 0)) do
  begin
   inc(i);
   C:=List[i];
   if((C.x - 1 > 0) and (Map[C.x - 1, C.y] <> -1) and (D[C.x - 1, C.y] = 0)) then Push(New(C.x - 1, C.y, 1));
   if((C.x + 1 <= n) and (Map[C.x + 1, C.y] <> -1) and (D[C.x + 1, C.y] = 0)) then Push(New(C.x + 1, C.y, 2));
   if((C.y - 1 > 0) and (Map[C.x, C.y - 1] <> -1) and (D[C.x, C.y - 1] = 0)) then Push(New(C.x, C.y - 1, 3));
   if((C.y + 1 <= n) and (Map[C.x, C.y + 1] <> -1) and (D[C.x, C.y + 1] = 0)) then Push(New(C.x, C.y + 1, 4));
  end;
 if D[Finish.x, Finish.y] = 0 then write('No')
 else
  begin
   writeln('Yes');
   A:=Map;
   i:=Finish.x;
   j:=Finish.y;
   while (i <> Start.x) or (j <> Start.y) do
    begin
     A[i, j]:=3;
     case D[i, j] of
      1:
        begin
         inc(i);
        end;
      2:
        begin
         dec(i);
        end;
      3:
        begin
         inc(j);
        end;
      4:
        begin
         dec(j);
        end;
     end;
    end;
   {Printing the Map}
   for i:=1 to n do
    begin
     for j:=1 to n do
      begin
       case A[i, j] of
        -1:
          begin
           write('O');
          end;
        0:
          begin
           write('.');
          end;
        1:
          begin
           write('@');
          end;
        2:
          begin
           write('X');
          end;
        3:
          begin
           write('+');
          end;
       end;
      end;
     writeln;
    end;
  end;
 close(output);
 close(input);
end.