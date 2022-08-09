#include<iostream>
using namespace std;
class dep
{
	int did,year,nof,nos;
	char dname[20];
public:
	

	void accept()	
	{
		cout<<"Enter the following details\n1 Department code\n2 Department name\n3 Established year\n4 Number of faculty\n5 Number of students\n";
		cin>>did>>dname>>year>>nof>>nos;
	}

	void display()
	{
		cout<<"Details of departments are:\n";
		cout<<"Department code : "<<did<<"\nDepartment name : "<<dname<<"\nEstablished year : "<<year<<"\nNumber of faculty: "<<nof<<"\nNumber of students: "<<nos<<"\n";
	}
	
	int getyear()
	{
		return (year);
	}

	int getdid()
	{
		return (did);
	}
	

	int getnof()
	{
		return (nof);
	}

};

int main()
{
	int n,i;
	
	cout<<"Enter how many department details you want to enter\n";
	cin>>n;

	dep d[n];
	
	for(i=0;i<n;i++)	
	{
		
		cout<<"Enter details of departments\t"<<i+1<<endl;
               
		d[i].accept();
	}

//display departments
	for(i=0;i<n;i++)
       {
          cout<<"Display details of department\t"<<i+1<<endl;
          d[i].display();
		cout<<"\n\n\n";
	}

//search according to the year
	int yr;
	cout<<"Enter a year of department you want to search\n";
	cin>>yr;
	cout<<"Details of department of year "<<yr<<" is :\n";
	for(int i=0;i<n;i++)
	{
		if(d[i].getyear()==yr)
		{
			d[i].display();
		}
	
	}	



//search according to code
	int cd;
	cout<<"Enter code of a department you want to search\n";
	cin>>cd;
	cout<<"Details of department of code "<<cd<<" is :\n";
	for(int i=0;i<n;i++)
	{
		if(d[i].getdid()==cd)
		{
			d[i].display();
		}
	
	}	


//descending order of number of faculty
	
	dep temp;
	for(int i=0;i<n;i++)
	{
		for(int j=0;i<n-i-1;i++)
		{
			if(d[i].getnof()<d[i+1].getnof())
			{
				temp=d[j];
				d[j]=d[j+1];
				d[j+1]=temp;
			}
		}
	}

	//display bubble sort
	
	for(int i=0;i<n;i++)
	{
		d[i].display();
	}






}
