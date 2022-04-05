prod([],1).
prod([X|T],Y):-prod(T,N1),Y is N1*X.