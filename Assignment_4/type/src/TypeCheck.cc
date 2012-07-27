#include<iostream>
#include "Ast.hh"
#include "Error.hh"


//#define debug 1
extern Error *error;
extern ClassEntity *objectclass;
bool same_args(list<Expression *> *args, list<Entity *> *params);

void initialize_typechecker() {
  // initialize any needed variables here...
}
ClassEntity *curr_class = NULL;
MethodEntity *curr_method = NULL;
ConstructorEntity *curr_constructor = NULL;
list<int> err_lines;

bool err_lines_present(int n)
{
	list<int>::iterator i;
	for(i = err_lines.begin(); i!=err_lines.end(); i++)
	{
		if (*i == n)
			return true;
	}
	return false;
}

void ClassEntity::typecheck() {
   	#ifdef debug
	error->implementation_error("ClassEntity : Type checking/inference implemented \n");
  	#endif	
	list<Entity*> *m;
	list<Entity*>::iterator i;
	curr_class = this;
	m = this->class_members();
	for(i=m->begin(); i != m->end(); i++) 
	{
		switch((*i)->kind())
		{
			case METHOD_ENTITY:
				((MethodEntity*)(*i))->typecheck();
				break;
			case CONSTRUCTOR_ENTITY:
				((ConstructorEntity*)(*i))->typecheck();
				break;

		}
	}
	curr_class = NULL;	
}

void MethodEntity::typecheck() {
   	#ifdef debug
	error->implementation_error("MethodEntity : Type checking/inference implemented \n");
  	#endif	
	curr_method = this;
	//Statement *s;
	//s = this->method_body();
	//((BlockStatement*)(s))->typecheck();
	//s->typecheck();
	this->method_body()->typecheck();
	curr_method = NULL;
}

void ConstructorEntity::typecheck() {
   	#ifdef debug
   	error->implementation_error("ConstructorEntity: Type checking/inference implemented\n");
  	#endif	
	curr_constructor = this;
	//Statement *s;
	//s = this->constructor_body();
	//((BlockStatement*)(s))->typecheck();
	//s->typecheck();
	this->constructor_body()->typecheck();
	curr_constructor = NULL;
}

// Typecheck method for IfStatement
void IfStatement::typecheck() {
   	#ifdef debug
   	error->implementation_error("IfStatement:Type checking/inference implemented \n");
  	#endif	
	//Expression* expr = this->expr();
	Type* t = this->expr()->typeinfer();
	Statement* thenp = this->thenpart();
	Statement* elsep = this->elsepart();
	if (t->kind() != BOOLEAN_TYPE)
	{
		// raise error
		if (!err_lines_present(this->lineno()))
		{
			err_lines.push_front(this->lineno());
			error->type_error(this->lineno(),"Invalid If Statement, found non-boolean expression: ",t);
		}
	}
	thenp->typecheck();
	elsep->typecheck();
}

// Typecheck method for WhileStatement
void WhileStatement::typecheck() {
   	#ifdef debug
   	error->implementation_error("WhileStatement:Type checking/inference not implemented\n");
  	#endif	
	//Expression* expr = this->expr();
	Type* t = this->expr()->typeinfer();
	Statement* body = this->body();
	if (t->kind() != BOOLEAN_TYPE)
	{
		// raise error
		if (!err_lines_present(this->lineno()))
		{
			err_lines.push_front(this->lineno());
			error->type_error(this->lineno(),"Invalid While Statement, found non-boolean expression: ",t);
		}
	}
	body->typecheck();
}



// Typecheck method for ForStatement
void ForStatement::typecheck() {
   	#ifdef debug
   	error->implementation_error("ForStatement:Type checking/inference implemented \n");
  	#endif	
	Type* t = this->guard()->typeinfer();
	Statement* init = this->init();
	Statement* update = this->update();
	Statement* body = this->body();
	if (t->kind() != BOOLEAN_TYPE)
	{
		// raise error
		if (!err_lines_present(this->lineno()))
		{
			err_lines.push_front(this->lineno());
			error->type_error(this->lineno(),"Invalid For Statement, found non-boolean guard: ",t);
		}
	}
	init->typecheck();
	update->typecheck();
	body->typecheck();

}

// Typecheck method for ReturnStatement
void ReturnStatement::typecheck() {
   	#ifdef debug
   	error->implementation_error("ReturnStatement:Type checking/inference implemented \n");
  	#endif	
	if (curr_method == NULL)
	{
		// raise error
		error->implementation_error("Invalid Return Statement, not called from a method");
	}
	Type* ret_type = curr_method->return_type();
	Type* expr_type = this->expr()->typeinfer();
	if (!expr_type->isSubtypeOf(ret_type))
	{
		// raise error
		if (!err_lines_present(this->lineno()))
		{
			err_lines.push_front(this->lineno());
			error->type_error(this->lineno(),"Invalid Return Statement, expression type is invalid",expr_type,ret_type);
		}
	}
}


// Typecheck method for BlockStatement
void BlockStatement::typecheck() {
   	#ifdef debug
	error->implementation_error("BlockStatement:Type checking/inference implemented \n");
  	#endif	
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
   	#ifdef debug
   	error->implementation_error("ExprStatement:Type checking/inference implemented \n");
  	#endif	
	//Expression *e;
	//e = this->expr();
	//e->typeinfer();
	this->expr()->typeinfer();
}

// Typecheck method for DeclStatement
void DeclStatement::typecheck() {
   	#ifdef debug
	error->implementation_error("DeclStatement:Type checking/inference implemented\n");
  	#endif	
   	return;	// No type checking
}



// Typecheck method for BreakStatement
void BreakStatement::typecheck() {
   	#ifdef debug
   	error->implementation_error("BreakStatement:Type checking/inference implemented\n");
	#endif
   	return;	// No type checking
}



// Typecheck method for ContinueStatement
void ContinueStatement::typecheck() {
   	#ifdef debug
   	error->implementation_error("ContinueStatement:Type checking/inference implemented \n");
	#endif
   	return;	// No type checking
}



// Typecheck method for SkipStatement
void SkipStatement::typecheck() {
   	#ifdef debug
  	error->implementation_error("SkipStatement:Type checking/inference implemented\n");
	#endif
   	return;	// No type checking
}



// Typeinfer method for BinaryExpression
Type* BinaryExpression::typeinfer() {
   	#ifdef debug
   	error->implementation_error("BinaryExpression:Type checking/inference implemented\n");
  	#endif	
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
				{
					if (!err_lines_present(this->lineno()))
					{
						err_lines.push_front(this->lineno());
						error->type_error(this->lineno(),"Invalid Binary Expression, found non-numeric type",l_type);
					}
				}
				else
				{
					if (!err_lines_present(this->lineno()))
					{
						err_lines.push_front(this->lineno());
						error->type_error(this->lineno(),"Invalid Binary Expression, found non-numeric type",r_type);
					}
				}
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
				{
					if (!err_lines_present(this->lineno()))
					{
						err_lines.push_front(this->lineno());
						error->type_error(this->lineno(),"Invalid Binary Expression, found non-numeric type",l_type);
                                        }
				}
				else
				{
					if (!err_lines_present(this->lineno()))
					{
						err_lines.push_front(this->lineno());
						error->type_error(this->lineno(),"Invalid Binary Expression, found non-numeric type",r_type);
					}
				}
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
				if (!err_lines_present(this->lineno()))
				{
					err_lines.push_front(this->lineno());
					error->type_error(this->lineno(),"Invalid Binary Expression, incompatible types",l_type,r_type);
				}
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
				{
					if (!err_lines_present(this->lineno()))
					{
						err_lines.push_front(this->lineno());
						error->type_error(this->lineno(),"Invalid Binary Expression, found non-boolean type",l_type);
					}
				}
				else
				{
					if (!err_lines_present(this->lineno()))
					{
						err_lines.push_front(this->lineno());
						error->type_error(this->lineno(),"Invalid Binary Expression, found non-boolean type",r_type);
					}
				}
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
   	#ifdef debug
   	error->implementation_error("AsignExpression:Type checking/inference implemented \n");
  	#endif	
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
		if (!err_lines_present(this->lineno()))
		{
			err_lines.push_front(this->lineno());
			error->type_error(this->lineno(),"Invalid Assignment",l_type,r_type);
		}
   		return(new ErrorType());
	}
}

// Typeinfer method for ArrayAccess
Type* ArrayAccess::typeinfer() {
   	#ifdef debug
   	error->implementation_error("Array Access : Type checking/inference not implemented (yet)\n");
  	#endif	
   	return(new ErrorType());
	Type* base_type = this->base()->typeinfer();
	Type* idx_type = this->idx()->typeinfer();
	if ( (idx_type->kind() == INT_TYPE) && (base_type->kind() == ARRAY_TYPE) )
		return ((ArrayType*)base_type)->elementtype();
	else
	{
		if (idx_type->kind() != INT_TYPE)
		{
			if (!err_lines_present(this->lineno()))
			{
				err_lines.push_front(this->lineno());
				error->type_error(this->lineno(),"Invalid Array Access, index not integer",idx_type);
			}
		}
		else
		{
			if (!err_lines_present(this->lineno()))
			{
				err_lines.push_front(this->lineno());
				error->type_error(this->lineno(),"Invalid Array Access, base not array",base_type);
			}
		}
		return (new ErrorType());
	}
	
}


Type* FieldAccess::typeinfer() {
   	#ifdef debug
   	error->implementation_error("Field Access : Type checking/inference implemented\n");
  	#endif	
   	//return(new ErrorType());
	Expression* b = this->base();
	char* x_name = this->name();
	
	Type* base_type = this->base()->typeinfer(); 
 	if (base_type->kind() == INSTANCE_TYPE)
	{
		// non-static field access
		ClassEntity* beta = ((InstanceType*)base_type)->classtype();
		ClassEntity* gamma = beta;		
		FieldEntity* found_x = NULL;
		while (found_x == NULL)
		{
			list<Entity*>* members = gamma->class_members();
			list<Entity*>::iterator i;
			for (i=members->begin(); i != members->end(); i++)
			{
				if ((strcmp((*i)->name(),x_name) == 0) && ((*i)->kind() == FIELD_ENTITY) && !(((FieldEntity*)(*i))->static_flag()))		// non-static; flag checked for false
				{
					found_x = (FieldEntity*)(*i);
					break;
				}
			}
			if (found_x == NULL)
			{
				gamma = gamma->superclass();
				if (gamma == NULL)
					break;
			}
		}
		if (found_x == NULL)
		{
			// error
			if (!err_lines_present(this->lineno()))
			{
				err_lines.push_front(this->lineno());
				error->type_error(this->lineno(),"Invalid Field Access, field name not found:",x_name);
			}
			return (new ErrorType());
		}
		if (found_x->visibility_flag() || ((curr_method || curr_constructor) && curr_class && (curr_class == gamma))) 
			return found_x->type();
		else
		{
			if (!err_lines_present(this->lineno()))
			{
				err_lines.push_front(this->lineno());
				error->type_error(this->lineno(),"Invalid Field Access, invalid access to field:", x_name);
			}
			return (new ErrorType());
		}			

	}
	else if (base_type->kind() == CLASS_TYPE)
	{
		// static field access
		ClassEntity* beta = ((ClassType*)base_type)->classtype();
		ClassEntity* gamma = beta;		
		FieldEntity* found_x = NULL;
		while (found_x == NULL)
		{
			list<Entity*>* members = gamma->class_members();
			list<Entity*>::iterator i;
			for (i=members->begin(); i != members->end(); i++)
			{
				if ((strcmp((*i)->name(),x_name) == 0) && ((*i)->kind() == FIELD_ENTITY) && ((FieldEntity*)(*i))->static_flag())		// static, flag checked for true
				{
					found_x = (FieldEntity*)(*i);
					break;
				}
			}
			if (found_x == NULL)
			{
				gamma = gamma->superclass();
				if (gamma == NULL)
					break;
			}
		}
		if (found_x == NULL)
		{
			// error
			if (!err_lines_present(this->lineno()))
			{
				err_lines.push_front(this->lineno());
				error->type_error(this->lineno(),"Invalid Field Access, field name not found:",x_name);
			}
			return (new ErrorType());
		}
		if (found_x->visibility_flag() || (curr_method && curr_class && (curr_class == gamma))) 
			return found_x->type();
		else
		{
			if (!err_lines_present(this->lineno()))
			{
				err_lines.push_front(this->lineno());
				error->type_error(this->lineno(),"Invalid Field Access, invalid access to field:", x_name);
			}
			return (new ErrorType());
		}			
	}
	else
	{
                if (!err_lines_present(this->lineno()))
		{
			err_lines.push_front(this->lineno());
                        error->type_error(this->lineno(),"Invalid Field Access, base type is neither CLASS nor INSTANCE: ", base_type);
                }
		return (new ErrorType());
	}			
}

// Typeinfer method for MethodInvocation
Type* MethodInvocation::typeinfer() {

   	Expression *base = this->base();
   	char *name = this->name();
   	list<Expression *>* args = this->args(); 
   	Type *base_type = base->typeinfer();
   	bool static_flag;
   	ClassEntity *beta;
   
	/*
   	if(base_type->kind() != CLASS_TYPE)
   	{
	   	return (new ErrorType());
   	}*/
   	if (base_type->kind() == INSTANCE_TYPE)
   	{
	   	static_flag = false;
   		beta = ((InstanceType*)base_type)->classtype();
   	}
   	else if (base_type->kind() == CLASS_TYPE)
   	{
	   	static_flag = true;
   		beta = ((ClassType*)base_type)->classtype();
   	}
   	else 
	{
                if (!err_lines_present(this->lineno()))
                {
                        err_lines.push_front(this->lineno());
                        error->type_error(this->lineno(),"Invalid Field Access, base type is neither CLASS nor INSTANCE: ", base_type);
                }
                return(new ErrorType());
   	}
	
	// base_typce can be either ClassType or InstanceType
   	ClassEntity *gamma = beta;
	MethodEntity *found_meth = NULL;

   	while(found_meth == NULL)
   	{
   		list<Entity*> *members = gamma->class_members();
   		list<Entity*>::iterator i;

   		for(i=members->begin();i!=members->end();i++)
   		{
	   		if(((*i)->kind() == METHOD_ENTITY) && (strcmp((*i)->name(),name)==0) && (((MethodEntity*)(*i))->static_flag() == static_flag))
	   		{
		   		list<Entity *> *formal_params = ((MethodEntity*)(*i))->formal_params();
		   		if(same_args(args,formal_params))
			   	{
					found_meth = (MethodEntity*)(*i);
					break;
				}
	   		}
   		}
		if (found_meth == NULL)
		{
			gamma = gamma->superclass();
			if (gamma == NULL)
				break;
   		}
	}
	if (found_meth == NULL)
	{
		//error
                if (!err_lines_present(this->lineno()))
		{
			err_lines.push_front(this->lineno());
                        error->type_error(this->lineno(),"Invalid Method Invocation,  Method Name not found:",name);
                }
	   	return(new ErrorType());

	}
	if (!static_flag)
	{
		if (found_meth->visibility_flag() || ((curr_method || curr_constructor) && curr_class && (curr_class == gamma))) 
			return found_meth->return_type();
		else
		{	
			//error
                        if (!err_lines_present(this->lineno()))
			{
				err_lines.push_front(this->lineno());
                                error->type_error(this->lineno(),"Invalid Method Invocation, Invalid access to method:",name);
                        }
	   		return(new ErrorType());
		}
	}
	else
	{
		if (found_meth->visibility_flag() || (curr_method && curr_class && (curr_class == gamma))) 
			return found_meth->return_type();
		else
		{
			//error
                        if (!err_lines_present(this->lineno()))
			{
				err_lines.push_front(this->lineno());
                                error->type_error(this->lineno(),"Invalid Method Invocation, Invalid access to method:",name);
                        }
	   		return(new ErrorType());
		}
	}

}

bool same_args(list<Expression*> *args, list<Entity *> *params)
{

	list<Expression *>::iterator i;
	list<Entity *>::iterator j;
	bool params_validity = false;

	if(args->size() != params->size())
		return false;
	else if(args->size() == 0)
		return true;

	for(i=args->begin(),j=params->begin();i!=args->end();i++,j++)
	{
		params_validity = (*i)->typeinfer()->isSubtypeOf(((VariableEntity*)(*j))->type());
		if(!params_validity)
			break;
	}

	return params_validity;
}



// Typeinfer method for UnaryExpression
Type* UnaryExpression::typeinfer() {
   	#ifdef debug
   	error->implementation_error("UnaryExpr : Type checking/inference implemented \n");
  	#endif	
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
                        if (!err_lines_present(this->lineno()))
			{
				err_lines.push_front(this->lineno());
                                error->type_error(this->lineno(),"Invalid Unary Expression, argument not boolean",arg_type);
                        }
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
                        if (!err_lines_present(this->lineno()))
			{
				err_lines.push_front(this->lineno());
                                error->type_error(this->lineno(),"Invalid Unary Expression, argument not numeric",arg_type);
                        }
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
   	#ifdef debug
   	error->implementation_error("AutoExpr : Type checking/inference implemented (yet)\n");
  	#endif	
   	//return(new ErrorType());
	Type *t = this->arg()->typeinfer();
	TypeKind t_kind = t->kind();
	if (t_kind == INT_TYPE)
		return (new IntType());
	else
	{
                if (!err_lines_present(this->lineno()))
		{
			err_lines.push_front(this->lineno());
                        error->type_error(this->lineno(),"Invalid Auto Expression, argument not integer",t);
                }
		return (new ErrorType());
	}
}

// Typeinfer method for NewArrayInstance: 
Type* NewArrayInstance::typeinfer() {
   	#ifdef debug
   	error->implementation_error("NewArray : Type checking/inference implemented \n");
  	#endif	
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
                        if (!err_lines_present(this->lineno()))
			{
				err_lines.push_front(this->lineno());
                                error->type_error(this->lineno(),"Invalid New Array Instance, array bound not integer",(*i)->typeinfer());
                        }
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

   	//error->implementation_error("NewInstance : Type checking/inference not implemented (yet)\n");
   	list<Expression*>* args = this->args(); 
   	ClassEntity *gamma = this->class_entity();
   	list<Entity*> *members = gamma->class_members();
   	list<Entity*>::iterator i;

   	for(i=members->begin();i!=members->end();i++)
   	{
	   	if((*i)->kind() == CONSTRUCTOR_ENTITY)
	   	{
		   	list<Entity*> *formal_params = ((ConstructorEntity*)(*i))->formal_params();
		   	if(same_args(args,formal_params) /*&& (curr_class && (curr_class == gamma))*/)
			{
			   	return (new InstanceType(gamma));
			}
	
	   	}
   	}
        if (!err_lines_present(this->lineno()))
	{
                err_lines.push_front(this->lineno());
                error->type_error(this->lineno(),"undeclared constructor",(char *)gamma->name());
        }
	return (new ErrorType());	
}


// Typeinfer method for ThisExpression
Type* ThisExpression::typeinfer() {
   	#ifdef debug
   	error->implementation_error("This : Type checking/inference implemented \n");
  	#endif	
   	//return(new ErrorType());
	if (curr_method != NULL)
	{
		if(curr_method->static_flag())
	   		return (new ClassType(curr_class));
		else
	   		return (new InstanceType(curr_class));
	}
	else if(curr_constructor != NULL)
	{
	   	return (new InstanceType(curr_class));
	}
	else
		cout <<"Should not reach here..."<<endl;
}


// Typeinfer method for SuperExpression
Type* SuperExpression::typeinfer() {
   	#ifdef debug
   	error->implementation_error("SuperExpr : Type checking/inference implemented \n");
  	#endif	
 	//return(new ErrorType());
	if (curr_method != NULL)
	{
		if(curr_method->static_flag())
			return (new ClassType(curr_class->superclass()));
		else
		   	return (new InstanceType(curr_class->superclass()));
	}
	else if(curr_constructor != NULL)
	{
		return (new InstanceType(curr_class->superclass()));
	}
	else
		cout <<"Should not reach here..."<<endl;


}

// Typeinfer method for IdExpression
Type* IdExpression::typeinfer() {
   	#ifdef debug
	error->implementation_error("IdExpr : Type checking/inference implemented \n");
  	#endif	

	if(this->id()->kind() == VARIABLE_ENTITY)
		return (((VariableEntity *)(this->id()))->type());
	else if(this->id()->kind() == CLASS_ENTITY)
		return (new ClassType((ClassEntity *)this->id()));
	else
   		return(new ErrorType());
}


// Typeinfer method for NullExpression
Type* NullExpression::typeinfer() {
   	#ifdef debug
   	error->implementation_error("NullExpr : Type checking/inference implemented \n");
  	#endif	
  	//return(new ErrorType());
   	return(new NullType());
}


// Typeinfer method for BooleanConstant
Type* BooleanConstant::typeinfer() {
   	#ifdef debug
   	error->implementation_error("BoolConst : Type checking/inference implemented \n");
  	#endif	
   	return(new BooleanType());
}

// Typeinfer method for IntegerConstant
Type* IntegerConstant::typeinfer() {
   	#ifdef debug
  	error->implementation_error("IntConst : Type checking/inference implemented \n");
  	#endif	
  	return(new IntType());
}



// Typeinfer method for FloatConstant
Type* FloatConstant::typeinfer() {
   	#ifdef debug
   	error->implementation_error("FloatConst : Type checking/inference implemented \n");
  	#endif	

   	return(new FloatType());
}


// Typeinfer method for StringConstant
Type* StringConstant::typeinfer() {
   	#ifdef debug
  	error->implementation_error("StrConst : Type checking/inference implemented \n");
  	#endif	
	return(new StringType());
}


