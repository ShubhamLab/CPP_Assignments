#include<iostream>
using namespace std;

class simple
{
	int p,n;
	float r;
public:
	
	simple(float a,int b)
	{
		p=a,n=b,r=12;
	}

	void cal()
	{
		float s;
		s=((n*p*r)/100);
		cout<<"Simple Interest = "<<s<<"\n";
	}
};

	int main()
	{
		int m,n,p;
		cout<<"Enter value of n : \n";
		cin>>n;
	
		cout<<"Enter value of p : \n";
		cin>>p;
		
		simple sim(n,p);
	
		sim.cal();
	}
