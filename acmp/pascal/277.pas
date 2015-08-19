program Algebra;
var a, b, c: longint;
function One(k: longint): string;
var s: string;
begin
 if k = -1 then s:='-'
 else
  begin
   if k = 1 then s:=''
   else str(k, s);
  end;
 One:=s;
end;
begin
 assign(input, 'input.txt');
 reset(input);
 assign(output, 'output.txt');
 rewrite(output);
 read(a, b, c);
 if(a = 0) and (b = 0) and (c = 0) then write('0')     {0; 0; 0}
 else
  begin
   if a = 0 then                                       {0; r; r}
    begin
     if b = 0 then write(One(c), 'y')                  {0; 0; r}
     else
      begin
       write(One(b), 'x');                             {0; }
       if c > 0 then write('+', One(c), 'y');
       if c < 0 then write(One(c), 'y');
      end;
    end
    else
     begin
      write(a);
      if b = 0 then
       begin
        if c > 0 then write('+', One(c), 'y');
        if c < 0 then write(One(c), 'y');
       end
       else
        begin
         if b > 0 then write('+', One(b), 'x')
         else write(One(b), 'x');
         if c > 0 then write('+', One(c), 'y');
         if c < 0 then write(One(c), 'y');
        end;
     end;
  end;
 close(input);
 close(output);
end.