%member function checks whether H is present in T 
remove_duplicates([],[]):- !.
remove_duplicates([H|T],R):- member(H,T),remove_duplicates(T,R),!.
remove_duplicates([H|T],[R|Rest]):- R is H,remove_duplicates(T,Rest). 
