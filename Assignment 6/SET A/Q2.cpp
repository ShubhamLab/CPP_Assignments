#include<iostream>
using namespace std;

class number
{
	float sal;
public:
		
	void accept()
	{
		cout<<"Enter salary\n";
		cin>>sal;
	}

	number operator--()
	{
		number temp;	
		temp.sal=--sal;	
		return (temp);
	}

	number operator--(int n2)
	{
		number temp;	
		temp.sal=sal--;
		return (temp);
	}

	void display()
	{
		cout<<"Salary : "<<sal<<"\n";
	}
};

	int main()
	{
		number n1,n2,n3,n4;
		n1.accept();
		n2=--n1;
		n2.display();
	
		n3.accept();
		n4=n3--;
		n3.display();
	}	
