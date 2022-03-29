%M stores first element 
%N stores last element 
 first_last([X|T],M,N):- 
     M is X,
     last_element(T,N). 
 
last_element([X|T],N):- 
    ( 
       length(T,L), 
       L=:=0, 
       N is X   
    );
    last_element(T,N),!. 
