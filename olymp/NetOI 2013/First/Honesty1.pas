program Honesty;{NEED TO CHECK}
const Inf = 100000000000;
type TList = array[1..1000000] of longint;
var i, j: longint;
    N, K, Min, Max, S: int64;
    A, B: TList;
begin
 //assign(input, 'input.txt');
 //reset(input);
 //assign(output, 'output.txt');
 //rewrite(output);
 fillchar(A, sizeof(A), 0);
 fillchar(B, sizeof(B), 0);
 read(N, K);
 for i:=1 to N do read(A[i]);
 Max:=A[1];
 Min:=A[1];
 for i:=1  to N - 1 do
  begin
   if A[i] > Max then Max:=A[i];
   if A[i] < Min then Min:=A[i];
  end;
 write(abs(Max - Min));
 //if abs(Max) > abs(Min) then write(abs(Max))
 //else write(abs(Min));
 //close(input);
 //close(output);
end.
