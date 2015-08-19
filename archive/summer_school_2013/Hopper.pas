program Hopper;
type TMap = array[1..1000] of byte;
     Request = record
                x, i, d: longint;
               end;
     TQueue = record
               A: array[1..1000000] of Request;
               Length, Current: longint;
              end;
     TData = array[1..1000, 1..1000] of longint;
var Map: TMap;
    Queue: TQueue;
    Data: TData;
    n, i, Length, Answer: longint;
    Go: boolean;
    Now: Request;
procedure Push(x, i, d: longint);
begin
 if (x > 0) and (x <= n) and (i > 0) and (Data[x, i] = 0) and (Map[x] = 0) then
  begin
   inc(Queue.Length);
   Queue.A[Queue.Length].x:=x;
   Queue.A[Queue.Length].i:=i;
   Queue.A[Queue.Length].d:=d;
   Data[x, i]:=d;
 end;
 if (Go) and (x = n) then
  begin
   Go:=false;
   Answer:=d;
  end;
end;
function Pop:Request;
var T: Request;
begin
 inc(Queue.Current);
 T.x:=Queue.A[Queue.Current].x;
 T.i:=Queue.A[Queue.Current].i;
 T.d:=Queue.A[Queue.Current].d;
 Pop:=T;
end;
begin
 assign(input, 'input.txt');
 reset(input);
 fillchar(Queue, sizeof(Queue), 0);
 fillchar(Map, sizeof(Map), 0);
 fillchar(Data, sizeof(Data), 0);
 Go:=true;
 Queue.Current:=0;
 read(n);
 for i:=1 to n do read(Map[i]);
 Data[1, 1]:=1;
 if Map[2] = 0 then
  begin
   Push(2, 1, 2);
   while(Go) and (Queue.Current <= Queue.Length) do
    begin
     Now:=Pop;
     Push(Now.x + Now.i + 1, Now.i + 1, Now.d + 1);
     Push(Now.x - Now.i - 1, Now.i + 1, Now.d + 1);
     Push(Now.x + Now.i, Now.i, Now.d + 1);
     Push(Now.x - Now.i, Now.i, Now.d + 1);
     if (Now.i > 1) then Push(Now.x + Now.i - 1, Now.i - 1, Now.d + 1);
     if (Now.i > 1) then Push(Now.x - Now.i + 1, Now.i - 1, Now.d + 1);
    end;
   if Go = false then write(Answer - 1)
   else write('-1');
  end
 else write('-1');
 //close(input);
end.
