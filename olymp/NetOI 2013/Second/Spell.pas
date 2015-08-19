program Spell;{FULL}
const Inf = 1000000000;
type TMap = array[1..1000, 1..1000] of byte;
type TList = array[1..1000] of longint;
var S: string;
    L, R, N, i, j, k, M: longint;
    Map: TMap;
    D1, D2, D, Used: TList;

function Min(a, b: longint): longint;
 begin
  if a < b then Min:=a
  else Min:=b;
 end;

begin
 //assign(input, 'input.txt');
 //reset(input);
 //assign(output, 'output.txt');
 //rewrite(output);
 fillchar(Map, sizeof(Map), 0);
 fillchar(D1, sizeof(D1), 0);
 fillchar(D2, sizeof(D2), 0);
 fillchar(D, sizeof(D), 0);
 fillchar(Used, sizeof(Used), 0);
 readln(S);
 N:=length(S);
 {Setting the D}
 for i:=2 to N + 1 do D[i]:=Inf;
 {/Setting}
 {Filling D1}
 L:=0;
 R:=0;
 for i:=1 to N do
  begin
   if i > R then k:=1
   else k:=Min(D1[L + R - i], R - i) + 1;
   while ((i + k <= N) and (i - k >= 1) and (S[i - k] = S[i + k])) do inc(k);
   dec(k);
   D1[i]:=k;
   if i + k > R then
    begin
     R:=i + k;
     L:=i - k;
    end;
  end;
 {/Filling}
 {Filling the Map with D1}
 for i:=1 to N do
  begin
   for j:=0 to D1[i] do
    begin
     Map[i - j, i + j + 1]:=1;
     //Map[i - j, i + j]:=1;
     //Map[i + j, i - j]:=1;
    end;
  end;
 {/Filling}
 {Filling the D2}
 L:=0;
 R:=0;
 for i:=1 to N - 1 do
  begin
   if i > R then k:=1
   else k:=Min(D2[L + R - i], R - i + 1) + 1;
   while ((i + k <= N) and (i - k + 1 >= 1) and (S[i - k + 1] = S[i + k])) do inc(k);
   dec(k);
   D2[i]:=k;
   if i + k - 1 > R then
    begin
     R:=i + k - 1;
     L:=i - k + 1;
    end;
  end;
 {/Filling}
 {Filling the Map with D2}
 for i:=1 to N do
  begin
   for j:=1 to D2[i] do
    begin
     Map[i - j + 1, i + j + 1]:=1;
     //Map[i - j + 1, i + j]:=1;
     //Map[i + j, i - j + 1]:=1;
    end;
  end;
 {/Filling}
 {Dijikstra's algorithm}
 while (D[N + 1] = Inf) do
  begin
   M:=1;
   while Used[M] = 1 do inc(M);
   for i:=1 to N + 1 do if (Used[i] = 0) and (D[i] < D[M]) then M:=i;
   Used[M]:=1;
   for i:=1 to N + 1 do
    begin
     if (Map[M, i] = 1) and (D[i] > D[M] + 1) then D[i]:=D[M] + 1;
    end;
  end;
 {/Dijikstra's algorithm}
 write(D[N + 1]);
 //for i:=1 to N do
 // begin
 //  for j:=1 to N + 1 do write(Map[i, j], ' ');
 //  writeln;
 // end;
 //for i:=1 to N - 1 do write(D2[i], ' ');
 //close(input);
 //close(output);
end.
