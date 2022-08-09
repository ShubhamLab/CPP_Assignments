#include<iostream>
using namespace std;

class dist
{
public:	
float feet,inches;

	void accept(float a,float b)
	{
		feet=a;
		inches=b;
	}

	

	

};


int main()
{
	dist sum;
	int n,i;
	cout<<"Enter the value of n:\t";
	cin>>n;	
dist d[n];
	float feet,inches;
 	for(i=0;i<n;i++)	
	{
		cout<<"Enter foot and inches of distance\t"<<i+1<<endl;
                cout<<"Enter foot of object:\n"<<i+1<<endl;
		cin>>feet;

		cout<<"Enter inches of object:\n"<<i+1<<endl;
		cin>>inches;
		d[i+1].accept(feet,inches);
	}

	for(int i=0;i<n;i++)
	{
		sum.feet=d[i].feet+d[i+1].feet;
	}
	
	for(int i=0;i<n;i++)
	{
		sum.inches=d[i].inches+d[i+1].inches;
	}

	if(sum.inches>12)
	{
		sum.inches=sum.inches-12;
		sum.feet=sum.feet+1;
	}

	cout<<"Addition of feet and inches is:\t"<<sum.feet<<"feet\t"<<sum.inches<<"inches\t";
	return 0;
}
