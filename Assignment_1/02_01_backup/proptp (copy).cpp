#include <iostream>
#include <queue>
#include <vector>
#include <sstream>
#include <set>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include <stack>
using namespace std;

#define TRUE 1
#define FALSE 0

#define debug 0

#define UNARY 1
#define BINARY 2
#define OPARA 3
#define CPARA 4
#define ID 5


int check_validity(string);
int check_consistency();
string trim_all(string);
int precedence(string);

//Global Variables

string operators;	//operators stores the list of terminal characters.
string whitespace;
//string u_operators;	//operators stores the list of terminal characters.

typedef struct _symbol
{
	string str;
	int type;
}symbol;

vector<symbol> infix_to_postfix(string);
int evaluate_postfix (vector<symbol>);

queue<symbol> symQ;
int main()
{

	string input;
	int error, consistent;

	operators.push_back('|');	//binary operator
	operators.push_back('&');	//binary operator
	operators.push_back('-');	//binary operator
	operators.push_back('!');
	operators.push_back('(');
	operators.push_back(')');
	//operators.push_back('.');
	whitespace.push_back(' ');


	while(1)
	{
		input.clear();
		cout<<"- ";
		getline(cin,input);
		if(input.find_first_of(".")==string::npos)
		{
			cout<<"No '.' found"<<endl;
			continue;
		}
		else
		{
			vector<symbol> postfix_input = infix_to_postfix(input);
			vector<symbol>::iterator it;
			for (it = postfix_input.begin(); it < postfix_input.end(); it++)
			{
				if(it->str.empty())
					continue;
				cout<<it->str<<"\t";
				if (precedence(it->str) < 0)
					it->str="0";
			}
			cout<<endl;
			for (it = postfix_input.begin(); it < postfix_input.end(); it++)
				cout<<it->str<<"\t";
			cout<<endl;

	
			int value = evaluate_postfix(postfix_input);
			cout<<"value = "<<value<<endl;

			/*	Good Code: Commented out for infix_to_postfix
			error  = check_validity(input.substr(0,input.length()-1));
			cout<<"SYMQ CONTAINS ... "<<endl;
			while(!symQ.empty())
			{
				cout<<symQ.front().str<<" ";
				symQ.pop();
			}
			cout<<endl;
			consistent = check_consistency();
			*/
		}
	}
}

string trim_right(const string &source , const string& t = " ")
{
	string str = source;
	return  str.erase( str.find_last_not_of(t) + 1);
}

string trim_left( const std::string& source, const std::string& t = " ")
{
	string str = source;
	return  str.erase(0 , source.find_first_not_of(t) );
}

string trim(const string& source, const string& t = " ")
{
	string str = source;
	return trim_left( trim_right( str , t) , t );
} 

string trim_all(string source)
{
	int index;
	string result;
	result.clear();
	for (index = 0; index < source.length(); index++)
	{
		if((source.at(index) != ' ') && (source.at(index) != '\t'))
			result.push_back(source.at(index));
	}
	return result;
}



int check_validity(string str)
{
	int index;
	symbol sym;

	if(str.empty())
		return FALSE;

	index = str.find_first_of(operators);	


	if(index==string::npos)
	{
		if(str.length()>0)
		{
			cout<<"SYM : "<<str<<endl;
			sym.str = str;
			sym.type = ID;
			symQ.push(sym);
			return  TRUE;
		}
		else
			return  FALSE;
	}
	else
	{
		cout<<"OP : "<<str[index]<<endl;
	}


	if(operators.find_first_of(str[index],0)<3)
	{
		/*
		if(index==0 || index==(str.length()-1))
		{
			cout<<"INVALID BINARY OPERATION"<<endl;
			return  FALSE;
		}
		*/
		string left,right;
		left = str.substr(0,index);
		right = str.substr(index+1);
		left = trim(left);
		right = trim(right);
		if(left.empty() || right.empty())
		{
			cout<<"INVALID BINARY OPERATION"<<endl;
			return  FALSE;
		}
		if(check_validity(left) && check_validity(right))
		{
			sym.str = str.substr(index,1);
			sym.type = BINARY;
			symQ.push(sym);
			return  TRUE;
		
		}
		else
		{
			cout<<"INVALID BINARY OPERATION"<<endl;
			return  FALSE;
		}
	}
	else if(str[index]=='!')
	{
		if(index!=0)
		{
			cout<<"INVALID UNARY OPERATION"<<endl;
			return  FALSE;
		}
		if(!check_validity(trim(str.substr(index+1))))
		{
			cout<<"INVALID UNARY OPERATION"<<endl;	
			return  FALSE;
		}
		else
		{
			sym.str = str.substr(index,1);
			sym.type = UNARY;
			symQ.push(sym);
			return  TRUE;
		}
	
	}
	else if(str[index] == '(')
	{
		/*sym.str = str.substr(index,1);
		sym.type = OPARA;
		symQ.push(sym);*/

		int index_last = str.find_last_of(")");
		if (index_last == string::npos )
		{
			cout<<"CLOSE PARANTHESES MISSING"<<endl;
			return  FALSE;
		}
		if (index!=0)
		{
			cout<<"INVALID USE OF PARANTHESES"<<endl;
			return  FALSE;
		}
		string str_sub = str.substr(index+1, index_last-index-1);
		int val = check_validity(trim(str_sub));
		/*
		sym.str = str.substr(index_last,1);
		sym.type = CPARA;
		symQ.push(sym);
		*/
		return val;
		
		//cout<<"str_sub = "<<str_sub<<endl;
 	
	}
	else 
	{
		cout<<"OPEN PARANTHESES MISSING"<<endl;
		return  FALSE;
	}


}


int precedence (string op)
{
	if (op.compare("-") == 0)
		return 1;
	else if (op.compare("&") == 0)
		return 2;
	else if (op.compare("|") == 0)
		return 3;
	else if (op.compare("!") == 0)
		return 4;
	else if (op.compare("(") == 0)
		return 5;
	else if (op.compare(")") == 0)
		return 6;
	else
		return -1;
}

vector<symbol> infix_to_postfix (string infix)
{

	// Pre-process the infix string 
	// get rid of all spaces and tabs
	infix = trim_all(infix);
	// remove "."
	infix = infix.substr(0, infix.length()-1);
	// add ")"
	infix.push_back(')');
	
	if (debug)
		cout<<"infix_final... "<<infix<<endl;

	// Initialised an empty stack
	stack<string> stk;
	
	stk.push("(");
	
	vector<symbol> postfix;
	string token;
	int p_token;
	string operator_s;
	int p_operator_s;
	symbol temp;
	int index;
	
	while ((!infix.empty()) && (!stk.empty()))
	{
		// Fetch the next token
		index = infix.find_first_of("-&|()! ");
		if (index != string::npos)	
		{
			if (index == 0)
			{
				// operator at first
				token = infix.substr(0, index+1);
				infix = infix.erase(0, index+1);

			}
			else
			{
				token = infix.substr(0, index);
				infix = infix.erase(0, index);
			}
		}	
		else
		{
			token = infix;
			infix.clear();
		}
		if (debug)
		{
			//cout<<"token = "<<token<<"\t"<<"precedence = "<<precedence(token)<<endl;
			//cout<<"infix_after = "<<infix<<endl;
		}
		


		p_token = precedence(token);
		if (p_token < 0)
		{
			// Operand encountered
			temp.str = token;
			temp.type = ID;
			postfix.push_back(temp);
			if (debug)
				cout<<"Inserting: "<<temp.str<<endl;
		}
		else if (p_token == 5)
		{
			// Left parantheses encountered
			stk.push(token);
		}
		else if (p_token < 5)
		{
			// An operator is encountered
		
			while((!stk.empty()) && ((precedence(stk.top())) >= p_token) && (precedence(stk.top()) < 5)) 
			{
				operator_s = stk.top();
				if (debug)
					cout<<"operator_s = "<<operator_s<<endl;
				p_operator_s = precedence(operator_s);
				// precedence of operator_s is >= precedence of token 
				stk.pop();
				// add the popped operator to postfix
				temp.str = operator_s;
				if (p_operator_s == 4)
					temp.type = UNARY;
				else
					temp.type = BINARY;
				postfix.push_back(temp);
				if (debug)
					cout<<"Pushing1: "<<temp.str<<endl;
			}

			stk.push(token);
		}
		else if (p_token == 6)
		{
			while(!stk.empty() && (precedence(stk.top()) < 5) )
			{
				operator_s = stk.top();
				p_operator_s = precedence(operator_s);
				stk.pop();
				// add the popped operator to postfix
				temp.str = operator_s;
				if (p_operator_s == 4)
					temp.type = UNARY;
				else
					temp.type = BINARY;
				postfix.push_back(temp);
				if (debug)
					cout<<"Pushing2: "<<temp.str<<endl;
			}
			// Pop out the left parantheses
			if (!stk.empty())
				stk.pop();
		}
	}
	return postfix; 	
}

int evaluate_postfix (vector<symbol> postfix)
{
	stack<int> stk;
	int op1;
	int op2;
	vector<symbol>:: iterator it;
	for(it = postfix.begin(); it < postfix.end(); it++)
	{
		if(it->str.empty())
			continue;
		if(precedence(it->str) < 0)
		{
			// Operand, replaced by a zero or one
			// push it in stack
			stk.push(atoi(it->str.c_str()));
		}
		else
		{
			// Operator
			if (it->type == UNARY)
			{
				if(it->str.compare("!") != 0)
				{
					cout<<"Invalid unary operator!!"<<endl;
					return -1;
				}
				else
				{
					op1 = stk.top();
					stk.pop();
					stk.push(!op1);
				}
			}
			else if (it->type == BINARY)
			{
				op1 = stk.top();
				stk.pop();
				op2 = stk.top();
				stk.pop();
				if(it->str.compare("&") == 0)
				{
					stk.push(op1 && op2);
				}
				else if(it->str.compare("|") == 0)
				{
					stk.push(op1 || op2);
				}
				else if(it->str.compare("-") == 0)
				{
					stk.push (!((!op2) && op1));
				}
				else
				{
					cout<<"Invalid binary operator!!"<<endl;
					return -1;
				}
			}
			else
			{
				cout<<"Invalid operator!!"<<endl;
				return -1;
			}
		}
	}
	return stk.top();
}

int check_consistency()
{
	/*stack<string> operators;

	while(!symQ.empty())
	{
		switch(symQ.front().type)
		{
			case :
				
		}
	}
*/
	return TRUE;
}
