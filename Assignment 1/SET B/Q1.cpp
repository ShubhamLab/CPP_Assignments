#include<iostream>
using namespace std;
int main()
{
	int n,i;
	
	cout<<"Enter the value of n\n";
	cin>>n;

	for(i=1;i<=n;i++)
		if(n%i==0)
			cout<<"Factors are : "<<i<<"\n";
}
