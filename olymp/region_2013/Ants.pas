program Ants;
var n, d, i: longint;
begin
 read(n, d);
 write((d / (1 - cos(2 * pi / n))):0:2, ' ');
 write((d / (2 * sqr(sin(pi / n)))):0:2);
end.
