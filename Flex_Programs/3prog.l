%{
#include<stdio.h>
int count=0;
%}

%%

[a-zA-Z]+ {count++;}

. { }

%%

int main()
{
    yylex();
    printf("The total number of words = %d\n",count);
    return 0;
}

int yywrap()
{
    return 1;
}
