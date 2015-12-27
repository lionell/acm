program Ribaki;
var d, r: int64;
    n, k, i: longint;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 read(n, k);
 r:=1;
 for i:=1 to n do r:=r * n;
 d:=r - (n - 1)*k;
 write(d);
 close(input);
 close(output);
end.