%{
   
%}

%%
[A-Z] {printf("%c",yytext[0]+('a'-'A'));}

%%

int yywrap(){}
int main(){
    printf("enter string: ");
    yylex();
    return 0;
}