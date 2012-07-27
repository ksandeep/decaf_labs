%{
#include <stdio.h>
#include <iostream>

#include "Ast.hh"

using namespace std;

// Prototypes to lexer functions
extern void yyerror (const char *error);
extern int  yylex ();

int type;
Type *t;
int dim;
ClassEntity *c;
bool is_formal_param = false;
bool is_func_enter = false;
char errmsg[2056];
MethodEntity *method;

// interface to the outside world
extern list<Entity *> *toplevel;  // list of top-level classes
extern EntityTable *global_symtab; // global symbol table


%}

%token TOK_BOOLEAN TOK_BREAK TOK_CLASS TOK_CONTINUE TOK_ELSE 
        TOK_EXTENDS TOK_FALSE TOK_FLOAT TOK_FOR TOK_IF TOK_INT TOK_NEW 
        TOK_NULL TOK_PRIVATE TOK_PUBLIC TOK_RETURN TOK_STATIC TOK_SUPER
        TOK_THIS TOK_TRUE TOK_VOID TOK_WHILE TOK_DO
        TOK_INT_CONST TOK_FLOAT_CONST TOK_STRING_CONST 
        TOK_ID 
        TOK_COMMA TOK_DOT TOK_SEMICOLON
	TOK_OPEN_SQ_BRACKET TOK_CLOSE_SQ_BRACKET
        TOK_OPEN_PAREN TOK_CLOSE_PAREN TOK_OPEN_BRACE TOK_CLOSE_BRACE 
        TOK_PLUS TOK_MINUS TOK_MULTIPLY TOK_DIVIDE 
        TOK_PLUS_PLUS TOK_MINUS_MINUS TOK_EQUAL TOK_AND TOK_OR TOK_NOT 
        TOK_GREATER TOK_LESSER TOK_EQUAL_EQUAL TOK_NOT_EQUAL
        TOK_GREATER_OR_EQUAL TOK_LESSER_OR_EQUAL
        TOK_SYNTAX_ERROR TOK_RUNAWAY_STRING

%union
{
        char* string_val;
        int   int_val;
        float float_val;
        char char_val;
	bool bool_val;
	bool bool_arr_2[2];
	Type * type;
	Entity* entity;	
	list<Entity*>* entity_list;	
	Expression *expr;
	list<Expression*> *expr_list;
	Statement *stmt;
	list<Statement*> *stmt_list;
	VariableEntity* var_entity;	
	struct mh 
	{
		bool bool_arr_2[2];
		char *name;
		Type *type;
	} mhead;
	struct vinfo
	{
		char *name;
		int dim;
	}varinfo;
}

%right TOK_EQUAL
%left TOK_OR
%left TOK_AND
%left TOK_EQUAL_EQUAL TOK_NOT_EQUAL 
%nonassoc TOK_LESSER TOK_GREATER TOK_LESSER_OR_EQUAL TOK_GREATER_OR_EQUAL
%left TOK_PLUS TOK_MINUS 
%left TOK_MULTIPLY TOK_DIVIDE
%left TOK_NOT 



%type <int_val> TOK_INT_CONST
%type <float_val> TOK_FLOAT_CONST
%type <string_val> TOK_STRING_CONST
%type <bool_val> TOK_TRUE
%type <bool_val> TOK_FALSE
%type <string_val> TOK_ID
%type <var_entity> Variable
%type <entity_list> Variables
%type <entity_list> VariablesCommaList
%type <type> Type
%type <int_val> DimStar
%type <entity_list>VarDecl
%type <entity>FieldDecl
%type <bool_val> StaticOpt
%type <bool_val> VisibilityOpt
%type <bool_arr_2> Modifier
%type <entity>ClassBodyDecl
%type <entity>ExtendsOpt
%type <entity_list>ClassBodyDecls
%type <entity>ClassDeclaration
%type <entity_list>ClassDeclarations
%type <entity>FormalParam 
%type <entity_list>FormalParamCommaList
%type <entity_list>FormalsOpt
%type <mhead>MethodHead
%type <entity>MethodDecl
%type <entity>ConstructorDecl




%type <expr>Expr
%type <expr>ExprOpt
%type <expr>DimExpr
%type <expr_list>DimExprPlus

%type <expr>Literal
%type <expr>Assignment
%type <expr>LeftHandSide 
%type <expr>ArrayAccess
%type <expr>FieldAccess
%type <expr>MethodInvocation
%type <expr> Primary
%type <expr_list>ArgumentListOpt
%type <expr_list>CommaExprStar

%type <stmt>Block
%type <stmt>Stmt
%type <stmt>StmtExpr
%type <stmt>StmtExprOpt
%type <stmt>OptElsePart
%type <stmt_list>StmtStar





/*****
Define the type of attribute values for grammar symbols here.

Examples:
%type <int_val> TOK_INT_CONST
%type <bool_val> VisibilityOpt
%type <entity_list> ClassDeclarations
The above declarations say that TOK_INT_CONST's attribute value is in the 
int_val field of YYSTYPE (defined by the "union" earlier); 
VisibilityOpt's attribute value is in bool_val field of YYSTYPE; 
and the attribute value of ClassDeclarations is in the entity_list field 
of YYSTYPE

*****/

%%

/**/
/***************************** DECLARATIONS  ********************************/
/**/

Program :  ClassDeclarations {
	/* In the action for this production, set :0

	the global variable "toplevel" to the list of entities representing 
	the classes (i.e. the attribute of ClassDeclarations).
	*/
	//toplevel = NULL;  // This is a placeholder. Change this!!
		toplevel = $1;
	}
	;

ClassDeclarations:
	  ClassDeclarations ClassDeclaration { $$ = $1; $$->push_back($2); }
        | { $$ = new list<Entity*>();}
	;

ClassDeclaration:
	TOK_CLASS TOK_ID ExtendsOpt	
		TOK_OPEN_BRACE 
		{
			bool b;
			Entity *e = global_symtab->find_entity($2,CLASS_ENTITY, &b);
			if (e)
			{
				memset(errmsg,0,2056);
				sprintf(errmsg,"Duplicate class definition '%s' ",$2);
				yyerror(errmsg);
				c = NULL;
			}
			else
			{
				c = new ClassEntity($2,$3,NULL);
			}
			global_symtab->enter_block();
		}
		ClassBodyDecls 
		TOK_CLOSE_BRACE 	
		{
			if (c)
			{
				c->set_class_members($6);
				$$ = c;
			}
			else
				$$ = NULL;
			
			global_symtab->leave_block();	
		}
		
;

ExtendsOpt:
	  TOK_EXTENDS TOK_ID 
		{ 
			bool b;
			$$ = global_symtab->find_entity($2,CLASS_ENTITY,&b); 
			if(!$$)
			{
				memset(errmsg,0,2056);
				sprintf(errmsg,"Class '%s' undefined ",$2);
				yyerror(errmsg);
				
			}
		}
        | {$$ = NULL;}
	;

ClassBodyDecls:
	  ClassBodyDecls ClassBodyDecl
		{
			$$ = $1;
			$$->push_back($2);
		}
	| ClassBodyDecl
		{
			$$ = new list<Entity*>();
			$$->push_back($1);
		}
			
	;

ClassBodyDecl:	
	    FieldDecl		{$$ = $1;}
	  | MethodDecl		{$$ = $1;}
          | ConstructorDecl	{$$ = $1;}
	  ;

FieldDecl: Modifier Type TOK_ID DimStar TOK_SEMICOLON
		{
			bool b;
			Entity *e = global_symtab->find_entity($3,FIELD_ENTITY, &b);
			if (e)
			{
				memset(errmsg,0,2056);
				sprintf(errmsg,"Duplicate field entity '%s' ",$3);
				yyerror(errmsg);
				$$ = NULL;
			}
			else
			{
				$$ = new FieldEntity($3,$1[0],$1[1],$2,$4);
			}
		}
	 ;
Modifier: VisibilityOpt StaticOpt	{$$[0] = $1; $$[1] = $2;};
	 ;


VisibilityOpt : 
          TOK_PUBLIC	{$$ = true;}
        | TOK_PRIVATE 	{$$ = false;}
        | 		{$$ = true;}
	;

StaticOpt:
          TOK_STATIC	{$$ = true;}
        |		{$$ = false;}
	;

VarDecl: Type { t = $1; } Variables TOK_SEMICOLON { $$ = $3; }
	 ;

Type:	  TOK_INT	{$$ = new IntType(); t=$$;}
	| TOK_FLOAT	{$$ = new FloatType(); t=$$;}
	| TOK_BOOLEAN	{$$ = new BooleanType(); }
	| TOK_ID	
			{
				bool b;
				Entity * class_entity;
				class_entity = global_symtab->find_entity($1,CLASS_ENTITY,&b); 
				if(!class_entity)
				{
					memset(errmsg,0,2056);
					sprintf(errmsg,"Undefined Class '%s' ",$1);
					yyerror(errmsg);
					$$ = new ErrorType();
				}
				else
					$$ = new ClassType(class_entity);
			} 
	;

Variables: Variable VariablesCommaList 	
		{ 
			$$ = $2;
			$$->push_front($1);
		}
	  ;

Variable: TOK_ID DimStar 
		{
			bool b;
			Entity *e = global_symtab->find_entity($1,VARIABLE_ENTITY, &b);
			if (e && b)
			{
				memset(errmsg,0,2056);
				sprintf(errmsg, "Duplicate variable entity '%s' ",$1);
				yyerror(errmsg);
				$$ = NULL;
			}
			else
			{
				$$ = new VariableEntity($1,t,$2);
			} 
		}
	  ;

VariablesCommaList:
	  TOK_COMMA Variable VariablesCommaList 
		{ 
			$$ = $3; 
			$$->push_front($2); 
		}
		

        | 	
		{
			$$  = new list<Entity*>();
		}
	;

MethodDecl: 
	MethodHead 
		{	
			method = new MethodEntity($1.name,$1.bool_arr_2[0],$1.bool_arr_2[1],$1.type,NULL,NULL);
		}
	TOK_OPEN_PAREN 
		{ 	
			global_symtab->enter_block(); 
			is_func_enter = true;
		}
	FormalsOpt TOK_CLOSE_PAREN 
		{
			method->set_formal_params($5);
		}
		Block 
		{
			method->set_method_body($8);
			$$ = method;
		}

	  ;

MethodHead: Modifier Type TOK_ID 	
		{
			$$.bool_arr_2[0] = $1[0]; 
			$$.bool_arr_2[1] = $1[1]; 
			$$.name = $3;
			$$.type = $2;
			
		}
         | Modifier TOK_VOID TOK_ID 
		{
			$$.bool_arr_2[0] = $1[0]; 
			$$.bool_arr_2[1] = $1[1]; 
			$$.name = $3;
			$$.type = new VoidType();
		}

	 ;

FormalsOpt:
	  FormalParam FormalParamCommaList { $$ = $2; $$->push_front($1);}
        | 	
		{
			$$ = new list<Entity*>();
			//$$ = NULL;
		}
	;

FormalParam: {is_formal_param = true; } Type { t = $2; } Variable {is_formal_param = false; }	
		{
			$$ = $4;
		}
	;

FormalParamCommaList: 
	  TOK_COMMA FormalParam FormalParamCommaList	{$$ = $3; $$->push_back($2);}
        | 	{ $$ = new list<Entity*>();}
	
	;

ConstructorDecl:
	 Modifier TOK_ID TOK_OPEN_PAREN FormalsOpt TOK_CLOSE_PAREN Block
		{
			$$ = new ConstructorEntity($2,$1[0],$4,$6);
		}
	 ;

/**/
/*****************************   STATEMENTS ********************************/
/**/


Block:	  TOK_OPEN_BRACE 
			{
				if(!is_func_enter)
				{
					global_symtab->enter_block();
				}
				else
					is_func_enter = false;
			}  
	  StmtStar TOK_CLOSE_BRACE 	{ $$ = new BlockStatement($3); global_symtab->leave_block();}

	  ;

StmtStar:
	  Stmt StmtStar 		{ $$ = $2; $$->push_front($1); }
	| 				{ $$ = new list<Statement *>(); }
	;


Stmt:	  TOK_IF TOK_OPEN_PAREN Expr TOK_CLOSE_PAREN Stmt OptElsePart
					{
						$$ = new IfStatement($3,$5,$6);
					}
	| TOK_WHILE TOK_OPEN_PAREN Expr TOK_CLOSE_PAREN Stmt
					{
						$$ = new WhileStatement($3,$5);
					}
	| TOK_FOR TOK_OPEN_PAREN StmtExprOpt
	                    TOK_SEMICOLON ExprOpt
			    TOK_SEMICOLON StmtExprOpt
		TOK_CLOSE_PAREN Stmt
					{
						$$ = new ForStatement($3,$5,$7,$9);
					}

	| TOK_RETURN Expr TOK_SEMICOLON { $$ = new ReturnStatement($2); }
	| Block				{ $$ = $1; }
	| StmtExpr TOK_SEMICOLON	{ $$ = $1; } 
	| VarDecl			{ $$ = new DeclStatement($1); }	
	| TOK_BREAK TOK_SEMICOLON	{ $$ = new BreakStatement(); }
	| TOK_CONTINUE TOK_SEMICOLON	{ $$ = new ContinueStatement(); }
	| TOK_SEMICOLON			{ $$ = new SkipStatement(); }
	| error TOK_SEMICOLON 		
					{ 
						//printf("Error in statement : %s \n",$1);
						$$ = new SkipStatement();
					}
	  /* Error production to synchronize at SEMICOLON on any parse error */
	;

OptElsePart:
	  TOK_ELSE Stmt 		{ $$ = $2; }
	|				{ $$ = new SkipStatement();}
	;

StmtExprOpt:
	  StmtExpr			{ $$ = $1; }
	|				{ $$ = new SkipStatement();; }
	;

ExprOpt:
	  Expr				{$$ = $1; }
	|				{$$ = new NullExpression();}
	;

StmtExpr:  Assignment			{ $$ = new ExprStatement($1); }
	| MethodInvocation		{ $$ = new ExprStatement($1); }
	;

/**/
/*****************************   EXPRESSIONS ********************************/
/**/


Primary:  Literal			{$$ = $1;}
	| TOK_THIS			{$$ = new ThisExpression();}
	| TOK_SUPER			{$$ = new SuperExpression();}
	| TOK_OPEN_PAREN Expr TOK_CLOSE_PAREN	
					{$$ = $2;}
	| TOK_NEW TOK_ID TOK_OPEN_PAREN ArgumentListOpt TOK_CLOSE_PAREN 
					{ 
						//validation needed.
						Entity *cls;
						bool b;
						cls = global_symtab->find_entity($2,CLASS_ENTITY,&b);

						if(cls)
							$$ = new NewInstance(cls,$4);
						else
						{
							memset(errmsg,0,2056);
							sprintf(errmsg, "Undefined class  '%s' ",$2);
							$$ = new NullExpression();
						}
					}
	| LeftHandSide			
					{
						$$ = $1;
					}
	| MethodInvocation
					{
						$$ = $1;
					}

ArgumentListOpt: 	
	  Expr CommaExprStar		{ $$ = $2; $$->push_front($1); }
	|				{ $$ = new list<Expression*>();}
	;

CommaExprStar: TOK_COMMA Expr CommaExprStar	
					{
						$$ = $3;
						$$->push_back($2);
					}
					
	|				{	
						$$ = new list<Expression*>();
					}
	;

FieldAccess:
	  Primary TOK_DOT TOK_ID	{
						$$ = new FieldAccess($1,$3);
					}
	| TOK_ID 			{
						bool b;
						Entity *e = global_symtab->find_entity($1,VARIABLE_ENTITY,&b);	
						if(!e)
						{
							Entity *f = global_symtab->find_entity($1,FIELD_ENTITY,&b);	
							if(f)
							{
								$$ = new IdExpression(f);
							}
							else
							{
								Entity *f = global_symtab->find_entity($1,CLASS_ENTITY,&b);	
								if(f)
									$$ = new IdExpression(f);
								else
								{
									Expression *t = new ThisExpression();
									$$ = new FieldAccess(t,$1);
									//yyerror("Undefined Variable ");
								}
							}

						}
						else
						{

							if(b)
							{
								$$ = new IdExpression(e);
								/*Expression *t = new IdExpression();
								$$ = new FieldAccess(t,$1);
								*/
							}
							else
							{
								Expression *t = new ThisExpression();
								$$ = new FieldAccess(t,$1);
							}
						}

	}
;
ArrayAccess: Primary TOK_OPEN_SQ_BRACKET Expr TOK_CLOSE_SQ_BRACKET 
{ 
	$$ =  new ArrayAccess($1,$3);
}
;

MethodInvocation:
	  Primary TOK_DOT TOK_ID TOK_OPEN_PAREN ArgumentListOpt TOK_CLOSE_PAREN
	  				{
						$$ = new MethodInvocation($1,$3,$5); 
					}
	| TOK_ID TOK_OPEN_PAREN ArgumentListOpt TOK_CLOSE_PAREN
	  				{
						Expression *t = new ThisExpression();
						$$ = new MethodInvocation(t,$1,$3);
					}
	;

Expr:	  Expr TOK_MULTIPLY Expr	{ $$ = new BinaryExpression(MUL,$1,$3); }
	| Expr TOK_DIVIDE Expr		{ $$ = new BinaryExpression(DIV,$1,$3); 	}
	| Expr TOK_PLUS Expr		{ $$ = new BinaryExpression(ADD,$1,$3); }
	| Expr TOK_MINUS Expr		{ $$ = new BinaryExpression(SUB,$1,$3); }
	| Expr TOK_AND Expr		{ $$ = new BinaryExpression(AND,$1,$3); }
	| Expr TOK_OR Expr		{ $$ = new BinaryExpression(OR,$1,$3); }
	| Expr TOK_EQUAL_EQUAL Expr	{ $$ = new BinaryExpression(EQ,$1,$3); }
	| Expr TOK_NOT_EQUAL Expr	{ $$ = new BinaryExpression(NEQ,$1,$3); }
	| Expr TOK_LESSER Expr		{ $$ = new BinaryExpression(LT,$1,$3); }
	| Expr TOK_GREATER Expr		{ $$ = new BinaryExpression(GT,$1,$3); }
	| Expr TOK_LESSER_OR_EQUAL Expr	{ $$ = new BinaryExpression(LEQ,$1,$3); }
	| Expr TOK_GREATER_OR_EQUAL Expr{ $$ = new BinaryExpression(GEQ,$1,$3); }
	| TOK_MINUS Expr	%prec TOK_NOT
					{ $$ = new UnaryExpression(UMINUS,$2);}
	| TOK_PLUS Expr		%prec TOK_NOT	 
					{ $$ = $2;}
	| TOK_NOT Expr
					{ $$ = new UnaryExpression(NEG,$2);}
	| Primary			{$$=$1;}
	| Assignment			{$$=$1;}
	| TOK_NEW Type DimExprPlus DimStar 	
			{
				int dim = $4+$3->size(); 
				$$ = new NewArrayInstance($2,dim,$3);
			}
	;	

DimExprPlus:
	  DimExprPlus DimExpr	{$$ = $1; $$->push_back($2); }
	| DimExpr		{	
					$$ = new list<Expression*>(); 
					$$->push_back($1); 
				}
	;

DimExpr:  TOK_OPEN_SQ_BRACKET Expr TOK_CLOSE_SQ_BRACKET	{ $$ = $2; }
	  ;

DimStar:  Dim DimStar	{$$ = $2 + 1;}
        | {$$ = 0;}	 

	;

Dim:	  TOK_OPEN_SQ_BRACKET  TOK_CLOSE_SQ_BRACKET ;


Assignment:
	  LeftHandSide TOK_EQUAL Expr	{$$ = new AssignExpression($1,$3);}
	| LeftHandSide TOK_PLUS_PLUS	{$$ = new AutoExpression(POST_INCR,$1);}
	| LeftHandSide TOK_MINUS_MINUS	{$$ = new AutoExpression(POST_DECR,$1);}
	| TOK_PLUS_PLUS LeftHandSide	{$$ = new AutoExpression(PRE_INCR,$2);}
	| TOK_MINUS_MINUS LeftHandSide	{$$ = new AutoExpression(PRE_DECR,$2);}
	;

LeftHandSide:
	  FieldAccess	{$$ = $1;}
	| ArrayAccess	{$$ = $1;}
	;

Literal:  TOK_INT_CONST		{$$ = new IntegerConstant($1);}
	| TOK_FLOAT_CONST	{$$ = new FloatConstant($1);}
	| TOK_STRING_CONST	{$$ = new StringConstant($1);}
	| TOK_NULL		{$$ = new NullExpression();}
	| TOK_TRUE		{$$ = new BooleanConstant($1);}
	| TOK_FALSE		{$$ = new BooleanConstant($1);}
	;

%%


