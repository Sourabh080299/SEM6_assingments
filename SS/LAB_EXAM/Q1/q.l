%{
   int ans=0;
%}

%%

"for(int "[a-z][=][0-9][;][a-z][<][0-9][;][a-z]"++)"  {printf("vaild syntax of for loop \n");}
"for(int "[a-z][=][0-9][;][a-z][<][0-9][;][a-z]"--)" {printf("vaild syntax of for loop \n");}
"for(int "[a-z][=][0-9][;][a-z][>][0-9][;][a-z]"++)" {printf("vaild syntax of for loop \n");}
"for(int "[a-z][=][0-9][;][a-z][>][0-9][;][a-z]"--)" {printf("vaild syntax of for loop \n");}
"for(int "[a-z][=][0-9][;][a-z]">="[0-9][;][a-z]"--)" {printf("vaild syntax of for loop \n");}
"for(int "[a-z][=][0-9][;][a-z]"<="[0-9][;][a-z]"--)" {printf("vaild syntax of for loop \n");}
"for(int "[a-z][=][0-9][;][a-z]"<="[0-9][;][a-z]"++)" {printf("vaild syntax of for loop \n");}
"for(int "[a-z][=][0-9][;][a-z]">="[0-9][;][a-z]"++)" {printf("vaild syntax of for loop \n");}

.+ {printf("invaild syntax of for loop");}

%%
 
int yywrap(){}
int main(){
    printf("Enter your string: ");
    yylex();
    return 0;
}
