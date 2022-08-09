#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int n,f1=0,f2=1,f3;//for fibonaccci series ;
	int x=0,y=0,c=0,m1=0,m2=0;//for count and sum;
		//int a[10],b[10];
	cout<<"Enter the  number of terms :";
	cin>>n;
	cout<<endl;
	ofstream outfile("fibnocci.txt");
	ofstream ofile("prime.txt");
	ofstream ifile("odd.txt");
	for(int i=0;i<n;i++)
	{
		outfile<<f1<<"\t\t";
		if(f1%2==0)
		{
						ofile<<f1<<"\t\t";
			m1=m1+f1;
			
			x++;
		}
		else
		{
			ifile<<f1<<"\t\t";
			m2=m2+f1;
				
			y++;
		}	
		f3=f1+f2;
		
		f1=f2;
		f2=f3;
		c++;
		
	
	}
		ofile<<endl<<"\nThe count of Even Num is :"<<x<<endl;
		ofile<<endl<<"\nThe average of Even Number is :"<<float(m1/x)<<endl;
	//	ofile<<endl<<"\n The median of an Even number is :"<<float((m1+x)/2);
		ofile.close();
		ifile<<endl<<"\nThe count of odd  number :"<<y<<endl;
		ifile<<endl<<"\nThe Average of odd Number is :"<<float(m2/y)<<endl;
		outfile<<"\nThe Count of Fibonnaci series is :"<<c<<endl;
	
	outfile.close();

	return 0;


}
