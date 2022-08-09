#include<iostream>          //simple calculator
using namespace std;
int main()
{
	int a,b,c,n;
	
	cout<<"Enter the value of a\n";
	cin>>a;

	cout<<"Enter the value of b\n";
	cin>>b;


	cout<<"1 for Addition\n2 for Substraction\n3 for Multiplication\n4 for Division\n";
	cout<<"Enter your choice\n";
	cin>>n;

	switch(n)
	{
		case 1: c=a+b;
			cout<<"Addition of two numbers is : "<<c<<"\n";
			break;

		case 2: c=a-b;
			cout<<"Substraction of two numbers is : "<<c<<"\n";
			break;

		case 3: c=a*b;
			cout<<"Multiplication of two numbers is : "<<c<<"\n";
			break;

		case 4: c=a/b;
			cout<<"Division of two numbers is : "<<c<<"\n";
			break;
		
		default: cout<<"Invalid choice\n";
	}

} 	
