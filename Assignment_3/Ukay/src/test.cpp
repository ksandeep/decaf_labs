#include <iostream>

using namespace std;


class a
{
	int x;
public:
	a()
	{
		x = 10;
	}
	int func1(int x)
	{
		cout<<x<<endl;
	}
};



int main()
{

	a b;
	b.func1(12);
}
	
	
