#include<iostream>
using namespace std;

class number
{
	int x,y;
public:

	number()
	{

		cout<<"\nDefault\nEnter 1st integer";
		cin>>x;

		cout<<"Enter 2nd integer";
		cin>>y;
	}

	number(int m, int n)
	{
		x=m;
		y=n;
	}

	void maximum()
	{
		if(x>y)
			cout<<x<<" is greater than "<<y<<"\n";
		else
			cout<<y<<" is greater than "<<x<<"\n";
	}
};

	int main()
	{
		int m,n;
	number n1;
		n1.maximum();
		cout<<"\nPara\nEnter number 1: \n";
		cin>>m;

		cout<<"Enter number 2: \n";
		cin>>n;

		number num(m,n);

		num.maximum();
	}
