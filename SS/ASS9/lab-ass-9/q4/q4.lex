%{

    int neg_count = 0;
    int pos_count = 0;
    int zero_count = 0;

%}

%%
[0]+  {zero_count++;}
[0]+[.][0]+ {zero_count++;}
[+]?[0-9]+ {pos_count++;}
[+]?[0-9]+\.[0-9]+ {pos_count++;}
[-][0-9]+[.][0-9]+ {neg_count++;}
[-][0-9]+ {neg_count++;}
%%

int yywrap(){};

int main(){
    extern FILE *yyin , *yyout;
    yyin = fopen("input.txt","r");
    yylex();

    printf("\nCount of Positive numbers:- %d\n",pos_count);
    printf("\nCount of Negative numbers:- %d\n",neg_count);
    printf("\nCount of Zero's:- %d\n",zero_count);
    

}