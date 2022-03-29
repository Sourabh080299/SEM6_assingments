 len([], LenResult):- 
    LenResult is 0. 
%_X for avoiding singelton variable warning 
 len([_X|Y], LenResult):-
    len(Y, L), 
    LenResult is L + 1,!. 
