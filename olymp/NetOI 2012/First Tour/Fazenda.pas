program Fazenda;{F}
var ha, hb, hc: real;
    x, y, z, q, s, p, r: real;
begin
 read(ha, hb, hc);
 x:=((ha + hb)*hc)/(ha*hb);
 y:=((hb + hc)*ha)/(hb*hc);
 z:=((ha + hc)*hb)/(ha*hc);
 if (x > 1) and (y > 1) and (z > 1) then
  begin
   {q:=sqrt(((ha*hc + ha*hb + hb*hc)*(ha*hc + ha*hb - hb*hc)*(ha*hb + hb*hc - ha*hc)*(ha*hc + hb*hc - ha*hb))/(16*hb*hb*hb*hb*hc*hc*hc*hc))}
   r:=(ha*hc + ha*hb + hb*hc)/(2*hb*hc);
   q:=sqrt(r);
   r:=(ha*hc + ha*hb - hb*hc)/(2*hb*hc);
   q:=q*sqrt(r);
   r:=(ha*hb + hb*hc - ha*hc)/(2*hb*hc);
   q:=q*sqrt(r);
   r:=(ha*hc + hb*hc - ha*hb)/(2*hb*hc);
   q:=q*sqrt(r);
   s:=ha*ha/(4*q);
   p:=ha*((hb*hc + ha*hc + ha*hb)/(2*hb*hc*q));
  end
 else
  begin
   s:=0;
   p:=0;
  end;
 write(s, ' ', p);
end.
