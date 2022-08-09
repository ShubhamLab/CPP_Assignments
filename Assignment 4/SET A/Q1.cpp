#include<iostream>
using namespace std;

void area(int a,int b)
{
	cout<<"Area is : "<<((a*b)/2)<<"sq.unit\n";
}

void area(int a)
{
	cout<<"Area is : "<<((1.731/4)*a*a)<<"sq.unit\n";
}

int main()
{
	float a,b;
	
	cout<<"\nEnter height of right angled triangle\n";
	cin>>a;

	cout<<"\nEnter base of right angled triangle\n";
	cin>>b;

	area(a,b);

	cout<<"Enter height of isosceles triangle\n";
	cin>>a;
	
	cout<<"Enter base of isosceles triangle\n";
	cin>>b;
	
	area(a,b);

	cout<<"Enter side of equilateral triangle\n";
	cin>>a;
	
	area(a);
}
