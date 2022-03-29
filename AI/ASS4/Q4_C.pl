%H will store answer 
 nth_element([H|_],1,H). 
 nth_element([_|T],N,H) :- 
    N > 1,
    N1 is N-1,
    nth_element(T,N1,H),!. 
