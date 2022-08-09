#include<iostream>
using namespace std;
class DB;
class DM
{
	float cm,m;
public:
	
	void accept()
	{
		cout<<"Enter meter and centimeter\n";
		cin>>m>>cm;
	}

	void display()
	{
		cout<<"\nMeter is : "<<m<<"\nCentimeter is : "<<cm<<endl;
	}

	friend void cal(DM a,DB b );
};

class DB
{
	float feet,inches;
public:

	void accept()
	{
		cout<<"Enter feet and inches\n";
		cin>>feet>>inches;
	}

	void display()
	{
		cout<<"\nFeet is : "<<feet<<"\nInches is : "<<inches<<endl;	
	}

	friend void cal(DM a,DB b);
};

      void cal(DM a,DB b)
       {
            cout<<a.m+(b.feet*0.305)<<"meter\t"<<a.cm+(b.inches*2.54)<<"CM\n";
             cout<<b.feet+(a.m*3.28)<<"feet\t"<<b.inches+(a.cm*0.394)<<"inches";
	}


          
	int main()
	{
		DM a;
		DB b;

		a.accept();
		b.accept();

		a.display();
		b.display();

		cal(a,b);
	}
















































/*#include<iostream>
using namespace std;
class DB;
class DM
{
	int m,cm;
public:
	
	void accept()
	{
		cout<<"Enter meter and centi-meter\n";
		cin>>m>>cm;
	}

	friend void add(DM a, DB b);
};

class DB
{
	int feet,inches;
public:
	
	void accept()
	{
		cout<<"Enter feet and inches\n";
		cin>>feet>>inches;
	}

	friend void add(DM a, DB b);
};

	void add(DM a, DB b)
	{

		cout<<"Addition of "
	}

	
int main()
{
	one a;
	two b;

	a.accept();
	b.accept();

	add(a,b);
}*/








