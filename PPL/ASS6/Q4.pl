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

%father
father(X,Y) :-
    male(X),
    parent(X,Y),!.

%sister
sister(X,Y) :-
    female(X),
    parent(Z,X),
    parent(Z,Y),
    X \= Y.

%brother
brother(X,Y) :-
    male(X),
    parent(Z,X),
    parent(Z,Y),
    X \= Y.

%grandmother
grandmother(X,Y) :-
    female(X),
    parent(X,Z),
    parent(Z,Y),!.

%cousin
cousin(X,Y) :- 
    parent(Z,X),
    parent(W,Y),
    (brother(Z,W);sister(Z,W)).

