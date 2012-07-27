#include<iostream>
#include "Ast.hh"
#include "Error.hh"

extern Error *error;
extern ClassEntity *objectclass;

void initialize_typechecker() {
  // initialize any needed variables here...
}


void ClassEntity::typecheck() {
   	//error->implementation_error("Type checking/inference not implemented (yet)\n");
	list<Entity*> *m;
	list<Entity*>::iterator i;
	m = this->class_members();
	for(i=m->begin(); i != m->end(); i++) 
	{
		switch((*i)->kind())
		{
			case METHOD_ENTITY:
				((MethodEntity*)(*i))->typecheck();
				break;
			default:
				cout<<"ClassEntity Typecheck pending!!"<<endl;
		}
	}
	
}

void MethodEntity::typecheck() {
	//error->implementation_error("Type checking/inference not implemented (yet)\n");
	Statement *s;
	s = this->method_body();
	((BlockStatement*)(s))->typecheck();
}

void ConstructorEntity::typecheck() {
   error->implementation_error("Type checking/inference not implemented (yet)\n");
}

// Typecheck method for IfStatement
void IfStatement::typecheck() {
   error->implementation_error("IfStatement:Type checking/inference not implemented (yet)\n");
}

// Typecheck method for WhileStatement
void WhileStatement::typecheck() {
   error->implementation_error("WhileStatement:Type checking/inference not implemented (yet)\n");
}



// Typecheck method for ForStatement
void ForStatement::typecheck() {
   error->implementation_error("ForStatement:Type checking/inference not implemented (yet)\n");
}

// Typecheck method for ReturnStatement
void ReturnStatement::typecheck() {
   error->implementation_error("ReturnStatement:Type checking/inference not implemented (yet)\n");
}


// Typecheck method for BlockStatement
void BlockStatement::typecheck() {
	//error->implementation_error("BlockStatement:Type checking/inference not implemented (yet)\n");
	list<Statement*> *s;
	list<Statement*>::iterator i;
	s = this->stmt_list();
	for(i=s->begin(); i != s->end(); i++)
	{
		(*i)->typecheck();
	} 
}

// Typecheck method for ExprStatement
void ExprStatement::typecheck() {
   	//error->implementation_error("ExprStatement:Type checking/inference not implemented (yet)\n");
	Expression *e;
	e = this->expr();
	e->typeinfer();
}



// Typecheck method for DeclStatement
void DeclStatement::typecheck() {
   //error->implementation_error("DeclStatement:Type checking/inference not implemented (yet)\n");
   return;	// No type checking
}



// Typecheck method for BreakStatement
void BreakStatement::typecheck() {
   //error->implementation_error("BreakStatement:Type checking/inference not implemented (yet)\n");
   return;	// No type checking
}



// Typecheck method for ContinueStatement
void ContinueStatement::typecheck() {
   //error->implementation_error("ContinueStatement:Type checking/inference not implemented (yet)\n");
   return;	// No type checking
}



// Typecheck method for SkipStatement
void SkipStatement::typecheck() {
   //error->implementation_error("SkipStatement:Type checking/inference not implemented (yet)\n");
   return;	// No type checking
}



// Typeinfer method for BinaryExpression
Type* BinaryExpression::typeinfer() {
   error->implementation_error("BinaryExpression:Type checking/inference not implemented (yet)\n");
   return(new ErrorType());
}



// Typeinfer method for AssignExpression
Type* AssignExpression::typeinfer() {
   	error->implementation_error("AsignExpression:Type checking/inference not implemented (yet)\n");
   	return(new ErrorType());
	Expression * l = this->lhs();
	Expression * r = this->rhs();
	Type l_type = l->typeinfer();		
	Type r_type = r->typeinfer();		
	// Check that r_type is a "subtype" of l_type




	return r_type;
}



// Typeinfer method for ArrayAccess
Type* ArrayAccess::typeinfer() {
   error->implementation_error("Type checking/inference not implemented (yet)\n");
   return(new ErrorType());
}


// Typeinfer method for FieldAccess:
Type* FieldAccess::typeinfer() {
   error->implementation_error("Type checking/inference not implemented (yet)\n");
   return(new ErrorType());
}

// Typeinfer method for MethodInvocation
Type* MethodInvocation::typeinfer() {
   error->implementation_error("Type checking/inference not implemented (yet)\n");
   return(new ErrorType());
}



// Typeinfer method for UnaryExpression
Type* UnaryExpression::typeinfer() {
   error->implementation_error("Type checking/inference not implemented (yet)\n");
   return(new ErrorType());
}



// Typeinfer method for AutoExpression
Type* AutoExpression::typeinfer() {
   error->implementation_error("Type checking/inference not implemented (yet)\n");
   return(new ErrorType());
}

// Typeinfer method for NewArrayInstance: 
Type* NewArrayInstance::typeinfer() {
   error->implementation_error("Type checking/inference not implemented (yet)\n");
   return(new ErrorType());
}



// Typeinfer method for NewInstance:
Type* NewInstance::typeinfer() {
   error->implementation_error("Type checking/inference not implemented (yet)\n");
   return(new ErrorType());
}


// Typeinfer method for ThisExpression
Type* ThisExpression::typeinfer() {
   error->implementation_error("Type checking/inference not implemented (yet)\n");
   return(new ErrorType());
}


// Typeinfer method for SuperExpression
Type* SuperExpression::typeinfer() {
   error->implementation_error("Type checking/inference not implemented (yet)\n");
   return(new ErrorType());
}

// Typeinfer method for IdExpression
Type* IdExpression::typeinfer() {
   error->implementation_error("Type checking/inference not implemented (yet)\n");
   return(new ErrorType());
}


// Typeinfer method for NullExpression
Type* NullExpression::typeinfer() {
   error->implementation_error("Type checking/inference not implemented (yet)\n");
   return(new ErrorType());
}


// Typeinfer method for BooleanConstant
Type* BooleanConstant::typeinfer() {
   error->implementation_error("Type checking/inference not implemented (yet)\n");
   return(new ErrorType());
}

// Typeinfer method for IntegerConstant
Type* IntegerConstant::typeinfer() {
   error->implementation_error("Type checking/inference not implemented (yet)\n");
   return(new ErrorType());
}



// Typeinfer method for FloatConstant
Type* FloatConstant::typeinfer() {
   error->implementation_error("Type checking/inference not implemented (yet)\n");
   return(new ErrorType());
}


// Typeinfer method for StringConstant
Type* StringConstant::typeinfer() {
   error->implementation_error("Type checking/inference not implemented (yet)\n");
   return(new ErrorType());
}


