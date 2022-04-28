%option noyywrap
%{
#include<stdio.h>
int upper = 0;
int lower = 0;
%}

%%
[A-Z] {upper++ ;}
[a-z] {lower++ ;}
\n {printf("Lower = %d and upper = %d",lower,upper);}

%%

int main(){
    printf("Enter a string");
    yylex();
    return 0;
}
