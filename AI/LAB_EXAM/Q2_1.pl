parts("anvil",423,10.99).
parts("Stick Of Ynamite",567,1.97).
parts("shotgun",128,99.99).
parts("broccoli",256,0.99).
parts("carrot_stick",511,0.99).

customer("coyote",423,300).
customer("fudd",567,1).
customer("bunny",511,94).
customer("bunny",256,9723).
customer("coyote",128,12).

to_lower:-parts(X,_,_),string_lower(X,Y),write(Y),nl.

bigorder:-customer(X,Y,Z),(
    (Z>100)->write(X),write(" "),write(Y),write(" "),write(Z),nl
    ).

pricey:-parts(X,Y,Z),(
    (Z>50)->write(X),write(" "),write(Y),write(" "),write(Z),nl
    ).
).

findpart:-read(X),parts(X,_,_).

compareprod(Prod1,Prod2):-parts(Prod1,_,X),parts(Prod2,_,Y),X>Y.