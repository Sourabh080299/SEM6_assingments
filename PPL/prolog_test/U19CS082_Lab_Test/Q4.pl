append([],L2,L3).
append(L1,[],L3).
append([X|T],[Y|Z],L3):-append(T,[Y|Z],[X|L3]),append([X|T],Z,[Y|L3]).