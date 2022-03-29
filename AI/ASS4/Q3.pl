%function for GCD 
gcd(M, 0, Result):- Result is M. 
gcd(M, N, Result):- 
    N>0,
    Rem is M mod N,
    gcd(N, Rem, Result),!. 
 
%function for LCM 
 lcm(M,N,Result):- 
    Result is abs(M*N)/gcd(M,N). 
