/* Lex Program to check valid Mobile Number */
%{
/* Definition section */
%}
/* Rule Section */
%%
[+][9][1][0-9]{10} {printf("\nMobile Number is Valid.\n");}
.+ {printf("\nMobile Number is Invalid.\n");}
%%
// driver code
int yywrap(){}
int main()
{
printf("\nEnter Mobile Number: ");
yylex();
printf("\n");
return 0;
}