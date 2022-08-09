#include<iostream>
#include<math.h>
using namespace std;
inline float areac(float r) { return (3.14*r*r); }
inline float areas(float side) { return (side*side); }
inline float arear(float l,float b) { return (l*b); }
int main()
{
	float r,side,l,b;
	
	cout<<"Enter radius of circle\n";
	cin>>r;
	cout<<"Area of circle is : "<<areac(r)<<"\n";

	cout<<"Enter the side of the square\n";
	cin>>side;
	cout<<"Area of square is : "<<areas(side)<<"\n";

	cout<<"Enter the length and breadth of rectangle\n";
	cin>>l>>b;
	cout<<"Area of rectangle is : "<<arear(l,b)<<"\n";
}
	
	

