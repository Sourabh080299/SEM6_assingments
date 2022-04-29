%{

    #include<stdio.h>

    #include<string.h>

    float p,answer;

    int flag;

    char cc;

%}



digit [0-9]+

op "+"|"-"|"*"|"/"

%%

{digit} {

p=atof(yytext);

if(flag==0)

{

    answer=p;

    flag=1;

}

else

{

    switch(cc)

    {

        case '+':answer=answer+p; break;

        case '-':answer=answer-p; break;

        case '*':answer=answer*p; break;

        case '/':answer=answer/p; break;

    }

}

}

{op} {

if(strcmp(yytext,"+")==0)

    cc='+';

if(strcmp(yytext,"-")==0)

    cc='-';

if(strcmp(yytext,"*")==0)

    cc='*';

if(strcmp(yytext,"/")==0)

    cc='/';

}

"\n" {printf("\nResult : %f\n",answer);answer=flag=0;}

%%

int yywrap(void)

{

return 1;

}

int main()

{

flag=answer=0;

printf("\nEnter the Calculation to be Performed : ");

yylex();

return(0);

}