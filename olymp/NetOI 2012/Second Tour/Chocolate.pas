program Chocolate;
const c = 1000000007;
var A: array[1..100, 1..100, 1..100] of int64;
    n, m, k: longint;
function Step(n, m, k: longint): longint;
 var d: int64;
 begin
  if A[n, m, k] <> 0 then d:=A[n, m, k]
  else
   begin
    if (n = 1) or (m = 1) or (k = 1) then d:=1
    else
     begin
      if (n = m) and (m = k) then d:=Step(n - 1, m, k)
      else
       begin
        if (n = m) then d:=Step(n - 1, m, k) + Step(n, m, k - 1)
        else
         begin
          if (n = k) then d:=Step(n - 1, m, k) + Step(n, m - 1, k)
          else
           begin
            if (m = k) then d:=Step(n, m - 1, k) + Step(n - 1, m, k)
            else d:=Step(n - 1, m, k) + Step(n, m - 1, k) + Step(n, m, k - 1);
           end;
         end;
       end;
     end;
  end;
  d:=d mod 1000007;
  A[n, m, k]:=d;
  Step:=d;
 end;
begin
 fillchar(A ,sizeof(A), 0);
 read(n, m, k);
 write(Step(n, m, k));
end.
