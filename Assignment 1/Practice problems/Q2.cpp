#include<iostream>   //maximum among 3 numbers
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter first number : ";
	cin>>a;

	cout<<"Enter second number : ";
	cin>>b;

	cout<<"Enter third number : ";
	cin>>c;

	if(a>b && a>c)
		cout<<"Highest number is : \n"<<(a)<<"\n";
	else if(b>a && b>c)
		cout<<"Highest number is : \n"<<(b)<<"\n";
	else
		cout<<"Highest number is : "<<(c)<<"\n";

	return 0;
}
