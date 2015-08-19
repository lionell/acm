program Water;
type Status = record a, b, c, d: longint; end;
type Queue = array[1..10000] of Status;
var Q: Queue;
    a, b, c, i, l, k: longint;
function Create(a, b, c, d: longint): Status;
var T: Status;
begin
 T.a:=a;
 T.b:=b;
 T.c:=c;
 T.d:=d;
 Create:=T;
end;
function Check(X: Status): boolean;
var b: boolean;
    i: longint;
begin
 b:=false;
 for i:=1 to l do if (Q[i].a = X.a) and (Q[i].b = X.b) and (Q[i].c = X.c) then b:=true;
 Check:=b;
end;
procedure Push(X: Status);
begin
 if Check(X) = false then
  begin
   inc(l);
   Q[l]:=X;
  end;
end;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 fillchar(Q, sizeof(Q), 0);
 read(a, b, c, k);
 Q[1].a:=a;
 Q[1].b:=0;
 Q[1].c:=0;
 Q[1].d:=0;
 l:=1;
 i:=1;
 while (i <= l) and (Q[i].a <> k) do
  begin
   if (Q[i].a > 0) then
    begin
     if (Q[i].b < b) then
      begin
       if b - Q[i].b < Q[i].a then Push(Create(Q[i].a - b + Q[i].b, b, Q[i].c, Q[i].d + 1))
       else Push(Create(0, Q[i].b + Q[i].a, Q[i].c, Q[i].d + 1));
      end;
     if (Q[i].c < c) then
      begin
       if c - Q[i].c < Q[i].a then Push(Create(Q[i].a - c + Q[i].c, Q[i].b, c, Q[i].d + 1))
       else Push(Create(0, Q[i].b, Q[i].c + Q[i].a, Q[i].d + 1));
      end;
    end;
   if (Q[i].b > 0) then
    begin
     if (Q[i].a < a) then
      begin
       if a - Q[i].a < Q[i].b then Push(Create(a, Q[i].b - a + Q[i].a, Q[i].c, Q[i].d + 1))
       else Push(Create(Q[i].a + Q[i].b, 0, Q[i].c, Q[i].d + 1));
      end;
     if (Q[i].c < c) then
      begin
       if c - Q[i].c < Q[i].b then Push(Create(Q[i].a, Q[i].b - c + Q[i].c, c, Q[i].d + 1))
       else Push(Create(Q[i].a, 0, Q[i].c + Q[i].b, Q[i].d + 1));
      end;
    end;
   if (Q[i].c > 0) then
    begin
     if (Q[i].a < a) then
      begin
       if a - Q[i].a < Q[i].c then Push(Create(a, Q[i].b, Q[i].c - a + Q[i].a, Q[i].d + 1))
       else Push(Create(Q[i].a + Q[i].c, Q[i].b, 0, Q[i].d + 1));
      end;
     if (Q[i].b < b) then
      begin
       if b - Q[i].b < Q[i].c then Push(Create(Q[i].a, b, Q[i].c - b + Q[i].b, Q[i].d + 1))
       else Push(Create(Q[i].a, Q[i].b + Q[i].c, 0, Q[i].d + 1));
      end;
    end;
   inc(i);
  end;
 if i <= l then write(Q[i].d)
 else write('IMPOSSIBLE');
 close(input);
 close(output);
end.