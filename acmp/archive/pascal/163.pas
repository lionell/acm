program Equals;
var s: string;
    d: integer;
function CharToByte(c: char): byte;
begin
 CharToByte:=ord(c) - ord('0');
end;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 read(s);
 if s[1] in ['0'..'9'] then
  begin
   if s[3] in ['0'..'9'] then
    begin
     if s[2] = '+' then d:=CharToByte(s[1]) + CharToByte(s[3]);
     if s[2] = '-' then d:=CharToByte(s[1]) - CharToByte(s[3]);
    end
    else
     begin
      if s[2] = '+' then d:=CharToByte(s[5]) - CharToByte(s[1]);
      if s[2] = '-' then d:=CharToByte(s[1]) - CharToByte(s[5]);
     end;
  end
  else
   begin
    if s[2] = '+' then d:=CharToByte(s[5]) - CharToByte(s[3]);
    if s[2] = '-' then d:=CharToByte(s[5]) + CharToByte(s[3]);
   end;
  write(d);
 close(input);
 close(output);
end.