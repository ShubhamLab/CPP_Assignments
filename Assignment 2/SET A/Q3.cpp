#include<iostream>
using namespace  std;
class dist
{
int dcode;long int population;
char dname[25];
float sqft,lrate;

public:

	void accept()

{
	cout<<"Enter Following data: code|Name|Population|Area|Literacy"<<endl;
         cin>>dcode>>dname>>population>>sqft>>lrate;
	
}
	void display()
	{
		
		cout<<"District code is :"<<dcode<<"\nDistrict name is :"<<dname<<"\nPopulation is :"<<population<<"\nArea is :"<<sqft<<"\nLiteracy rate is :"<<lrate<<endl;
	}


	float getlit()
	{
		return (lrate);
	}

	long int getpop()
	{
		return (population);
	}
};

int main()
{
	
	int n,i;
	cout<<"Enter the value of n:\t";
	cin>>n;	
dist d[n];
	
 	for(i=0;i<n;i++)	
	{
		
		cout<<"Enter details of districts\t"<<i+1<<endl;
               
		d[i].accept();
	}
       for(i=0;i<n;i++)
       {
          cout<<"display details of district\t"<<i+1<<endl;
          d[i].display();
		cout<<"\n\n\n";
	}

	//least population
	long int least=d[0].getpop(),index=0;
	cout<<"Details of district having least population is:\n";
	for(int i=0;i<n;i++)
	{
		if(d[i].getpop()<least)
		{
			least=d[i].getpop();
			index=i;
		}
	
	}
	
              d[index].display();
		cout<<"\n\n\n";


	//highest literacy rate
	float high=d[0].getlit(); int inde=0;
	cout<<"Details of district having highest literacy rate is:\n";
	for(int i=0;i<n;i++)
	{
		if(d[i].getlit()>high)
		{
			high=d[i].getlit();
			inde=i;
		}
	
	}
	
              d[inde].display();
}























