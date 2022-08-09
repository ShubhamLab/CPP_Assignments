#include<iostream>     //perfect number
using namespace std;
int main()
{
	int n,i,a=0;
	cout<<"Enter any number\n";
	cin>>n;

	for(i=1;i<n;i++)
	{
		if(n%i==0)
			a=a+i;
	}
	
	if(a==n)
		cout<<"Perfect number\n";
	else
		cout<<"Not a perfect number\n";
}
