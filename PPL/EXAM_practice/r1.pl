add_num([],0).
add_num([H|T],X) :-  add_num(T,Y) , X is Y+H .



add_all([],_).
add_all(X,Y):- slove(X,Y,0).
slove([],_,_).
slove([H|T],X,Z):-Z is Z+H,slove(T,[Z|X],Z).