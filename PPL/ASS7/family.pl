%female
female(mary).
female(sandra).
female(juliet).
female(lisa).

%male
male(peter).
male(paul).
male(dick).
male(bob).
male(harry).

%parent
parent(bob, lisa).
parent(bob, paul).
parent(bob, mary).
parent(juliet, lisa).
parent(juliet, paul).
parent(juliet, mary).
parent(peter, harry).
parent(lisa, harry).
parent(mary, dick).
parent(mary, sandra).

%husband
husband(peter,lisa).
husband(bob,juliet).

%child
child(X,Y) :- parent(Y,X).

%mother
mother(X,Y) :-
    female(X),
    parent(X,Y),!.

%father
father(X,Y) :-
    male(X),
    parent(X,Y),!.

%wife
wife(X,Y) :- husband(Y,X),!.

%son
son(X,Y) :-
    male(X),
    child(X,Y).

%daughter
daughter(X,Y) :-
    female(X),
    child(X,Y).

%brother
brother(X,Y) :-
    male(X),
    parent(Z,X),
    parent(Z,Y),
    X \= Y.

%sister
sister(X,Y) :-
    female(X),
    parent(Z,X),
    parent(Z,Y),
    X \= Y.

%uncle
uncle(X,Y) :- 
    male(X),
    parent(Z,Y),
    brother(X,Z).

%aunt
aunt(X,Y) :-
    female(X),
    parent(Z,Y),
    sister(X,Z).

%nephew
nephew(X,Y) :-
    male(X),
    parent(Z,X),
    (brother(Y,Z);sister(Y,Z)).

%niece
niece(X,Y) :-
    female(X),
    parent(Z,X),
    (brother(Y,Z);sister(Y,Z)).



