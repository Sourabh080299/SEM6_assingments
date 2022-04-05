split_list([],Even,Odd).
split_list([X|T],Even,Odd):-X%2==0,split_list(T,[X,Even],Odd),!.
split_list([X|T],Even,Odd):-split_list(T,even,[X|Odd]).