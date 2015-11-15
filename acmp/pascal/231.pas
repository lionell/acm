program Pack;
var s: string;
    a: array[1..10000] of char;
    n: byte;
    l, i, j: longint;
function CharToByte(c: char): byte;
begin
 CHarToByte:=ord(c) - ord('0');
end;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 //fillchar(a, sizeof(a), '0');
 read(s);
 i:=0;
 l:=0;
 while (i < length(s)) do
  begin
   inc(i);
   n:=0;
   if s[i] in ['0'..'9'] then
    begin
     if s[i + 1] in ['0'..'9'] then
      begin
       n:=CharToByte(s[i]) * 10 + CharToByte(s[i + 1]);
       for j:=l + 1 to l + n do a[j]:= s[i + 2];
       l:=l + n;
       i:=i + 2;
      end
      else
       begin
        n:=CharToByte(s[i]);
        for j:=l + 1 to l + n do a[j]:=s[i + 1];
        l:=l + n;
        i:=i + 1;
       end;
    end
   else
    begin
     inc(l);
     a[l]:=s[i];
    end;

  end;
 for i:=1 to l do
  begin
   write(a[i]);
   if i mod 40 = 0 then writeln;
  end;
 close(input);
 close(output);
end.