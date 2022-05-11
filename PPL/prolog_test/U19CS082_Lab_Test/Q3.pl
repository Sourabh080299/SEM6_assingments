reverse1([],X,X).
reverse1([H|T],Y,X):-reverse1(T,Y,[H|X]).
