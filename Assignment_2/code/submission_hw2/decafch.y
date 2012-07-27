%{
#include <cstdio>
#include <iostream>
#include <stdarg.h>
using namespace std;

// stuff from flex that bison needs to know about:
extern "C" int yylex();
extern "C" int yyparse();
extern "C" FILE *yyin;
 
void yyerror(const char *s);
int line_num = 1;
int err_count = 0;
extern const char *yytext;
char *filename;
%}

%locations
%error-verbose

%union {
	int ival;
	float fval;
	char *sval;
	char *cmtval;
	char *errval;
	char *strval;
}

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

%token PLUS
%token PLUS_PLUS
%token MINUS
%token MINUS_MINUS
%token MULTIPLY
%token DIVIDE
%token NOT_EQUAL
%token NOT
%token OR
%token AND
%token EQUAL_EQUAL
%token EQUAL
%token LESS_EQUAL
%token LESS
%token GREATER_EQUAL
%token GREATER
%token EOF_TOKEN

%right EQUAL
%left OR
%left AND
%left EQUAL_EQUAL NOT_EQUAL
%nonassoc LESS GREATER LESS_EQUAL GREATER_EQUAL
%left PLUS MINUS
%left MULTIPLY DIVIDE
%right NOT UMINUS UPLUS

%left PREC_LOW
%left PREC_HIGH

%%
// grammar bison will parse

program				: 			
				| class_decl_multi                 

class_decl_multi 		: class_decl
				| class_decl_multi class_decl

class_decl 			: CLASS ID class_body                
        			| CLASS ID EXTEND ID class_body       

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

formals				: formal_param 
				| formals COMMA formal_param

formal_param 			: type variable

block				: OPEN_BRACE stmt_mult CLOSE_BRACE
				| OPEN_BRACE CLOSE_BRACE

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
				| IF OPEN_PARANTHESIS expr CLOSE_PARANTHESIS stmt else_part

else_part			:
				| ELSE stmt


for_init			:
				| stmt_expr

for_condition			:
				| expr

for_var_update			:
				| stmt_expr

literal				: int_const
				| float_const
				| string_const
				| NULL_TOKEN
				| TRUE
				| FALSE

int_const			: INT_CONST

float_const			: FLOAT_CONST
				| FLOAT_CONST_MANTISSA

string_const			: STRING_CONST

primary				: literal
				| THIS
				| SUPER
				| OPEN_PARANTHESIS expr CLOSE_PARANTHESIS
				| NEW ID OPEN_PARANTHESIS arguments_mult CLOSE_PARANTHESIS
				| lhs	
				| method_invocation	
	
arguments			: expr
				| arguments COMMA expr

arguments_mult			:
				| arguments

lhs				: array_access
				| field_access

field_access			: primary DOT ID
				| ID


array_access			: primary OPEN_SQR_BRACKET expr CLOSE_SQR_BRACKET

method_invocation		: field_access OPEN_PARANTHESIS arguments_mult CLOSE_PARANTHESIS


expr				: primary
				| assign
				| new_array   
				| expr PLUS expr		/* arith_op */
				| expr MINUS expr		/* arith_op */
				| expr MULTIPLY expr		/* arith_op */
				| expr DIVIDE expr		/* arith_op */
				| expr AND expr				/* bool_op */
				| expr OR expr				/* bool_op */
				| expr EQUAL_EQUAL expr			/* bool_op */
				| expr NOT_EQUAL expr			/* bool_op */
				| expr LESS expr			/* bool_op */
				| expr GREATER expr			/* bool_op */
				| expr LESS_EQUAL expr			/* bool_op */
				| expr GREATER_EQUAL expr		/* bool_op */
				| NOT expr			/* unary_op */
				| PLUS expr		%prec UPLUS			/* unary_op */
				| MINUS expr		%prec UMINUS			/* unary_op */


assign				: lhs EQUAL expr
				| lhs PLUS_PLUS
				| PLUS_PLUS lhs
				| lhs MINUS_MINUS
				| MINUS_MINUS lhs


new_array			: NEW type new_array_expr
				| NEW type new_array_expr sqr_brkt_1


new_array_expr			: OPEN_SQR_BRACKET expr CLOSE_SQR_BRACKET 
				| new_array_expr OPEN_SQR_BRACKET expr CLOSE_SQR_BRACKET

sqr_brkt_1			: OPEN_SQR_BRACKET CLOSE_SQR_BRACKET
				| sqr_brkt_1 OPEN_SQR_BRACKET CLOSE_SQR_BRACKET

stmt_expr			: assign
				| method_invocation

	
%%

int line_no = 0;

int main(int argc, char *argv[]) {
	// open a file handle to a particular file:

	if(argc<2)
	{
		cout<<"Correct usage : ./decafch <input-file-name>\n";
		return -1;
	}

		

	FILE *myfile = fopen(argv[1], "r");
	filename = argv[1];
	// make sure it is valid:
	if (!myfile) {
		cout << "Could not open .decaf file!" << endl;
		return -1;
	}
	// set flex to read from it instead of defaulting to STDIN:
	yyin = myfile;
	
	// parse through the input until there is no more:
	do {
		yyparse();
	} while (!feof(yyin));

	if(err_count>0)
		cout<<"decaf : Error ["<<err_count<<"]"<<endl;
	else
		cout<<"decaf : "<<filename<<" successfully parsed"<<endl;

	
}
void
yyerror(const char *s)
{
	
	
	if(yylloc.first_line)
	{
		if(yylloc.first_column == yylloc.last_column)
			cout<<filename<<":"<<yylloc.first_line<<": "<<s<<endl;
		else
			cout<<filename<<":"<<yylloc.first_line<<"."<<yylloc.first_column<<"-"<<yylloc.last_line<<"."<<yylloc.last_column<<": "<<s<<endl;
		err_count++;
	}

  /*cout<<s<<" at line no. "<<line_num<<endl;
  cout<<yytext<<endl;
  if(yylloc.first_line)
    fprintf(stderr, "%d.%d-%d.%d: error: ", yylloc.first_line, yylloc.first_column,
	    yylloc.last_line, yylloc.last_column);
cout<<endl;*/

}

/*
void yyerror(const char *s) {
	//cout << "Parse error!  Message: " << s << endl;
	cout<<s<<" at line no. "<<line_num<<endl;
	cout<<"yylval.sval = "<<yylval.sval<<endl;
	//fprintf(stderr, "%s at line no %d\n", s, line_num);


	//cout << "Line_no = "<<yylineno<<endl;
	// might as well halt now:
	exit(-1);
}
*/
