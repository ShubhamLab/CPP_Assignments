#include<iostream>
#include<fstream>
using namespace std;
class employee
{
	public:
		int id;
		char name[30];
		float salary;
};
int main()
{
	employee e;
	ofstream file;
	ifstream rfile;
	int ch,p;
	do
	{
		cout<<"1.Append\n2.Display\n3.Delete\n4.Modify\n5.exit\n";
		cout<<"Enter your choice\n";
		cin>>ch;
		switch(ch)
	{
		case 1:cout<<"Enter Employee id"<<endl;
			       cin>>e.id;
			       cout<<"Enter Employee Name"<<endl;
			       cin>>e.name;
			       cout<<"Enter Employee Salary"<<endl;
			       cin>>e.salary;
			       file.open("Emp.txt",ios::app);
			       file<<e.id<<endl;
			       file<<e.name<<endl;
			       file<<e.salary<<endl;
			       file.close();
			       break;
		case 2:cout<<"\nDisplay details"<<endl;
			        rfile.open("Emp.txt");
					rfile>>e.id;
					rfile>>e.name;
					rfile>>e.salary;
					while(!rfile.eof()) 
					{
						cout<<"Employee id is:\t"<<e.id<<endl;
						cout<<"Employee name is:\t"<<e.name<<endl;
						cout<<"Employee salary is:\t"<<e.salary<<endl;
						rfile>>e.id;
					    rfile>>e.name;
					    rfile>>e.salary;
						  }      
						  rfile.close();
						  break;
		case 3:cout<<"Enter Id of employee want to delete record"<<endl;
			       cin>>p;
			       rfile.open("Emp.txt");
			       file.open("new.txt");
			       rfile>>e.id;
			       rfile>>e.name;
			       rfile>>e.salary;
			       while(!rfile.eof())
			       {
			       	if(e.id!=p)
			       	{
			       		file<<e.id<<endl;
			       		file<<e.name<<endl;
			       		file<<e.salary<<endl;
					   }
					else
					{
						cout<<"Record Deleted"<<endl;
					}
					rfile>>e.id;
			       rfile>>e.name;
			       rfile>>e.salary;	
				   }
				   file.close();
				   rfile.close();
		          
		          remove("Emp.txt");
		          rename("new.txt","Emp.txt");
		          break;
		case 4:
			       int eid;
			       char ename[30];
				   float esalary;
				   cout<<"Enter Employee id to modify\n";
				   cin>>p;
				   rfile.open("Emp.txt");
				   file.open("new.txt");
				   rfile>>e.id;
				   rfile>>e.name;
				   rfile>>e.salary;
				   while(!rfile.eof()) 
				   {
				   	if(e.id!=p)
				   	{
				   		file<<e.id<<endl;
				   		file<<e.name<<endl;
				   		file<<e.salary<<endl;
					   }
					else
					{
						cout<<"Enter new id"<<endl;
						cin>>eid;
						cout<<"Enter name\n"<<endl;
						cin>>ename;
						cout<<"Enter salary"<<endl;
						cin>>esalary;
						
						file<<eid<<endl;
						file<<ename<<endl;
						file<<esalary<<endl;
					}
					rfile>>e.id;
					rfile>>e.name;
					rfile>>e.salary;
						}     
						file.close();
						rfile.close();
						remove("Emp.txt");
						rename("new.txt","Emp.txt");
						break;
		case 5:     exit(0);
     	}
   }while(ch>0 && ch<5);
}
