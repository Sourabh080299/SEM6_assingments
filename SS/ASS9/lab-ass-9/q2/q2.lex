%{
 #include<stdio.h>
%}

%% 

[0-7]*  {printf("The number is Octal number or Hexadecimal number..");}

[0-9A-F]* {printf("The number is Hexadecimal number..");}

.* {printf("It is a invalid input..");}


%%

int yywrap()					
{
return 1;
}


int main(void){

   yylex();

	return 0;
}