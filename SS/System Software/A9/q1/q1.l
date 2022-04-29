%{

%}

%%

struct|if|else|switch|class|int|float|char|double|for|main|void|return|long|signed|unsigned {
    printf("\n-> Keyword - %s",yytext);
}
[a-z]|[_]([a-z][A-Z][0-9]) {
    printf("\n-> Identifier - %s",yytext);
}
[0-9]+ { printf("\n-> Constant - %s",yytext);
}
%%
int yywrap(void)  
{
 return 1;
}
int main(int argc, char*argv[]) 
{
	yyin=fopen("input.txt","r");
    yylex();
    printf("\n\n");
} 