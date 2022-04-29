%{
    #include<stdio.h>
    int l=0,c=0,w=0;
%}

words [^ \n\t,\.:]+
eol [\n]
space [\t]
%%
{words} {w++; c=c+yyleng;}
{eol} {l++;}
%%

int main(int argc,char *argv[]){
    printf("Enter your string : ");
    yylex();
    printf("Count of words are: %d \n count of new line %d \n count char %d \n ",l,c,w);
    return 0;
}

int yywrap()
{ 
return 1;
}