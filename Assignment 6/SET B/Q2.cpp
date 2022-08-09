#include<iostream>
using namespace std;
int r,c;

class matrix
{
	int a[20][20];

public:
 
	void accept()
	{
		cout<<"Enter number of rows\n";
		cin>>r;

		cout<<"Enter number of columns\n";
		cin>>c;

		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				cout<<"Enter values at position ("<<i+1<<"]["<<j+1<<"}\t";
				cin>>a[i][j];
			}
		}
		cout<<endl;
	}

	void display()
	{
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				cout<<a[i][j]<<" ";	
			}
			cout<<endl;
		}
	}

	friend matrix operator *(matrix p,matrix q)
	{
		matrix t;
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				t.a[i][j]=0;
				for(int k=0;k<r;k++)
					t.a[i][j]=t.a[i][j]+((p.a[i][j])*(q.a[j][i]));
			}
		}

		return t;
	}

	matrix operator -()
	{
		matrix t;
		for(int i=0;i<r;i++)
		{		
			for(int j=0;j<c;j++)
				t.a[j][i]=a[i][j];
		}
	return t;

	}
};

	int main()
	{
		matrix a,a1,a2,a3,a4;	
		int r,c;
	
		cout<<"This is matrix 1\n";
		a.accept();
		cout<<endl;
		cout<<"The elements of matrix 1 are\n";
		a.display();
		cout<<endl;

		cout<<"This is matrix 2\n";
		a1.accept();
		cout<<endl;
		cout<<"The elements of matrix 2 are\n";
		a1.display();
		cout<<endl;
		
		a2=a*a1;
		cout<<"Multiplication of matrix is\n";	
		a2.display();
		cout<<endl;

		a3.accept();
		cout<<"Entered matrix is:\n";
		a3.display();	
		cout<<endl;

		a4=-a3;
		cout<<"Transpose of entered matrix is\n";
		a4.display();
		cout<<endl;
}
