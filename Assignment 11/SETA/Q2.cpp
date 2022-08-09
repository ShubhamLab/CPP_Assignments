#include<iostream>
#include<stdlib.h>
using namespace std;
template <typename t>
class vector
{
	t *v;
	int n;
public:
		
	vector(t p[20],int m)
	{
		n=m;
		v=new t[n];
		for(int i=0;i<n;i++)
		{
			v[i]=p[i];
		}
	}
		
		
	void display()
	{
   		for(int i=0;i<n;i++)
		{
	   		cout<<v[i]<<endl;
		}	
	}
		
	
	void modify(int pos,t val)
	{
		v[pos]=val;
	}
		
	void multiply(int no)
	{
		for(int i=0;i<n;i++)
		{
			v[i]=v[i]*no;
		}
	}
};

int main()
{
	
	int n,ch,no,pos,p[10];
	cout<<"How many numbers you want in vector:\n";
	cin>>n;
	
	cout<<"Enter elements into vector"<<endl;
			        for(int i=0;i<n;i++)
			        {
			        	cin>>p[i];
					}
					vector <int> v(p,n);
					
	do{
		cout<<"\n1.Display\n2.Modify\n3.Multiply\n4.Exit\n";
		cout<<"Enter your choice"<<endl;
		cin>>ch;
		switch(ch)
		{
		    case 1: cout<<"Display elements:"<<endl;
		             v.display();
		             break;
			case 2:
			        cout<<"Which position you want to modify"<<endl;
			        cin>>pos;
			        cout<<"By which number you want to modify"<<endl;
			        cin>>no;
			        v.modify(pos,no);
			        break;
			case 3:
			        cout<<"By which number you want to multiply"<<endl;
			        cin>>no;
			         v.multiply(no);
			        break;
			case 4: exit(0);
				
		}
	}while(ch>0 && ch<5);
}

