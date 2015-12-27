program Lab;
const Infinity = 100000;
type Mass = array[1..51, 1..51, 1..51] of longint;
type Point = record
              x, y, z: ShortInt;
             end;
type Stek = record
             Arr: array[1..125000] of Point;
             Length: longint;
            end;
var A, Res: Mass;
    S: Stek;
    Start, Finish, P, T: Point;
    h, m, n, i, j, k, d: longint;
    ch: char;
procedure Push(x: Point);
var i: longint;
begin
 inc(S.Length);
 S.Arr[S.Length]:=x;
end;
function Pop: Point;
var d: Point;
    i: longint;
begin
 d:=S.Arr[1];
 for i:=1 to S.Length do S.Arr[i]:=S.Arr[i + 1];
 dec(S.Length);
 Pop:=d;
end;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 fillchar(A, sizeof(A), 0);
 for i:=1 to 51 do
  for j:=1 to 51 do
   for k:=1 to 51 do
    Res[i, j, k]:=Infinity;
 fillchar(S.Arr, sizeof(S.Arr), 0);
 S.Length:=0;
 readln(h, m, n);
 for i:=1 to h do
  begin
   for j:=1 to m do
    begin
     for k:=1 to n do
      begin
       read(ch);
       case ch of
        '1':
            begin
             A[i, j, k]:=1;
             Start.x:=j;
             Start.y:=k;
             Start.z:=i;
            end;
        'o': A[i, j, k]:=-1;
        '2':
            begin
             A[i, j, k]:=2;
             Finish.x:=j;
             Finish.y:=k;
             Finish.z:=i;
            end;
       end;
      end;
     readln;
    end;
   readln;
  end;
 Push(Start);
 Res[Start.z, Start.x, Start.y]:=0;
 while S.Length > 0 do
  begin
   P:=Pop;
   d:=Res[P.z, P.x, P.y] + 1;
   if(P.x + 1 <= m) and (Res[P.z, P.x + 1, P.y] > d) and (A[P.z, P.x + 1, P.y] <> -1) then
    begin
     T:=P;
     Res[P.z, P.x + 1, P.y]:=d;
     T.x:=T.x + 1;
     Push(T);
    end;
   if(P.y + 1 <= n) and (Res[P.z, P.x, P.y + 1] > d) and (A[P.z, P.x, P.y + 1] <> -1) then
    begin
     T:=P;
     Res[P.z, P.x, P.y + 1]:=d;
     T.y:=T.y + 1;
     Push(T);
    end;
   if(P.z + 1 <= h) and (Res[P.z + 1, P.x, P.y] > d) and (A[P.z + 1, P.x, P.y] <> -1) then
    begin
     T:=P;
     Res[P.z + 1, P.x, P.y]:=d;
     T.z:=T.z + 1;
     Push(T);
    end;
   if(P.x - 1 > 0) and (Res[P.z, P.x - 1, P.y] > d) and (A[P.z, P.x - 1, P.y] <> -1) then
    begin
     T:=P;
     Res[P.z, P.x - 1, P.y]:=d;
     T.x:=T.x - 1;
     Push(T);
    end;
   if(P.y - 1 > 0) and (Res[P.z, P.x, P.y - 1] > d) and (A[P.z, P.x, P.y - 1] <> -1) then
    begin
     T:=P;
     Res[P.z, P.x, P.y - 1]:=d;
     T.y:=T.y - 1;
     Push(T);
    end;
  end;
 d:=Res[Finish.z, Finish.x, Finish.y];
 d:=d * 5;
 write(d);
 close(input);
 close(output);
end.
