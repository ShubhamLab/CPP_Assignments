#include<iostream>      //factorial of a number
using namespace std;
int main()
{
	int n,i=1,fact=1;
	
	cout<<"Enter any number : ";
	cin>>n;

	while(i<=n)
	{
		fact=fact*i;
		++i;

	}	
	cout<<"Factorial is : "<<fact<<"\n";
}
