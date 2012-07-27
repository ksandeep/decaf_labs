#include<iostream>
#include <queue>
#include <vector>
#include <sstream>
#include <set>
#include <map>
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
string spl_opr;		//operators stores the list of preprocessing characters.
string whitespace;
//string u_operators;	//operators stores the list of terminal characters.

typedef struct _symbol
{
	string str;
	int type;
}symbol;

vector<symbol> infix_to_postfix(string);

queue<symbol> symQ;

int check_validity(string);
int check_consistency(vector<symbol>);
int get_id_count(vector<symbol>);
vector< vector<int> > expand_table(vector< vector <int> > truth_table);
int evaluate_postfix (vector<symbol> postfix);
int preprocess(string &input);


int main()
{

	string input;
	int valid, consistent;

	operators.push_back('|');	//binary operator
	operators.push_back('&');	//binary operator
	operators.push_back('-');	//binary operator
	operators.push_back('!');
	operators.push_back('(');
	operators.push_back(')');

	//special operators to be pre processed
	spl_opr.push_back('-');
	spl_opr.push_back('>');
	//operators.push_back('.');
	whitespace.push_back(' ');

	consistent = true;
	while(consistent)
	{
		input.clear();
		cout<<"- ";
		getline(cin,input);
		if(input.find_first_of(".")==string::npos)
		{
			cout<<"Error: Missing the period symbol \".\" in the end"<<endl;
			continue;
		}
		else
		{
			valid = false;
			if(preprocess(input))
			{
				if (debug)
					cout<<"PREPROCESSED :: "<<input<<endl;
				valid = check_validity(input.substr(0,input.length()-1));
			}
			if(valid)
			{
				vector<symbol> postfix_input = infix_to_postfix(input);
				consistent = check_consistency(postfix_input);
				if (consistent > 0)
					cout<<"Ok"<<endl;
				else
					cout<<"No"<<endl;
			}
		}
	}
}

int preprocess(string &input)
{
	int rc = true;
	int index=0;
	int hifen_removed = false;
	while(index<input.length() && rc)
	{
		switch(input[index])
		{
			case '-':
				if(input[index+1]=='>')
				{
					input.replace(index+1,(input.length()-index),input.substr(index+2));
					if(debug)
						cout<<"PRE : "<<input<<endl;
					hifen_removed = true;
				}
				else
				{
					cout<<"Error: Invalid use of operator '-'"<<endl;
					rc=false;
				}
				
				break;
			case '>':
				if(input[index-1]!='-' && !hifen_removed)
				{
					cout<<"Error: Invalid use of operator '>'"<<endl;
					rc=false;

				}
				hifen_removed=false;
				break;
		}
		index++;
	}
	return rc;
}

string trim_right(const string &source , const string& t = " ")
{
	string str = source;
	return str.erase( str.find_last_not_of(t) + 1);
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
	
	if(debug)
		cout<<"STR : "<<str<<endl;


	if(index==string::npos)
	{
		if(str.length()>0)
		{
			if(debug)
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
		if(debug)
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
			if (left.empty())
				cout<<"Error: Missing operand before '"<<str[index]<<"'"<<endl;
			if (right.empty())
				cout<<"Error: Missing operand before '"<<str[index]<<"'"<<endl;
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
			//cout<<"INVALID BINARY OPERATION"<<endl;
			return  FALSE;
		}
	}
	else if(str[index]=='!')
	{
		if(index!=0)
		{
			cout<<"Error: Invalid use of '!'"<<endl;
			return  FALSE;
		}
		if(!check_validity(trim(str.substr(index+1))))
		{
			//cout<<"INVALID UNARY OPERATION"<<endl;	
			//cout<<"Error: Invalid use of '!'"<<endl;
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

		//int index_last = str.find_last_of(")");
		int index_last = str.find_first_of(")");
		if (index_last == string::npos )
		{
			cout<<"Error: Missing closing parantheses ')'"<<endl;
			return  FALSE;
		}
		if (index!=0)
		{
			cout<<"INVALID USE OF PARANTHESES"<<endl;
			return  FALSE;
		}
		string str_sub = str.substr(index+1, index_last-index-1);
		int val = check_validity(trim(str_sub));
		if(val)
		{
			str.replace(index,(index_last-index+1),"dummy");
			val = check_validity(str);
		}

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
		//cout<<"OPEN PARANTHESES MISSING"<<endl;
		cout<<"Error: Missing opening parantheses ')'"<<endl;
		return  FALSE;
	}


}


int precedence (string op)
{
	if (op.compare("-") == 0)
		return 1;
	else if (op.compare("|") == 0)
		return 2;
	else if (op.compare("&") == 0)
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
int check_consistency(vector<symbol> sym)
{
	static vector< vector<int> > truth_table;
	static vector<int> expr_value;
	static map<string,int> id_map;
	static int count=0;
	static int index=0;
	
	if (debug)
		cout<<"SIZE OF SYM : "<<sym.size()<<endl;
	int idcount = get_id_count(sym);

	/*

	int n = pow(2,idcount);
	int x = n;
	int i;

	cout<<"ID COUNT  : "<<idcount<<endl;
	x=n/2;	
	int n1;	
	while(x>0)
	{
		n1=x;
		vector<int> v;
		int push = 0;
		for(i=1;i<=n;i++)
		{
			v.push_back(push);
			if(i%x==0)
				push=!push;
		}
		x=n1/2;
		truth_table.push_back(v);
	}
	*/

	pair<map<string,int>::iterator,bool> ret;
	vector<int> symindex;
	int i=0,j=0;
	while(i<sym.size())
	{
		if(sym[i].type == ID)
		{
			symindex.push_back(i);
			ret = id_map.insert(pair<string,int>(sym[i].str,index));
			if(ret.second)
			{
				index++;
				if(truth_table.size()==0)
				{
					vector<int> init;
					init.push_back(0);
					init.push_back(1);
					//expr_value.push_back(-1);
					//expr_value.push_back(-1);
					truth_table.push_back(init);
				}
				else
				{
					truth_table = expand_table(truth_table);
					vector<int> v;
					int n = truth_table[0].size();
					for(j=0;j<n;j++)
					{
						if(j<=(n/2)-1)
							v.push_back(0);
						else
							v.push_back(1);
					}
					truth_table.push_back(v);
				}
			}
		}
		i++;
	}

	if (debug)
		cout<<"SIZE OF TRUTH_TABLE : "<<truth_table.size()<<"X"<<truth_table[0].size()<<endl;
	
	if (debug)
		for (vector< vector<int> >::size_type u = 0; u < truth_table.size(); u++) {
        	for (vector<int>::size_type v = 0; v < truth_table[u].size(); v++) {
		cout << truth_table[u][v] << " ";
        	}
        cout << endl;
    	}

	int n = truth_table.size();
	int m = truth_table[0].size();

	/*n = expr_value.size();
	for(i=0;i<(m-n);i++)
		expr_value.push_back(-1);
	*/

	//n = truth_table.size();
	n = idcount;
	vector<int> new_expr_value;
	vector<symbol> eval_sym;

	for(i=0;i<m;i++)
	{
		eval_sym = sym;
		//if(expr_value[i]!=0)
		{
			for(j=0;j<n;j++)
			{
				stringstream ss;
				string str = sym[symindex[j]].str;
				int x;
				x = id_map.find(str)->second;
				if (debug)
					cout<<x<<","<<i<<endl;
				ss << truth_table[x][i];
				str = ss.str();
				//sym variabl gets over written, create a new variable and pass it on to evaluate_postfix function... :D 
				eval_sym[symindex[j]].str = str;
				//cout<<str<<" ";
			}
			//call evaluate function here...
			if (debug)
			{	
				for(j=0;j<sym.size();j++)
					cout<<sym[j].str<<" ";
				cout<<"\n";
			}
			new_expr_value.push_back(evaluate_postfix(eval_sym));
		}
		//cout<<endl;
	}
	if (debug)
	{
		cout<<"EXPR RESULT : ";
		for(j=0;j<new_expr_value.size();j++)
			cout<<new_expr_value[j]<<" ";
		cout<<endl;
	}
	int reset = 0;
	for(i=0;i<truth_table.size();i++)
	{
		reset  = 0;
		for(j=0;j<new_expr_value.size();j++)
		{
			if(new_expr_value[j]==0)
			{
				truth_table[i].erase(truth_table[i].begin()+reset);
				reset=0;
			}
			else
				reset++;
			if (debug)
			{
				cout<<"SIZE OF TRUTH TABLE "<<truth_table[i].size()<<endl;
				for(int k=0;k<truth_table[i].size();k++)
            				cout << truth_table[i][k] << " ";
				cout<<endl;
			}


		}
	}
	if (debug)
	{
		cout<<"SIZE OF TRUTH_TABLE : "<<truth_table.size()<<"X"<<truth_table[0].size()<<endl;
		for (vector< vector<int> >::size_type u = 0; u < truth_table.size(); u++) {
       		for (vector<int>::size_type v = 0; v < truth_table[u].size(); v++) {
            		cout << truth_table[u][v] << " ";
        	}
 			cout << endl;
    		}
	}
	int consistency = TRUE;	
#if 0
	for(i=0;i<expr_value.size();i++)
	{
		if((expr_value[i]==-1) || (expr_value[i]==0))
			expr_value[i] = expr_value[i] & new_expr_value[i];
		else if(expr_value[i] & new_expr_value[i])
		{
			expr_value[i] = new_expr_value[i];
		}
		else
			consistency = FALSE;
	}
	
	cout<<"EXPR : ";
	for(i=0;i<expr_value.size();i++)
		cout<<expr_value[i]<<" ";
	cout<<endl;
#endif

	consistency = truth_table.size()*truth_table[0].size();
	if (debug)
		cout<<"CONSISTENT : "<<consistency<<endl;

	return consistency;
}

vector< vector<int> > expand_table(vector< vector <int> > truth_table)
{
	vector<vector<int> > new_tt;
	int i;
	for(i=0;i<truth_table.size();i++)
	{
		/*vector<int> values = truth_table[i];
		vector<int> expanded_values ;
		expanded_values.insert(expanded_values.begin(),values.begin(),values.end());
		expanded_values.insert(expanded_values.end(),values.begin(),values.end());
		new_tt.push_back(expanded_values);
		*/

		truth_table[i].insert(truth_table[i].begin(),truth_table[i].begin(),truth_table[i].end());
	}
			
	return truth_table;		
}


int get_id_count(vector<symbol> sym)
{
	int idcount=0;
	int i;
	for(i=0;i<sym.size();i++)
	{
		if(sym[i].type == ID)
			idcount++;
	}
	return idcount;
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
					stk.push (!(op2 && (!op1)));
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
