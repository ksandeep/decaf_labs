#include<iostream>
#include <queue>
#include <vector>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

#define TRUE 1
#define FALSE 0

#define UNARY 1
#define BINARY 2
#define OPARA 3
#define CPARA 4
#define ID 5


int check_validity(string);
int check_consistency();

//Global Variables

string operators;	//operators stores the list of terminal characters.
string whitespace;
//string u_operators;	//operators stores the list of terminal characters.

typedef struct _symbol
{
	string str;
	int type;
}symbol;

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
			error  = check_validity(input.substr(0,input.length()-1));
			cout<<"SYMQ CONTAINS ... "<<endl;
			while(!symQ.empty())
			{
				cout<<symQ.front().str<<" ";
				symQ.pop();
			}
			cout<<endl;
			consistent = check_consistency();
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
