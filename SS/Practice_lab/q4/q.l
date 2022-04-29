%{

%}

%%
.+ {
    
    int n=0;
    for(int i=0;yytext[i]!='\0';i++){
        n++;
    }
    printf("your ans:");
    for(int i=n;i>=0;i--){
        printf("%c",yytext[i]);
    }
}
%%

int yywrap(){}
int main(){
    printf("enter: ");
    yylex();
    return 0;
}