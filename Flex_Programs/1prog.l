%{
#include<stdio.h>

%}


%%
. {printf("%s",yytext);}
%%

int main()
{
    yylex();
    return 0;
}

int yywrap()
{
    return 1;
}