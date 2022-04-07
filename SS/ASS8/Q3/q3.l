%{
#include<stdio.h>
%}

%%
 /*** Rules section ***/
[a-z] printf("%c",yytext[0] - ('a' - 'A'));
0 { return 0;}
%%
int yywrap(){}
int main()
{
  FILE *fp;
  fp = fopen("input.txt", "r");
  if (fp == NULL) { printf("File not found"); }
  yyin = fp;

  yylex();
  return 0;
}
