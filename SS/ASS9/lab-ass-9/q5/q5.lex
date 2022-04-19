
%%

(aa)[a-zA-Z0-9]*(bcd) {printf("\n%s is accepted.\n",yytext);}
\n {return 0;}
.+ {printf("\n%s is not accepted. \n",yytext);} 

%%

int yywrap(){}

int main(){
    printf("Enter the string : ");
    yylex();
    return 0;
}