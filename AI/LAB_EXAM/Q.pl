%part-1
part_detail("anvil",423,10.99).
part_detail("stickofdynamite",567,1.97).
part_detail("shotgun",128,99.99).
part_detail("broccoli",256,0.99).
part_detail("carrotstick",511,0.99).
cust_detail("coyote",423,300).
cust_detail("fudd",567,1).
cust_detail("bunny",511,94).
cust_detail("bunny",256,9723).
cust_detail("coyote",128,12).
%For removing space and lower-case coversion
normalize(S,R):-
split_string(S," ","",L),
atomic_list_concat(L, X),
string_lower(X,R).
%part-2
bigorder(Cust):-
normalize(Cust,R),
cust_detail(R,_,Y),
Y>100.
%part-3
pricey(Pname):-
normalize(Pname,R),
part_detail(R,_,Y),
Y>50.
%part-4
chk_pdt(Pname):-
normalize(Pname,R),

part_detail(R,_,_).
%part-5
compareprod(Prod1,Prod2):-
normalize(Prod1,R1),
normalize(Prod2,R2),
part_detail(R1,_,Y1),
part_detail(R2,_,Y2),
Y1 > Y2.