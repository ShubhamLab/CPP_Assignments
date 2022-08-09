#include<iostream>
using namespace std;

class number
{
	int i;
public:
		
	void accept()
	{
		cout<<"Enter number\n";
		cin>>i;
	}

	number operator++()
	{
		number temp;	
		temp.i=++i;	
		return (temp);
	}

	number operator++(int n2)
	{
		number temp;	
		temp.i=i++;
		return (temp);
	}

	void display()
	{
		cout<<"Number : "<<i<<"\n";
	}
};

	int main()
	{
		number n1,n2,n3,n4;
		n1.accept();
		n2=++n1;
		n2.display();
	
		n3.accept();
		n4=n3++;
		n3.display();
	}	
