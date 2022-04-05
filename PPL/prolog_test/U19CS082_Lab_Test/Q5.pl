merge_and_sort([],L2,L3).
merge_and_sort(L1,[],L3).
merge_and_sort([X|T],[Y|Z],L3):-merge_and_sort(T,[Y|Z],[X|L3]),merge_and_sort([X|T],Z,[Y|L3]),.