%{
#include<stdio.h>
int count=0;
%}

%%
[A-Z] {count++; printf("%s is a capital letter\n",yytext);}
[a-z] {printf("%s is a not capital letter\n",yytext);}
.     {}
\n    {}
%%


int main()
{
    printf("Enter the String");
    yylex();
    printf("Number of capital letters : %d\n",count);
}

int yywrap()
{
    return 1;
}
