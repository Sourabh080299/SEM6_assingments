%{
   int vow=0,cons=0;
%}

%%
[aeiouAEIOU] {vow++;}
[^ aeiouAEIOU] {cons++;}

%%

int main(){
    printf("Enter your string :");
    yylex();
    printf("number of vow: %d \n nnumber of cons: %d \n",vow,cons);
    return 0;
}
int yywrap(){
    return 1;
}