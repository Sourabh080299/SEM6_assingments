%{
    #include<stdio.h>
    int mult_count = 0;
    int single_count = 0;

%}

%x C
%%

"/*"][.]*"./"  {mult_count++;}
"/*"           {BEGIN C;}
<C>"*/"        {BEGIN 0; mult_count++;}
<C>\n          {;}
<C>.           {;}
\/\/.*         {single_count++;}
. {;}

%%

int yywrap()					
{
return 1;
}


int main(void){

  extern FILE *yyin, *yyout;
  yyin = fopen("input.c", "r");

  yylex();

  printf("\nCount of Single line comment:- %d\n",single_count);
  printf("\nCount of Multi line comment:- %d\n",mult_count);

  return 0;


}

