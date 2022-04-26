add(A,B,ANS):-ANS is A+B.
subt(A,B,ANS):-ANS is A-B.
multi(A,B,ANS):-ANS is A*B.
div(A,B,ANS):-ANS is A/B.

calculator:-
    write("Enter 1 for add"),nl,
    write("Enter 2 for sub"),nl,
    write("Enter 3 for multi"),nl,
    write("Enter 4 for div"),nl,
    write("Enter your choice:"),nl,
    read(Choice),
    write("Enter 1st number:"),read(A),
    write("Enter 2nd number:"),read(B),
    (
    (Choice==1)->add(A,B,ANS),write(ANS),nl
    ;(Choice==2)->subt(A,B,ANS),write(ANS),nl
    ;(Choice==3)->multi(A,B,ANS),write(ANS),nl
    ;(Choice==4)->((B==0)->write("Division can't possible")
                   ;div(A,B,ANS),write(ANS),nl)
    ;write("Invaild Choice"),nl
    ).