#include<iostream>
using namespace std;
class jew
{
	int jcode;
	string jname;
	float jprice;
	static int cnt;
public:
	
	void get()
	{
		cnt++;
		cout<<"Enter jwellery code : ";
		cin>>jcode;
	
		cout<<"Enter jwellery name : ";
		cin>>jname;
	
		
			cout<<"Enter jwellery price";
			cin>>jprice;
		


		cout<<endl;
	}

	void display()
	{
		cout<<"\nJwellery code : "<<jcode;
		cout<<"\nJwellery name : "<<jname;
		cout<<"\nJwellery price : "<<jprice;
		cout<<endl;
	}

	static void showcnt()
	{
		cout<<"\nNumber of objects created for jwellery : "<<cnt<<endl;
	}

};

	int jew :: cnt;

	int main()
	{
		int n,i;
		cout<<"How many jwellery information do you want to store\n";
		cin>>n;

		jew a[n];

		cout<<"Enter "<<n<<" jwellery imformation\n";
		for(i=0;i<n;i++)
		{
			a[i].get();
		}

		cout<<"Jwellery information below:\n";
		for(i=0;i<n;i++)
		{
			a[i].display();
		}

		jew :: showcnt;

	return 0;
	} 
