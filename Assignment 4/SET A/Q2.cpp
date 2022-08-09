#include<iostream>
using namespace std;
void area(int a)
{
	cout<<"Volume of cube is : "<<(a*a*a)<<"\n";
}


void area(float r,float h)
{
	cout<<"Volume of cylinder is : "<<(3.14*r*r*h)<<"\n";
}

void area(float r)
{
	cout<<"Volume of sphere is : "<<((4.0/3.0)*3.14*r*r*r)<<"\n";
}


int main()
{
	float r,h;
	int a;
	cout<<"Enter side of cube : ";
	cin>>a;
	area(a);

	cout<<"Enter radius of cylinder : ";
	cin>>r;
	cout<<"Enter height of cylinder : ";
	cin>>h;
	area(r,h);

	cout<<"Enter radius of sphere : ";
	cin>>r;
	area(r);
}
 
