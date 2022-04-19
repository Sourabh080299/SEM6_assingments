
/*Definition Section*/
%{
#include<stdio.h>
%}


/*Rule Section*/
%%
auto|double|int|struct|break|else|long|switch|case|enum|register|typedef|char|extern|return|union|continue|for|signed|void|do|if|static|while|default|goto|sizeof|volatile|const|float|short|unsigned {printf("It is a keyword ");}

[0-9]* printf("It is a constant");

^[a-zA-Z_][a-zA-Z0-9_]*  {printf("It is Identifier\n");} 

.* {printf("Invalid Identifier ");}

%%

/*call the yywrap function*/
int yywrap()					
{
return 1;
}

/*Auxiliary function*/
/*Driver function*/
int main(void)
{
/*call the yylex function.*/
yylex();						
return 0;
}
