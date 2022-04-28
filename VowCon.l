%option noyywrap
%{
#include<stdio.h>
int V=0,C=0;
%}

%%
[AEOIUaeiou] {V++;}
[a-zA-Z] {C++;}
\n {printf("Vowels=%d \n Consonants = %d",V,C);}

%%
int main()
{
        printf("Enter a string");
	yylex();
	return 0;
}
