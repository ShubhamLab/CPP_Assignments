#include<iostream>
#include<math.h>
using namespace std;

void power(double m,int n)
{
	
	cout<<" "<<m<<" raised to power "<<n<<" is ";
	cout<<pow(m,n);
	cout<<"\n";
}

void power(int m,int n)
{
	cout<<" "<<m<<" raised to power "<<n<<" is ";
	cout<<pow(m,n);
	cout<<"\n";
}

int main()
{
	int m,n;
	double d;

	cout<<"Enter a double value : ";
	cin>>d;
	cout<<"Power : ";
	cin>>n;
	power(d,n);

	cout<<"Enter a integer : ";
	cin>>m;
	cout<<"Power : ";
	cin>>n;
	power(m,n);
}
