#include<iostream>
using namespace std;
int main()
{
	int i,j,n,sum=0;
	
	cout<<"Enter a value of n : ";
	cin>>n;

	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			sum=sum+j;
		}
	}
	cout<<"Sum is : "<<sum<<"\n";
	return 0;
}
