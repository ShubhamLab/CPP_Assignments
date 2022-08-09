#include<iostream>       //Floyd's triangle
using namespace std;
int main()
{
int a=1;
	for(int i=1;i<=4;i++)
	{
		for(int j=0;j<i;j++)
		{
			cout<<a<<"\t";
			a++;
		}
	cout<<"\n";
	}
return 0;
}

