#include<iostream>
using namespace std;
class two;
class one
{
	int x;
public:
	
	void accept()
	{
		cout<<"Enter the  first value\n";
		cin>>x;
	}

	friend void sub(one x, two y);
};

class two
{
	int y;
public:

	void accept()
	{
		cout<<"Enter the second value\n";
		cin>>y;
	}

	friend void sub(one x,two y);
};

	void sub(one x,two y)
	{
		
		cout<<"Subtraction of "<<x.x<<" and "<<y.y<<" is : "<<(x.x-y.y)	<<"\n";

	}

int main()
{
	one a;
	two b;

	a.accept();
	b.accept();

	sub(a,b);
}























