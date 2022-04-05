list_member(X,[Y|_]):- X==Y.
list_member(X,[_|T]):- list_member(X,T).