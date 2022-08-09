#include<iostream>
using namespace std;
class Employee
{
protected:
	char ename[20];
	char desg[20];
public:

	void accept()
	{
		cout<<"\nEnter the name of the employee\n";
		cin>>ename;

		cout<<"\nEnter the designation\n";
		cin>>desg;
	}

	void display()
	{
		cout<<"\nEmployee name : "<<ename;
		cout<<"\nEmployee Designation : "<<desg;
	}
};

class Project
{
protected:
	int pid;
	char title[20];
public:

	void accept()
	{
		cout<<"\nEnter project id\n";
		cin>>pid;

		cout<<"\nEnter project title\n";
		cin>>title;
	}

	void display()
	{
		cout<<"\nProject id : "<<pid;

		cout<<"\nProject title : "<<title;
	}

};

class Emp_Pro:public Employee,public Project
{
     protected:
                 int duration;

public:
         void accept()
         {
            cout<<"Enter Duration of project:\n";
            cin>>duration;
         }

         void display()
         {
              Employee::display();

              Project::display();

              cout<<"\nDuration of project is:\t"<<duration<<endl;
         }

	int dur()
	{
		return duration;
	}
};


int main()
{
	Emp_Pro obj[20];

	int ch,n;
	Emp_Pro temp;
	cout<<"How many details you want to store\n";
	cin>>n;

	do{
	cout<<"Following are the operations to be performed\n1 Build a master table\n2 Display the master table\n3 Display project details in ascending order of duration\n";
	cin>>ch;

	switch(ch)
	{
	case 1 : for(int i=0;i<n;i++)
		 {
			cout<<"Enter details of object"<<i+1<<"\n";
			obj[i].Employee::accept();
			obj[i].Project::accept();
			obj[i].Emp_Pro::accept();
		}
		break;

	case 2:	for(int i=0;i<n;i++)
		{
			cout<<"Following are the detaisl of object"<<i+1<<"\n";
			obj[i].Emp_Pro::display();
		}
		break;

	case 3: cout<<"Details of project in ascending order are as follows:\n";

		for(int i=0;i<n;i++)
                {
                	for(int j=0;i<n-i-1;i++)
                        {
                        	if(obj[i].dur()>obj[i+1].dur())
                                {
                                	temp=obj[j];
                                        obj[j]=obj[j+1];
                                        obj[j+1]=temp;
                                }
                         }
                 }


		for(int i=0;i<n;i++)
                {
                	obj[i].display();
                        cout<<endl;
                }
		break;

	}
	}while(ch!=3);
}

















































































































/*#include<iostream>
using namespace std;

class Emp
{
string Name;
string Dest;
public:
	getEmp();


};

class Project
{
int p_id;
string title;

};

class Emp_proj:public Emp,public Project
{


};

int main()
{


}*/
