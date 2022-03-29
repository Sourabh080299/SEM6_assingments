% Program: family.pl

parent(albert, jim).
parent(albert, peter).
parent(jim, brian).
parent(john, darren).
parent(peter, lee).
parent(peter, sandra).
parent(peter, james).
parent(peter, kate).
parent(peter, kyle).
parent(brian, jenny).
parent(irene, jim).
parent(irene, peter).
parent(pat, brian).
parent(pat, darren).
parent(amanda, jenny).

% female(Person)
%
female(irene).
female(pat).
female(lee).
female(sandra).
female(jenny).
female(amanda).
female(kate).

% male(Person)
%
male(albert).
male(jim).
male(peter).
male(brian).
male(john).
male(darren).
male(james).
male(kyle).

% yearOfBirth(Person, Year).
%
yearOfBirth(irene, 1923).
yearOfBirth(pat, 1954).
yearOfBirth(lee, 1970).
yearOfBirth(sandra, 1973).
yearOfBirth(jenny, 2004).
yearOfBirth(amanda, 1979).
yearOfBirth(albert, 1926).
yearOfBirth(jim, 1949).
yearOfBirth(peter, 1945).
yearOfBirth(brian, 1974).
yearOfBirth(john, 1955).
yearOfBirth(darren, 1976).
yearOfBirth(james, 1969).
yearOfBirth(kate, 1975).
yearOfBirth(kyle, 1976).


% grandparent(Gparent,Child)
grand_parent(X,Y) :- parent(X,Z),parent(Z,Y).

% older(Person1,Person2)
older(Person1,Person2) :- yearOfBirth(Person1,Year1),yearOfBirth(Person2,Year2),Year2 > Year1.

% sibling(Child1,Child2)
sibling(X,Y) :- parent(Z,X),parent(Z,Y),X \= Y.

% elder_brother
elder_brother(X,Y) :- male(X),sibling(X,Y),older(X,Y).

% predecessor
predecessor(X,Y) :- parent(X,Z),predecessor(Z,Y).
predecessor(X,Y) :- parent(X,Y).

% sister
sister(X,Y) :- female(X),parent(Z,X),parent(Z,Y), X \= Y.

% count rule
person(X) :- female(X).
person(Y) :- male(Y).

