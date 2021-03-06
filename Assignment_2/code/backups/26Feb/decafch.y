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
	char *strval;
}

// define the "terminal symbol" token types. We're going to use (in CAPS
// by convention), and associate each with a field of the union:
%token <ival> INT_CONST
%token <fval> FLOAT_CONST
%token <strval> STRING_CONST
%token FLOAT_CONST_MANTISSA
%token <sval> ID
%token <cmtval> COMMENT
%token <errval> SYN_ERR
%token INT
%token FLOAT
%token IF
%token ELSE
%token WHILE
%token FOR
%token RETURN
%token BREAK
%token CONTINUE
%token NULL_TOKEN
%token TRUE
%token FALSE

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
// grammar bison will parse

program				: 
				|class_decl_multi                { cout<<"FINISHED READING DECAF PROGRAM\n"<<endl;}

class_decl_multi 		: class_decl
				| class_decl_multi class_decl        

class_decl 			: CLASS ID class_body                {cout<<"Bison found CLASS of name : "<<$2<<endl;}
        			| CLASS ID EXTEND ID class_body        {cout<<$2<<" EXTENDS "<<$4<<endl;}

class_body 			: OPEN_BRACE class_body_elems CLOSE_BRACE

class_body_elems 		: class_body_decl
    				| class_body_elems class_body_decl

class_body_decl 		: field_decl 
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
				| ID
			

variables 			: variable  
				| variables COMMA variable

variable 			: ID	
				| variable OPEN_SQR_BRACKET CLOSE_SQR_BRACKET				/* take care of array stuff later []*/


method_decl 			: modifier type ID OPEN_PARANTHESIS CLOSE_PARANTHESIS block
				| modifier type ID OPEN_PARANTHESIS formals CLOSE_PARANTHESIS block
				| modifier VOID ID OPEN_PARANTHESIS CLOSE_PARANTHESIS block
				| modifier VOID ID OPEN_PARANTHESIS formals CLOSE_PARANTHESIS block

constructor_decl		: modifier ID OPEN_PARANTHESIS CLOSE_PARANTHESIS block
				| modifier ID OPEN_PARANTHESIS formals CLOSE_PARANTHESIS block

/*
constructor_decl		: constructor_prefix CLOSE_PARANTHESIS block
				| constructor_prefix formals CLOSE_PARANTHESIS block 

constructor_prefix		: modifier ID OPEN_PARANTHESIS

method_name 			: ID
*/


formals				: formal_param 
				| formals COMMA formal_param

formal_param 			: type variable

block				: OPEN_BRACE stmt_mult CLOSE_BRACE

stmt_mult			: stmt
				| stmt_mult stmt

stmt				: SEMI_COLON
				| BREAK SEMI_COLON
				| CONTINUE SEMI_COLON
				| RETURN SEMI_COLON
				| RETURN expr SEMI_COLON
				| WHILE OPEN_PARANTHESIS expr CLOSE_PARANTHESIS stmt
				| FOR OPEN_PARANTHESIS for_init SEMI_COLON for_condition SEMI_COLON for_var_update CLOSE_PARANTHESIS stmt
				| stmt_expr SEMI_COLON
				| block
				| var_decl
				| IF OPEN_PARANTHESIS expr CLOSE_PARANTHESIS stmt /**else part**/

for_init			:
				| stmt_expr

for_condition			:
				| expr

for_var_update			:
				| stmt_expr

expr				: ID /*** to be updated ***/
stmt_expr			: ID
				
	
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
