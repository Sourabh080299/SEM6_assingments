odd_even(X) :- (
(mod(X, 2)=:=0)-> write('Even Number'), nl
; write('Odd Number'), nl
).