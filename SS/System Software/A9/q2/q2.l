/*lex Program to find octal and hexadecimal numbers.*/
%{

%}

%%
[0-7]+ {
    printf("\n-> Octal Number\n");
}
.[A-F1-9]+ {
    printf("\n-> Hexadecimal Number\n");
}

%%
int yywrap(void)  
{
 return 1;
}
int main(int argc, char*argv[]) 
{
	printf("\nEnter the number(Hex/Octal): ");
    yylex();
    printf("\n");
    return 0;
} 