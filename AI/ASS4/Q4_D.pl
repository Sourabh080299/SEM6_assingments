%incremented by one 
%R is the result list 
 incr_each([],[]). 
 incr_each([H|T],[R|RT]):- R is H+1,incr_each(T,RT). 
