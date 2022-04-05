sumlist([],0).
sumlist([X|T],Y):-sumlist(T,N1),Y is N1+X.