#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

class person
{
protected:
	int pcode;
	char pname[20];
public:

	void accept()
	{
		cout<<"\nEnter person code";
		cin>>pcode;

		cout<<"\nEnter person name";
		cin>>pname;
	}

	void display()
	{
		cout<<"\nPerson code : "<<pcode;
		cout<<"\nPerson name : "<<pname;
	}
};

class account:virtual public person
{
protected:
	int ano,bal;
public:
	
	void accept()
	{
		cout<<"\nEnter account number";
		cin>>ano;

		cout<<"\nEnter balance";
		cin>>bal;
	}

	void display()
	{
		cout<<"\nAccount number is :"<<ano;
		cout<<"\nAccount balance is :"<<bal;
	}
};

class official:virtual public person
{
protected:
	int exp;
	char desg[20];
public:
	
	void accept()
	{
		cout<<"\nEnter designation";
		cin>>desg;

		cout<<"\nEnter experience";
		cin>>exp;
	}

	void display()
	{
		cout<<"\nDesignation  is :"<<desg;
		cout<<"\nExperience is :"<<exp;
	}

	char* get_desg()
	{	
		return (desg);
	}
};

class employee:public account,public official
{
public:
      

	void display()
      	{
        	person::display();
         	account::display();
         	official::display();
      	}  
};

int main()
{
	int n,i,ch,count=0;
	cout<<"\nEnter how many details you want to store\n";
	cin>>n;
	
	employee e[n];
	
	do{
	cout<<"\nFollowing are the operations\n1 Build a master table\n2 Display the master table\n3 Display the name of employees who have their designation as HOD\n";
	cin>>ch;
		
	switch(ch)
	{
		case 1: for(int i=0;i<n;i++)
			{
				e[i].person::accept();
				e[i].account::accept();
				e[i].official::accept();
			}
			break;

		case 2: for(int i=0;i<n;i++)
			{
				e[i].display();
			}
			break;

		case 3: for(int i=0;i<n;i++)
			{
				if(!(strcmp(e[i].get_desg(),"HOD")))
					e[i].display();
					break;
				count++;

			}
			
			if(count==0)
				cout<<"NOT FOUND";
	}
	}while(ch!=3);
	
}
