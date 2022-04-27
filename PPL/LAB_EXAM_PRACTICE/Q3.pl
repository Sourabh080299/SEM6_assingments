removeNil([],[]).
removeNil([H|T],L):-
    removeNil(H,L1),
    removeNil(T,L2),
    append(L1,L2,L).
removeNil(X,[X]).