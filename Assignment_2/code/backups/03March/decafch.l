%{
#include <cstdio>
#include <iostream>
using namespace std;
#define YY_DECL extern "C" int yylex()

#include "decafch.tab.h"  // to get the token types that we return
extern int line_num;
int yycolumn = 1;

#define YY_USER_ACTION yylloc.first_line = yylloc.last_line = line_num; \
    yylloc.first_column = yycolumn; yylloc.last_column = yycolumn+yyleng-1; \
    yycolumn += yyleng;


%}

%%


if 			{return IF;}
else 			{return ELSE;}
while 			{return WHILE;}
for 			{return FOR;}
return 			{return RETURN;}
break			{return BREAK;}
continue		{return CONTINUE;}
null 			{return NULL_TOKEN;}
true			{return TRUE;}
false 			{return FALSE;}
this 			{return THIS;}
super 			{return SUPER;}
new 			{return NEW;}

class 			{return CLASS;}
extends 		{return EXTEND;}
public	 		{return PUBLIC;}
private	 		{return PRIVATE;}
,			{return COMMA;}
\.			{return DOT;}

\+\+			{return PLUS_PLUS;}
\+			{return PLUS;}
--			{return MINUS_MINUS;}
-			{return MINUS;}
\*			{return MULTIPLY;}
\/			{return DIVIDE;}
!=			{return NOT_EQUAL;}
!			{return NOT;}
\|\|			{return OR;}
&&			{return AND;}
==			{return EQUAL_EQUAL;}
=			{return EQUAL;}
\<=			{return LESS_EQUAL;}
\<			{return LESS;}
>=			{return GREATER_EQUAL;}
>			{return GREATER;}


static			{return STATIC;}
;			{return SEMI_COLON;}
bool			{return BOOLEAN;}
boolean			{return BOOLEAN;}
int			{return INT;}
float			{return FLOAT;}
void 			{return VOID;}
\(			{return OPEN_PARANTHESIS;}
\)			{return CLOSE_PARANTHESIS;}
\{			{return OPEN_BRACE;}
\}			{return CLOSE_BRACE;}
\[			{return OPEN_SQR_BRACKET;}
\]			{return CLOSE_SQR_BRACKET;}
[ \t]	          	;
[\n]			{ line_num++; yycolumn = 1;}
[0-9]+\.[0-9]+ 		{ yylval.fval = atof(yytext); return FLOAT_CONST; }
[0-9]+            	{ yylval.ival = atoi(yytext); return INT_CONST; }
[0-9]+\.[0-9]+[eE][+-]?[0-9]+		{ return FLOAT_CONST_MANTISSA; }
\/\/.*$      		{
				// we have to copy because we can't rely on yytext not changing underneath us:
				yylval.sval = strdup(yytext);
				//return COMMENT;
				;
			}
\/\*([^*]|[\r\n]|(\*+([^*\/]|[\r\n])))*\*+\/		{
								// we have to copy because we can't rely on yytext not changing underneath us:
								yylval.sval = strdup(yytext);
								// return COMMENT;
								int i = 0;
								while (yytext[i] != '\0')
								{
									if(yytext[i] == '\n')
									{
										line_num++;
										yycolumn = 1;
									}
									i++;
								}
								;
							}
\"(\\.|[^\\"])*\"	{ yylval.sval = strdup(yytext); return STRING_CONST; }

[a-zA-Z][a-zA-Z0-9_]*   {
				// we have to copy because we can't rely on yytext not changing underneath us:
				yylval.sval = strdup(yytext);
				return ID;
			}
.			{
				yylval.errval = strdup(yytext); 
				//cout<<"SYN_ERROR : "<<yytext<<endl;
				return SYN_ERR;
			}

%%

