program Temples;
type Mass = array[0..10, 0..10] of byte;
var p1, p2: string;
    D: Mass;
    s, l, i, j: longint;
procedure Fill(l, r: longint; x: longint);
var i: longint;
begin
 for i:=l to r do inc(D[x, i]);
end;
procedure Ch(c: char; l: longint);
begin
 case c of
  '0'..'9': inc(D[l, ord(c) - 48]);
  '?': Fill(0, 9, l);
  'a': Fill(0, 3, l);
  'b': Fill(1, 4, l);
  'c': Fill(2, 5, l);
  'd': Fill(3, 6, l);
  'e': Fill(4, 7, l);
  'f': Fill(5, 8, l);
  'g': Fill(6, 9, l);
 end;
end;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 l:=1;
 readln(p1);
 for i:=1 to length(p1) do Ch(p1[i], i);
 readln(p2);
 for i:=1 to length(p2) do Ch(p2[i], i);
 for i:=1 to length(p1) do
  begin
   s:=0;
   for j:=0 to 9 do
    begin
     if D[i, j] = 2 then inc(s);
    end;
   l:=l * s;
  end;
 write(l);
 close(input);
 close(output);
end.
