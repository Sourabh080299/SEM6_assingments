%position

inside(room,banana).
inside(room,monkey).
inside(room,box).
on(floor,monkey).
on(floor,box).
at(ceiling,banana).

%Monkey have to make following steps


strong(monkey).
cantake(monkey).
canclime(monkey,box).


push(monkey,box):-
   strong(monkey).


under(banana,box):-
   push(monkey,box).


canreach(banana,monkey):-
    at(floor,banana);
    at(ceiling,banana),
    under(banana,box),
    canclime(monkey,box).

canmonkeygetbanana(banana,monkey):-
    canreach(banana,monkey),
    cantake(monkey).