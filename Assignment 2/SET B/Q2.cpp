#include<iostream>
using namespace std;
#include<string.h>
class metro
{
	int mno,mst;
	char mname[20];
	char source[20];
	char destination[20];
public:

	void accept();

	void display();

	int get(char src[20])
	{
		return (strcmp(source,src));
	}
	
	int getd(char des[20])
	{
		return (strcmp(destination,des));
	}
};

	void metro::accept()
	{
		cout<<"Enter the following details\n";
		cout<<"1 Metro number\n2 Metro name\n3 Number of seats\n4 Starting point\n5 Destination\n";
		cin>>mno>>mname>>mst>>source>>destination;
	}

	void metro::display()
	{
		cout<<"Folowing are the details of metro\n";
		cout<<"Metro number : "<<mno<<"\nMetro name : "<<mname<<"\nNumber of seats : "<<mst<<"\nStarting point : "<<source<<"\nDestination : "<<destination<<"\n";
	}

	

int main()
{
	int n,i,ch,flag=0;
	char string1[20];
	char string2[20];
	
	cout<<"Enter how many metro details you want to enter\n";
	cin>>n;

	metro m[n];
	do
	{
		cout<<"1 Accept deatils of metro\n2 Display details of metro\n3 Enter source and destination\n";
		cout<<"Enter your choice\n";
		cin>>ch;

		switch(ch)
		{
			case 1: 
			 for(i=0;i<n;i++)	
	{
		
		cout<<"Enter details of metro\t"<<i+1<<endl;
               
		m[i].accept();
	}
			break;
		
			case 2:for(i=0;i<n;i++)
       {
          cout<<"Display details of metro\t"<<i+1<<endl;
          m[i].display();
		cout<<"\n\n\n";
	}
			break;

	case 3: cout<<"Enters source and destion to find train:\n";
                cout<<"Enter source station \n:";
                cin>>string1;
                 
		 cout<<"Enter destination station \n:";
                 cin>>string2;
           
                   for(int i=0;i<n;i++)
                    if(!(m[i].get(string1)))
                      
                        if(!(m[i].getd(string2)))
                          { 
                             m[i].display();
                               flag++;
                           }
                               if(!flag)
                                cout<<"Detials not found\n";
                    break;
	
	
}
}while(ch>0&&ch<4);
	
}
