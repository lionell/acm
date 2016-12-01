program Traceroute; {NOT READY}
const NaN = 1000000000;
type TMap = array[1..2000, 1..2000] of  longint;
     TList = array[1..2000] of longint;
     TArray = array[1..2000] of byte;
var n, a, b, k, i, j: longint;
    Map, T: TMap;
    List: TList;
function Min(a, b: longint): longint;
  begin
   if a < b then Min:=a
   else Min:=b;
  end;
function Search(M: TMap): longint;
 var D: TList;
     U: TArray;
     i, j: longint;
 function Find: longint;
 var i, Min: longint;
 begin
  i:=1;
  while(D[i] = NaN) or (U[i] = 1) do inc(i);
  if i <= n then
   begin
    Min:=i;
    while(i <= n) do
     begin
      if (U[i] = 0) and (D[i] < D[Min]) then Min:=i;
      inc(i);
     end;
    Find:=Min;
   end
  else Find:=-1;
 end;
 begin
  fillchar(U, sizeof(U), 0);
  for i:=1 to n do D[i]:=NaN;
  D[a]:=0;
  i:=Find;
  while (i <> -1) do
   begin
    U[i]:=1;
    for j:=1 to n do
     begin
      if (U[j] = 0) and (Map[i, j] > 0) then D[j]:=Min(D[j], D[i] + Map[i, j]);
     end;
    i:=Find;
   end;
  if D[b] = NaN then Search:=-1
  else Search:=D[b];
 end;
begin
 //assign(input, 'input.txt');
 //reset(input);
 //assign(output, 'output.txt');
 //rewrite(output);
 read(n, a, b);
 for i:=1 to n do
  begin
   for j:=1 to n do
    begin
     read(Map[i, j]);
    end;
  end;
 read(k);
 for i:=1 to k do read(List[i]);
 for i:=1 to k - 1 do
  begin
   //T:=Map;
   //T[List[i], List[i + 1]]:=0;
   //T[List[i + 1], List[i]]:=0;
   write('-1 ');
  end;
 //close(output);
 //close(input);
end.
