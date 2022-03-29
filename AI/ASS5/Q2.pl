%to check whether the number is present in the list or not.
present(X, [X|_]).
present(X,[_|T]) :-
 present(X,T).
%to add a number in the list.
append(N,L,N|L).
%concatenate two lists
concat([],L,L).
concat([H|T],L,[H|Z]):- concat(T,L,Z).
%to delete an element from the list.
deleteElement(X, [X|T], T).
deleteElement(X, [H|T], [H|Z]) :- deleteElement(X, T, Z).
%to sum the elements of a list of numbers.
sum(X,[]):-
 X is 0.
sum(X,[H|T]) :-
 sum(Y,T),
 X is H+Y.