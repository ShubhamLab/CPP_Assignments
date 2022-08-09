#include<iostream>
using namespace std;

class array
{
	int *p;
public:
	array(int n)
	{
		p=new int[n];
	}

	~array()
	{
		delete[]p;
		cout<<"Memory disallocated\n";
	}

	void get(int n)
	{
		for(int i=0;i<n;i++)
		{
			cin>>p[i];
			cout<<endl;
		}
	}

	void mid(int n)
	{
		if(n%2==0)
			cout<<"\nMedian = "<<((float)(p[n/2]-1)+p[(n/2)]/2)<<endl;
		else
			cout<<"\nMedian = "<<p[((n/2))]<<endl;
	}

	void display(int n)
	{
		cout<<"Array : \n";
		for(int i=0;i<n;i++)
			cout<<p[i]<<"\t";
	        cout<<endl;
	}
};

	int main()
	{
		int n;
		do{
		cout<<"Enter size of array\n";
		cin>>n;
		}while(n<1);

		array a1=array(n);

		cout<<"Enter elements";
		a1.get(n);

		a1.display(n);

		a1.mid(n);
	}
