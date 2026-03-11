%{
#include<stdio.h>
int neg_count=0;
int pos_count=0;
int count=0;
%}

%%

-[0-9]+   {neg_count++; printf("%s is negative\n",yytext); count++;}

[0-9]+    {pos_count++; printf("%s is positive\n",yytext); count++;}

\n        { }

\t        { }

.         { }

%%

int main()
{
    printf("Enter the Numbers:\n");
    yylex();

    printf("Total Numbers = %d\n",count);
    printf("Total Negative Numbers = %d\n",neg_count);
    printf("Total Positive Numbers = %d\n",pos_count);

    return 0;
}

int yywrap()
{
    return 1;
}
