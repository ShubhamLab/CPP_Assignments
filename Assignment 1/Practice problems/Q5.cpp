#include<iostream>   //reverse the number
using namespace std;
int main()
{
	int n,ld=0,rev=0;
	cout<<"Enter any number\n";
	cin>>n;

	while(n>0)
	{
		ld=n%10;
		rev=(rev*10)+ld;
		n=n/10;
	}

	cout<<"Reversed number is : "<<(rev)<<"\n";

	return 0;
}
