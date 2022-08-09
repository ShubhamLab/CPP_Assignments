#include<iostream>
#include<fstream>
#include<iomanip>
#include<string.h>
using namespace std;
class empfile
{
	public:
		int emp_id;
		char emp_name[30];
		float emp_sal;
};
int main()
{
	int n,flag=0;
	char nk[30],ch,ans;
	long num;
	float sal;
	cout<<"\n Enter how many emp info you want to store: ";
	cin>>n;
	cout<<endl;
	empfile t[n];
		ofstream outfile;
		ifstream infile;
do
{
		cout<<"\n1.Store emp info.\n2.Display the info.\n3.Append.\n4.Moddify"<<endl;
		cout<<"Enter the choice: ";
		cin>>ch;	
		cout<<endl;
		switch(ch)
		{
			case '1':outfile.open("emp.txt",ios::out);	
				for(int i=0;i<n;i++)
				{
					cout<<"Enter Emp_id :";
					cin>>t[i].emp_id;
					cout<<endl;
			
					cout<<"Enter Emp Name :";
					cin>>t[i].emp_name;
					cout<<endl;				
		
					cout<<"Enter Emp_sal:";
					cin>>t[i].emp_sal;
					cout<<endl;
				outfile.write((char*)&t[i],sizeof(t[i]));
			}
			outfile.close();
			break;
			case '2':infile.open("emp.txt",ios::in);
					for(int i=0;i<n;i++)
					{
						infile.read((char*)&t[i],sizeof(t[i]));
						cout<<t[i].emp_id<<"\t"<<t[i].emp_name<<"\t"<<t[i].emp_sal<<endl;
					}
					infile.close();
					break;
			case '3':
					outfile.open("emp.txt",ios::app);	
					empfile temp1;
					cout<<"Enter the Emp_id :";
					cin>>temp1.emp_id;
					cout<<endl;
					cout<<"Enter the Emp_name :";
					cin>>temp1.emp_name;
					cout<<endl;
				cout<<"Enter the Emp_sal :";
					cin>>temp1.emp_sal;
					cout<<endl;
					
			outfile.write((char*)&temp1,sizeof(temp1));
			outfile.close();
			cout<<endl<<"New record added succesfully";
			n=n+1;
			break;
			case '4':empfile temp;
					cout<<"Enter the emp id to udpdate the sal : ";
					cin>>temp.emp_id;
					cout<<endl;
					cout<<"Enter the new sal : ";
					cin>>temp.emp_sal;
					cout<<endl;
					infile.open("emp.txt",ios::in);
					outfile.open("emptemp.dat",ios::out);
					for(int i=0;i<n;i++)
					{
						infile.read((char*) &t[i],sizeof(t[i]));
						if(t[i].emp_id==temp.emp_id)
						{
									//strcpy(temp.emp_name,t[i].emp_name);
										t[i].emp_sal=temp.emp_sal;
									outfile.write((char*)&t[i],sizeof(t[i]));			
									cout<<endl<<"record updated"<<endl;
						}
						else
						{
							outfile.write((char*)&t[i],sizeof(t[i]));
						}}
				infile.close();
				outfile.close();
				infile.open("emptemp.txt",ios::in);
				outfile.open("emp.txt",ios::out);
				for(int i=0;i<n;i++)
				{
					infile.read((char*)&t[i],sizeof(t[i]));
					outfile.write((char*) &t[i],sizeof(t[i]));
	
				}
				outfile.close();
				infile.close();
			infile.open("emp.txt",ios::in);
			for(int i=0;i<n;i++)
			{
				infile.read((char*)&t[i],sizeof(t[i]));
				cout<<t[i].emp_id<<"\t"<<t[i].emp_name<<"\t"<<t[i].emp_sal<<endl;
					
			}
			infile.close();
			break;
					}

		cout<<endl<<"Want to continue y/n: ";
		cin>>ans;		


}while(ans=='y');


}

