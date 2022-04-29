%{
    int accepted = 0 , not = 0;
%}

%%
^aa[a-zA-Z]*bcd$ {
    accepted++;
}
. {
   not++;
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
    printf("\nAccepted words : %d", accepted);
    printf("\nNot accepted : %d", not);
    printf("\n");
} 