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
%token THIS
%token SUPER
%token NEW

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
%token DOT
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
				| COMMENT

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

variable 			: ID sqr_brkt_mult	
 
sqr_brkt_mult			: 
				| sqr_brkt_mult OPEN_SQR_BRACKET CLOSE_SQR_BRACKET

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
				| block
				| var_decl
				| COMMENT
				| if_stmt
				| if_else_stmt

if_stmt 			: IF OPEN_PARANTHESIS expr CLOSE_PARANTHESIS stmt

if_else_stmt	 		: ELSE stmt

expr 				: primary

primary                         : literal
                                | THIS
                                | SUPER
                                | OPEN_PARANTHESIS expr CLOSE_PARANTHESIS
                                | NEW ID OPEN_PARANTHESIS CLOSE_PARANTHESIS
                                | NEW ID OPEN_PARANTHESIS arguments CLOSE_PARANTHESIS
                                | lhs

literal                         : int_const
                                | float_const
                                | string_const
                                | NULL_TOKEN
                                | TRUE
                                | FALSE

int_const                       : INT_CONST

float_const                     : FLOAT_CONST
                                | FLOAT_CONST_MANTISSA

string_const                    : STRING_CONST


arguments                       : expr
                                | arguments COMMA expr

lhs                             : array_access
				| field_access
				| method_invocation

array_access                    : primary OPEN_SQR_BRACKET expr CLOSE_SQR_BRACKET

field_access			: primary DOT ID
				| ID

method_invocation		: field_access OPEN_PARANTHESIS CLOSE_PARANTHESIS
				| field_access OPEN_PARANTHESIS arguments CLOSE_PARANTHESIS




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
