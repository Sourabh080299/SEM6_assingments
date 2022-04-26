add(A, B, SUM) :- SUM is A + B.
subtract(A, B, DIF) :- DIF is A - B.
multiply(A, B, MUL):- MUL is A * B.
divide(A, B, DIV):- DIV is A / B.

calculator :- 
write('1. Add'), nl,
write('2. Subtract'), nl,
write('3. Multiply'), nl,
write('4. Divide'), nl,
write('Enter choice: '), read(X),
write('Enter number 1: '), read(A),
write('Enter number 2: '),
read(B),
(
(X == 1)
-> add(A, B, SUM), write('Sum is: '), write(SUM), nl
; 
(X == 2)
-> subtract(A, B, DIF), write('Difference is: '), write(DIF), nl
; 
(X == 3)
-> multiply(A, B, MUL), write('Product is: '), write(MUL), nl
; 
(X == 4)
-> ((B == 0) -> write('Error: Division by 0'), nl
;
divide(A, B, DIV), write('Quotient is: '), write(DIV), nl
)
; 
write('Invalid choice'), nl
).