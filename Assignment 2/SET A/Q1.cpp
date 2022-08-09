#include<iostream>
using namespace std;

class cylinder
{

float height,radius;
public:
	void setr(float a)
	{
		radius=a;
	}

	void seth(float b)
	{
		height=b;
	}

	float vol()
	{
		return(3.14*radius*radius*height);
	}

	float area()
	{
		return(2*3.14*radius*height+2*3.14*radius*radius);
	}

};

int main()
{
	int n,i;
	cout<<"Enter the value of n:\t";
	cin>>n;
cylinder cyl[n];
	float r,h;
 	for(i=0;i<n;i++)
	{
		cout<<"Enter radius and height of cylnder\t"<<i+1<<endl;
                 cin>>r>>h;
        	cyl[i].setr(r);
                cyl[i].seth(h);
	}

	for(i=0;i<n;i++)
	{
		cout<<"Details of cylinder=\t"<<i+1<<endl;
                cout<<"Volume=\t"<<cyl[i].vol()<<endl<<"Area = \t"<<cyl[i].area()<<endl;
	}

	return 0;
}
