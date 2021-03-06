%{
#include <cstdio>
#include <iostream>
using namespace std;

// stuff from flex that bison needs to know about:
extern "C" int yylex();
extern "C" int yyparse();
extern "C" FILE *yyin;
 
void yyerror(const char *s);
%}

// Bison fundamentally works by asking flex to get the next token, which it
// returns as an object of type "yystype".  But tokens could be of any
// arbitrary data type!  So we deal with that in Bison by defining a C union
// holding each of the types of tokens that Flex could return, and have Bison
// use that union instead of "int" for the definition of "yystype":
%union {
	int ival;
	float fval;
	char *sval;
	char *cmtval;
	char *errval;
	char *class_name;
}

// define the "terminal symbol" token types I'm going to use (in CAPS
// by convention), and associate each with a field of the union:
%token <ival> INT
%token <fval> FLOAT
%token <sval> ID
%token <cmtval> COMMENT
%token <errval> SYN_ERR
%token CLASS
%token EXTEND
%token OPEN_BRACE
%token CLOSE_BRACE
%token SEMI_COLON
%token STATIC
%token PUBLIC
%token PRIVATE
%token BOOLEAN
%token COMMA
%token OPEN_PARANTHESIS
%token CLOSE_PARANTHESIS
%token OPEN_SQR_BRACKET
%token CLOSE_SQR_BRACKET
%token VOID


%%
// this is the actual grammar that bison will parse, but for right now it's just
// something silly to echo to the screen what bison gets from flex.  We'll
// make a real one shortly:

start 				: program	{cout<<"YES\n";}

program				: 
				| class_decl 
				| program class_decl


class_decl 			: CLASS ID OPEN_BRACE class_body_decl CLOSE_BRACE
				| CLASS ID EXTEND ID OPEN_BRACE class_body_decl CLOSE_BRACE

class_body_decl			: field_decl
				| method_decl
				| constructor_decl


field_decl 			: modifier var_decl

modifier 			: 
				| PUBLIC 
				| PUBLIC STATIC
				| PRIVATE 
				| PRIVATE STATIC
				| STATIC

var_decl 			: type variables SEMI_COLON

type 				: INT
				| FLOAT
				| BOOLEAN
				|
			

variables 			: variable  
				| variable COMMA variables

variable 			: ID	
				| variable OPEN_SQR_BRACKET CLOSE_SQR_BRACKET				/* take care of array stuff later []*/


method_decl 			: modifier type method_name OPEN_PARANTHESIS CLOSE_PARANTHESIS block
				| modifier type method_name OPEN_PARANTHESIS formals CLOSE_PARANTHESIS block
				| modifier VOID method_name OPEN_PARANTHESIS CLOSE_PARANTHESIS block
				| modifier VOID method_name OPEN_PARANTHESIS formals CLOSE_PARANTHESIS block

constructor_decl		: modifier ID OPEN_PARANTHESIS CLOSE_PARANTHESIS block
				| modifier ID OPEN_PARANTHESIS formals CLOSE_PARANTHESIS block


method_name 			: ID

formals				: formal_param 
				| formal_param COMMA formals

formal_param 			: type variable

block				: ID
	
%%

int main(int argc, char *argv[]) {
	// open a file handle to a particular file:

	if(argc<2)
	{
		cout<<"Usage : decafch <input-file-name>\n";
		return -1;
	}

		

	FILE *myfile = fopen(argv[1], "r");
	// make sure it is valid:
	if (!myfile) {
		cout << "I can't open a.snazzle.file!" << endl;
		return -1;
	}
	// set flex to read from it instead of defaulting to STDIN:
	yyin = myfile;
	
	// parse through the input until there is no more:
	do {
		yyparse();
	} while (!feof(yyin));
	
}

void yyerror(const char *s) {
	cout << "EEK, parse error!  Message: " << s << endl;
	// might as well halt now:
	exit(-1);
}
