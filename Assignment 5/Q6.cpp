#include<iostream>
using namespace std;

class worker
{
	string name;
	int days;
	float rate;
public:

	worker()
	{
		cout<<"Enter worker name : ";
		cin>>name;
	
		cout<<"Enter worker days : ";
		cin>>days;
	
		cout<<"Enter pay rate : ";
		cin>>rate;
	}

	void sal()
	{
		float sal;
		sal=days*rate;
		cout<<"\nSalary of worker : "<<sal<<"\n";
	}

	worker(string w,int d,float r)
	{
		name=w;
		days=d;
		rate=r;
	}

	worker(worker &w)
	{
		name=w.name;
		days=w.days;
		rate=w.rate;
	}

	void display()
	{
		cout<<"\nWorker name : "<<name;
		cout<<"\nDays : "<<days;
		cout<<"\nRate : "<<rate;
	}
};	

	int main()	
	{
		string name;
		int days;
		float rate;
		
		cout<<"\nPara\nEnter worker name : ";
		getline(cin,name);
		
		
		cout<<"\nEnter days : ";
		cin>>days;
	
		cout<<"\nEnter rate : ";
		cin>>rate;
		worker w2(name,days,rate);
		worker w1,w3(w2);
	
		cout<<"\nThis is the output of default constructor\n";
		w1.display();
		w1.sal();
	
		cout<<"\nThis is the output of parameterised constructor\n";
		w2.display();	
		w2.sal();
		
		cout<<"\nThis is the output of copy constructor\n";
		w3.display();
		w3.sal();
		
		return 0;
}
		
