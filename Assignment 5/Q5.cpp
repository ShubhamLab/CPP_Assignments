#include<iostream>
using namespace std;

class array
{
	int **p;
public:

	array(int m,int n)
	{
		p=new int *[m];
		for(int i=0;i<m;i++)
		{
			p[i]=new int[n];
		}
	}

	~array()
	{
		delete[]p;
		cout<<"Memory disallocated";
	}

	void get(int m,int n)
	{
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				cout<<"Enter elements for position"<<i+1<<","<<j+1<<") : ";
				cin>>p[i][j];
				cout<<endl;
			}
		}
	}

	void display(int m,int n)
	{
		cout<<"Matrix : \n";
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				cout<<p[i][j]<<"\t";
				
			}
			cout<<endl;
		}
	}


	void transpose(int r,int c)
	{
		cout<<"Transpose : \n";
	        for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				cout<<p[j][i]<<"\t";
				
			}
			cout<<endl;
		}
	}
};

	int main()
	{
		int r,c;
		do{
			cout<<"Enter number of rows\n";
			cin>>r;
		}while(r<0);

		do{
			cout<<"Enter number of columns";
			cin>>c;
		}while(c<0);


		array a1=array(r,c);
	
		cout<<"Enter elements : \n";
		a1.get(r,c);
		a1.display(r,c);
		
		if(r==c)
			a1.transpose(r,c);
		else
			cout<<"ERROR!!!! number of rows and columns are not same";
	}
