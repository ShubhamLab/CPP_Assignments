#include<iostream>       //multiplication table
using namespace std;
int main()
{
	int n,c;
	cout<<"Enter the value of n\n";
	cin>>n;

	for( int i=1;i<=10;i++)
		cout<<"("<<n<<" * "<<i<<") ="<<n*i<<endl;

	return 0;
} 
