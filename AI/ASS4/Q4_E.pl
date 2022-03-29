%reverse the list 
%append will append two lists into one new list 
list_reverse([],[]). 
list_reverse([H|T],L):- list_reverse(T,R),append(R,[H],L).  
