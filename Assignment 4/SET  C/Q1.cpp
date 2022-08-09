#include<iostream>
#include<string.h>
using namespace std;
class article
{
	int aid,q;
	float p;
	char name[20];
public:
	
	void accept()
	{
		cout<<"\nEnter id\nName\nQuantity\nPrice\n";
		cin>>aid>>name>>q>>p;
	}
	
	void display()
	{
		cout<<"\n\nFollowing are the details\n";
		cout<<"Article id : "<<aid<<"\nArticle name : "<<name<<"\nArticle quantity : "<<q<<"\nArticle price : "<<p<<"\n";
	}

	int disp(float pr)
	{	
		if(p>pr)
			display();
	}

	int disp(int qua)
	{
		if(q>50)
			display();
	}
};


int main()
{
	int n,m,o,qua;
	float pr=500;
	float p;
	cout<<"Enter how many articles you want to store\n";
	cin>>n;

	article a[n];	
	for(int i=0;i<n;i++)
		a[i].accept();

	for(int i=0;i<n;i++)
		a[i].display();
	
	cout<<"\n\nArticles whose quantity is exceeding 50 is \n";
	for(int i=0;i<n;i++)
		a[i].disp(qua);

	cout<<"\n\nArticle whose price is exceeding 500 is \n";
	for(int i=0;i<n;i++)
		a[i].disp(pr);
}
