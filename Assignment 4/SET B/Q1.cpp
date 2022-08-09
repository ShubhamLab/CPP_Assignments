#include<iostream>
using namespace std;
class student
{
public:
	int maximum(int a,int b)
	{
		if(a>b)
			return a;
		else
			return b;
	}
	
	int maximum(int *a,int len)
	{
		int max=a[0];
		for(int i=0;i<len;i++)
		{
			if(a[i]>max)
				max=a[i];
		}
		return max;
	}

	void maximum(int *a,int len,int m)
	{
		int j;	
		for(int i=0;i<len;i++)
		{
			if(a[i]>m)
				cout<<a[i]<<"\t";
		}
	}
};


	int main()
	{
		student num;
		int a,b,n,m;
		
		cout<<"Enter 2 numbers : ";
		cin>>a>>b;
		cout<<"The maximum among numbers "<<a<<" and "<<b<<" is ";
		cout<<num.maximum(a,b);
		cout<<"\n\n\n";
		
		cout<<"Enter length of array\n";
		cin>>n;
	
		int arr[n];
	
		for(int i=0;i<n;i++)
		{	
			cout<<"Enter a value\n";
			cin>>arr[i];
		}

		cout<<"Maximum score from given array is : "<<num.maximum(arr,n)<<"\n\n\n";
		
		cout<<"Enter any value : ";
		cin>>m;
		cout<<"\n";
		cout<<"All the entries greater than entered value "<<m<<" is :\n";
		num.maximum(arr,n,m);
	}	
	
























