%{
#include <cstdio>
#include <iostream>
using namespace std;
#define YY_DECL extern "C" int yylex()

#include "decafch.tab.h"  // to get the token types that we return

%}
%%
class 			{return CLASS;}
extends 		{return EXTEND;}
public	 		{return PUBLIC;}
private	 		{return PRIVATE;}
,			{return COMMA;}
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
\]			{return CLOSE_SQR_BRACKET;;}
[ \t\n]           ;
[0-9]+\.[0-9]+ { yylval.fval = atof(yytext); return FLOAT; }
[0-9]+            { yylval.ival = atoi(yytext); return INT; }
\/\/.*$      {
	// we have to copy because we can't rely on yytext not changing underneath us:
	yylval.sval = strdup(yytext);
	return COMMENT;
}
\/\*([^*]|[\r\n]|(\*+([^*\/]|[\r\n])))*\*+\/      {
	// we have to copy because we can't rely on yytext not changing underneath us:
	yylval.sval = strdup(yytext);
	return COMMENT;
}
[a-zA-Z0-9]+      {
	// we have to copy because we can't rely on yytext not changing underneath us:
	yylval.sval = strdup(yytext);
	return ID;
}
.	{cout<<"TEXT : "<<yytext<<endl;yylval.errval = strdup(yytext); return SYN_ERR;}
%%
