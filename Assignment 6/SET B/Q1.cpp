#include<iostream>
using namespace std;
class tim
{
	int hr,min,sec;

public:
		
	friend void operator >>(istream &in,tim &t)
	{
		cout<<"Enter hour\n";
		in>>t.hr;

		cout<<"Enter minutes\n";
		in>>t.min;

		cout<<"Enter seconds\n";
		in>>t.sec;
	
		
	}

	friend void operator <<(ostream &out,tim &t)
	{
		if(t.sec>=0)
		{
			int temp;
			temp=t.sec;
			temp=temp/60;
			t.min=t.min+temp;
			t.sec=t.sec%10;
		}

		if(t.min>=0)
		{
			int temp;
			temp=t.min;
			temp=temp/60;
			t.hr=t.hr+temp;
			t.min=t.min%60;
		}

		out<<"Hour : "<<t.hr<<"\n";
		out<<"Minutes : "<<t.min<<"\n";
		out<<"Seconds : "<<t.sec<<"\n";
	}

	void total()
	{
		int too=(hr*3600)+(min*60)+(sec);
		cout<<"Total time in seconds is :"<<too<<" seconds"<<endl;
	}
};
	
	int main()
	{
		tim t;
	
		cin>>t;
		cout<<endl;


		cout<<t;

		t.total();
		cout<<endl;
	}
