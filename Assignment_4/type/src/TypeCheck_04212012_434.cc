#include<iostream>
#include "Ast.hh"
#include "Error.hh"

extern Error *error;
extern ClassEntity *objectclass;
extern EntityTable *global_symtab; // global symbol table

void initialize_typechecker() {
  // initialize any needed variables here...
}


void ClassEntity::typecheck() {
   	error->implementation_error("ClassEntity : Type checking/inference implemented \n");
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
	error->implementation_error("MethodEntity : Type checking/inference implemented \n");
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
	error->implementation_error("BlockStatement:Type checking/inference implemented \n");
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
   	error->implementation_error("ExprStatement:Type checking/inference implemented \n");
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
   	error->implementation_error("BinaryExpression:Type checking/inference implemented\n");
   	//return(new ErrorType());
	BinaryOperator op = this->binary_operator();
	Expression * l_exp = this->lhs();
	Expression * r_exp = this->rhs();
	Type *l_type = l_exp->typeinfer();		
	Type *r_type = r_exp->typeinfer();		
	TypeKind l_type_kind = l_type->kind();
	TypeKind r_type_kind = r_type->kind();
	switch(op)
	{
		case ADD:
		case SUB:
		case MUL:
		case DIV:
		{
			if ( ((l_type_kind == INT_TYPE) || (l_type_kind == FLOAT_TYPE))
				&& ((r_type_kind == INT_TYPE) || (r_type_kind == FLOAT_TYPE)) )
			{		
				if ((l_type_kind == INT_TYPE) && (r_type_kind == INT_TYPE))
				{
					return (new IntType());
				}
				else
				{
					return (new FloatType());
				}
			}
			else
			{
				if ((l_type_kind != INT_TYPE) && (l_type_kind != FLOAT_TYPE))
					error->type_error(this->lineno(),"Invalid Binary Expression, found non-numeric type",l_type);
				else
					error->type_error(this->lineno(),"Invalid Binary Expression, found non-numeric type",r_type);
				return (new ErrorType());
			}
		}
		case LT:
		case LEQ:
		case GT:
		case GEQ:
		{
			if ( ((l_type_kind == INT_TYPE) || (l_type_kind == FLOAT_TYPE))
				&& ((r_type_kind == INT_TYPE) || (r_type_kind == FLOAT_TYPE)) )
			{
				return (new BooleanType());
			}
			else
			{
				if ((l_type_kind != INT_TYPE) && (l_type_kind != FLOAT_TYPE))
					error->type_error(this->lineno(),"Invalid Binary Expression, found non-numeric type",l_type);
				else
					error->type_error(this->lineno(),"Invalid Binary Expression, found non-numeric type",r_type);
				return (new ErrorType());
			}
		}
		case EQ:
		case NEQ:
		{
			if ( l_type->isSubtypeOf(r_type) || r_type->isSubtypeOf(l_type) )
			{
				return (new BooleanType());
			}
			else
			{
				error->type_error(this->lineno(),"Invalid Binary Expression, incompatible types",l_type,r_type);
				return (new ErrorType());
			}
		}
		case AND:
		case OR:
		{
			if ( (l_type_kind == BOOLEAN_TYPE) && (r_type_kind == BOOLEAN_TYPE) )
			{
				return (new BooleanType());
			}
			else
			{
				if (l_type_kind != BOOLEAN_TYPE)
					error->type_error(this->lineno(),"Invalid Binary Expression, found non-boolean type",l_type);
				else
					error->type_error(this->lineno(),"Invalid Binary Expression, found non-boolean type",r_type);
				return (new ErrorType());
			}
		}
		default:
		{
			error->syntax_error(this->lineno(),"Invalid Binary Expression - Operator Error");
			return (new ErrorType());
		}
	}
}

// Typeinfer method for AssignExpression
Type* AssignExpression::typeinfer() {
   	error->implementation_error("AsignExpression:Type checking/inference implemented \n");
   	//return(new ErrorType());
	Expression *l = this->lhs();
	Expression *r = this->rhs();
	Type *l_type = l->typeinfer();		
	Type *r_type = r->typeinfer();		
	// Check that r_type is a "subtype" of l_type
	if(l_type->isSubtypeOf(r_type))
		return r_type;
	else
	{
		//cout<<"Error in Assignment \n";
		error->type_error(this->lineno(),"Invalid Assignment",r_type,l_type);
   		return(new ErrorType());
	}
}

// Typeinfer method for ArrayAccess
Type* ArrayAccess::typeinfer() {
   	error->implementation_error("Array Access : Type checking/inference not implemented (yet)\n");
   	return(new ErrorType());
	Type* base_type = this->base()->typeinfer();
	Type* idx_type = this->idx()->typeinfer();
	if ( (idx_type->kind() == INT_TYPE) && (base_type->kind() == ARRAY_TYPE) )
		return ((ArrayType*)base_type)->elementtype();
	else
	{
		if (idx_type->kind() != INT_TYPE)
			error->type_error(this->lineno(),"Invalid Array Access, index not integer",idx_type);
		else
			error->type_error(this->lineno(),"Invalid Array Access, base not array",base_type);

		return (new ErrorType());
	}
	
}


// Typeinfer method for FieldAccess:
Type* FieldAccess::typeinfer() {
   	error->implementation_error("Field Access : Type checking/inference not implemented (yet)\n");
   	return(new ErrorType());
	Expression* b = this->base();
	char* x_name = this->name();
	
	//FieldEntity* e = (FieldEntity*)global_symtab->find_entity(x_name, FIELD_ENTITY, &flag);
	
	Type* base_type = this->base()->typeinfer(); 

 	if (!e->static_flag())
	{
		// non-static field access

	}
	else
	{
		// static field access
		if (base_type->kind() != CLASS_TYPE)
		{
			error->type_error(this->lineno(),"Invalid Field Access, base is not a class",base_type);
			return (new ErrorType());
		}
		ClassEntity* beta = (ClassEntity*)base_type->classtype();
		ClassEntity* gamma = beta;
		FieldEntity* found_x = NULL;
		bool flag_found = false;
		while (!flag_found)
		{
			list<Entity*>* members = gamma->class_members();
			list<Entity*>::iterator i;
			for (i=members->begin(); i != members->end(); i++)
			{
				if ((strcmp((*i)->name(),x_name) == 0) && ((*i)->kind() == FIELD_ENTITY) && (FieldEntity*)(*i)->static_flag())
				{
					found_x = (FieldEntity*)(*i);
					flag_found = true;
					break;
				}
			}
			if (!flag_found)
			{
				gamma = gamma->superclass();
				if (gamma == NULL)
					break;
			}
		}
		if (!flag_found)
		{
			return (new ErrorType());
		}




	}

		
}

// Typeinfer method for MethodInvocation
Type* MethodInvocation::typeinfer() {
   error->implementation_error("Method Invoc : Type checking/inference not implemented (yet)\n");
   return(new ErrorType());
}



// Typeinfer method for UnaryExpression
Type* UnaryExpression::typeinfer() {
   	error->implementation_error("UnaryExpr : Type checking/inference implemented \n");
   	//return(new ErrorType());
	UnaryOperator op = this->unary_operator();
	Expression * arg = this->arg();
	Type *arg_type = arg->typeinfer();		
	TypeKind arg_type_kind = arg_type->kind();
	if (op == NEG)
	{
		if (arg_type_kind == BOOLEAN_TYPE)
			return (new BooleanType());
		else
		{
			error->type_error(this->lineno(),"Invalid Unary Expression, argument not boolean",arg_type);
			return (new ErrorType());
		}
	}
	else if (op == UMINUS)
	{
		if (arg_type_kind == INT_TYPE)
			return (new IntType());
		else if (arg_type_kind == FLOAT_TYPE)
			return (new FloatType());
		else
		{
			error->type_error(this->lineno(),"Invalid Unary Expression, argument not numeric",arg_type);
			return (new ErrorType());
		}
	}
	else
	{
		error->syntax_error(this->lineno(),"Invalid Unary Expression - Operator Error");
		return (new ErrorType());
	}
}



// Typeinfer method for AutoExpression
Type* AutoExpression::typeinfer() {
   	error->implementation_error("AutoExpr : Type checking/inference implemented (yet)\n");
   	//return(new ErrorType());
	Type *t = this->arg()->typeinfer();
	TypeKind t_kind = t->kind();
	if (t_kind == INT_TYPE)
		return (new IntType());
	else
	{
		error->type_error(this->lineno(),"Invalid Auto Expression, argument not integer",t);
		return (new ErrorType());
	}
}

// Typeinfer method for NewArrayInstance: 
Type* NewArrayInstance::typeinfer() {
   	error->implementation_error("NewArray : Type checking/inference implemented \n");
   	//return(new ErrorType());
	Type* t = this->type();
	int d = this->dimension();
	list<Expression*>* b;
	b = this->bounds();
	list<Expression*>::iterator i;	
	for (i=b->begin(); i != b->end(); i++)
	{
		if ((*i)->typeinfer()->kind() != INT_TYPE)
		{
			error->type_error(this->lineno(),"Invalid New Array Instance, array bound not integer",(*i)->typeinfer());
			return(new ErrorType());
		}
	}
	int j;
	for (j=1;j<=d;j++)
	{
		t = new ArrayType(t);
	}
	return t;
}



// Typeinfer method for NewInstance:
Type* NewInstance::typeinfer() {
   error->implementation_error("NewInstance : Type checking/inference not implemented (yet)\n");
   return(new ErrorType());
}


// Typeinfer method for ThisExpression
Type* ThisExpression::typeinfer() {
   error->implementation_error("This : Type checking/inference not implemented (yet)\n");
   return(new ErrorType());
}


// Typeinfer method for SuperExpression
Type* SuperExpression::typeinfer() {
   	error->implementation_error("SuperExpr : Type checking/inference not implemented (yet)\n");
 	return(new ErrorType());
		
	
	
}

// Typeinfer method for IdExpression
Type* IdExpression::typeinfer() {
	error->implementation_error("IdExpr : Type checking/inference implemented \n");

	if(this->id()->kind() == VARIABLE_ENTITY)
		return (((VariableEntity *)(this->id()))->type());
	else if(this->id()->kind() == CLASS_ENTITY)
		return (new ClassType((ClassEntity *)this->id()));
	else
   		return(new ErrorType());
}


// Typeinfer method for NullExpression
Type* NullExpression::typeinfer() {
   error->implementation_error("NullExpr : Type checking/inference implemented \n");
   //return(new ErrorType());
   return(new NullType());
}


// Typeinfer method for BooleanConstant
Type* BooleanConstant::typeinfer() {
   error->implementation_error("BoolConst : Type checking/inference implemented \n");
   return(new BooleanType());
}

// Typeinfer method for IntegerConstant
Type* IntegerConstant::typeinfer() {
   error->implementation_error("IntConst : Type checking/inference implemented \n");
   return(new IntType());
}



// Typeinfer method for FloatConstant
Type* FloatConstant::typeinfer() {
   error->implementation_error("FloatConst : Type checking/inference implemented \n");

   return(new FloatType());
}


// Typeinfer method for StringConstant
Type* StringConstant::typeinfer() {
   error->implementation_error("StrConst : Type checking/inference implemented \n");
   return(new StringType());
}


