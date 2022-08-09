#include<iostream>      //alphabetical pattern
using namespace std;
int main()
{
	char a='A';int n;
	cout<<"Enter the value of n\n";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<i;j++)
		{
			cout<<a<<" ";
			a++;
		}
	cout<<"\n";
	}
return 0;
}
