#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

#define TRUE 1
#define FALSE 0

int check_validity(string);
int check_consistency(string);

//Global Variables

string operands;	//operands stores the list of terminal characters.
string whitespace;
//string u_operands;	//operands stores the list of terminal characters.
int main()
{

	string input;
	int error, consistent;

	operands.push_back('|');	//binary operator
	operands.push_back('&');	//binary operator
	operands.push_back('-');	//binary operator
	operands.push_back('!');
	operands.push_back('(');
	operands.push_back(')');
	//operands.push_back('.');
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
			consistent = check_consistency(input);
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

	if(str.empty())
		return FALSE;

	index = str.find_first_of(operands);	


	if(index==string::npos)
	{
		if(str.length()>0)
		{
			cout<<"SYM : "<<str<<endl;
			return  TRUE;
		}
		else
			return  FALSE;
	}
	else
		cout<<"OP : "<<str[index]<<endl;


	if(operands.find_first_of(str[index],0)<3)
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
			return  TRUE;
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
			return  TRUE;
	
	}
	else if(str[index] == '(')
	{
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
		return check_validity(trim(str_sub));
		
		//cout<<"str_sub = "<<str_sub<<endl;
 	
	}
	else 
	{
		cout<<"OPEN PARANTHESES MISSING"<<endl;
		return  FALSE;
	}


}

int check_consistency(string str)
{
	return TRUE;
}
