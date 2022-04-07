%{ 
    #include <stdio.h>
    int c=0,w=0,s=0,l=0;
%}
word [^ \t\n,\.:]+
eol [\n]
blank [ ]
%%
{word} {w++; c=c+yyleng;}
{eol} {l++;}
{blank} {s++;}
%%

void main(int argc,char *argv[])
{
yyin=fopen("in.txt","r");
yylex();
 printf("no. of word %d \n",w);
printf("no. of char %d \n",c);
printf("no. of line %d \n",l);
printf("no. of space %d \n",s);
}
 int yywrap()
{ 
return 1;
}
