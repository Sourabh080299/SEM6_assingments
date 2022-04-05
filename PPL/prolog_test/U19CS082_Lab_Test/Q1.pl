isvowels(X):-member(X,[a,e,i,o,u]).

count([],0).
count([X|T],N):-isvowels(X),count(T,N1),N is N1+1,!.
count([_|T],N):-count(T,N).