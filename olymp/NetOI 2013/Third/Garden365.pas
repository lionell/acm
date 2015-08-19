program Garden365; {CHECKED}
var a, b, c, d: extended;
    S, pa, pb, pc, pd: extended;
begin
 //assign(input, 'input.txt');
 //reset(input);
 S:=0;
 read(a, b, c, d);
 pa:=(b + c + d - a);
 pb:=(a + c + d - b);
 pc:=(a + b + d - c);
 pd:=(a + b + c - d);
 S:=(pa * pb * pc * pd);
 if ((pa > 0) and (pb > 0) and (pc > 0) and (pd > 0)) then write(sqrt(S / 16):0:8)
 else write('0');
 //close(input);
end.
