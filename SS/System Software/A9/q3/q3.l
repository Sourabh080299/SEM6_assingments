/*lex code to count the number of lines,
	tabs and spaces used in the input*/

%{
#include<stdio.h>
/*Global variables*/
int single = 0, multi = 0;
%}

/*Rule Section*/
%%
\/\/.{1,} { 
    single++;
}
\/\*[.{1,}\n{1,}]*\*\/ { 
    multi++;
}

%%
int yywrap(void) {
	return 1;
}

int main(int argc, char* argv[])
{
    yyin = fopen("input.txt", "r");
	yylex();
    printf("\nSingle Line Comments : %d", single);
    printf("\nMultiple line comments : %d", multi);
    printf("\n");
}
