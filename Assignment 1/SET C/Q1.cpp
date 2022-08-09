#include<iostream>       //right oriented right angled pyramid
using namespace std;
int main()
{
int a=1,n,m=1;
cout<<"Enter the value of n\n";
cin>>n;
	for(int i=0;i<=n;i++)
	{
		for(int a=1;a<=(n-i);a++)
			cout<<"\t";
		for(int j=0;j<i;j++)
			cout<<m++<<"\t";

         cout<<"\n";
	
	}
return 0;
}

