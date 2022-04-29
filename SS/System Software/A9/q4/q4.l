%{
    int p=0, n=0, zero=0;
%}

%%
[1-9]+ {
    p++;
}
[0]+ { 
    zero++;
}
[-][1-9]+ {
    n++;
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
    printf("1) Positive numbers - %d\n 2) Negative numbers - %d\n 3) Zero valued numbers - %d\n", p,n,zero);
    printf("\n");
} 