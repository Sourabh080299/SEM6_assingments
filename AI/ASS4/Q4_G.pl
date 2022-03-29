vowel(a).
vowel(e).
vowel(i).
vowel(o).
vowel(u).
cnt_vowel([],0).
cnt_vowel([X|T],N):- vowel(X),cnt_vowel(T,N1),N is N1+1,!. 
cnt_vowel([_|T],N):- cnt_vowel(T,N). 
