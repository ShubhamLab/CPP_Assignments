#include<iostream>
#include<math.h>
using namespace std;
inline float cube(float n)  { return (cbrt(n)); }
inline float square(float n)  { return (sqrt(n)); }
int main()
{
	float n;
	
	cout<<"Enter a number\n";
	cin>>n;

	cout<<"Cube root of "<<n<<" is : "<<cube(n)<<"\n";
	cout<<"Square root of "<<n<<" is : "<<square(n)<<"\n";
}
