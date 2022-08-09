#include<iostream>
#include<string.h>
using namespace std;
class person
{
	char pcity[20];
	char pname[20];
	long int pnum;
public:

	void accept()
	{
		cout<<"Enter person name,city and mobile number\n";
	cin>>pname>>pcity>>pnum;
	}

	void disp()
	{
		cout<<"Following are the details\n";
	cout<<"\nName : "<<pname<<"\nCity : "<<pcity<<"\nMobile number : "<<pnum<<"\n";
	}

	int search(char *s)
	{
		if(!(strcmp(s,pname)))
			return 1;
		else
			return 0;
	}

	int search(long mno)
	{
		if(mno==pnum)
			return 1;
		else
			return 0;
	}

	long display()
	{
		return pnum;
	}
};

	int main()
	{
		int n,cnt=0;
		long mno;
		char s[50];

		cout<<"How many details of person you want to enter\n";
		cin>>n;

		person p[n];

		cout<<"Enter details of person\n";
		for(int i=0;i<n;i++)
			p[i].accept();


		for(int i=0;i<n;i++)
			p[i].disp();

		cout<<"Enter the name by which you want to search\n";
		cin>>s;

		for(int i=0;i<n;i++)
		{	if(p[i].search(s))
			{
				p[i].disp();
				cnt++;
			}
			else
				cout<<"Record not found\n";
		}
		cout<<"Enter mobile number by which you want to search\n";
		cin>>mno;

		cnt=0;

		for(int i=0;i<n;i++)
		{
			if(p[i].search(mno))
			{
				p[i].disp();
				cnt++;
			}
			else
				cout<<"Record not found\n";
		}
	return 0;
}
