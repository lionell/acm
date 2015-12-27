program Reverse;
var n, i: longint;
    a, b: array[1..20000] of longint;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 readln(n);
 for i:=1 to n do read(a[i]);
 for i:=1 to n do b[a[i]]:=i;
 for i:=1 to n do write(b[i], ' ');
 close(input);
 close(output);
end.