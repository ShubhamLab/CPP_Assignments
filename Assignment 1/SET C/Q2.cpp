#include<iostream>
using namespace std;
int pno(int a);
int main()
{
	int n;
	cout<<"Enter a number : ";
	cin>>n;


	for(int i=2;i<=n/2;i++)
	{
		if(pno(i))
		{
			if(pno(n-i))
				cout<<i<<" + "<<n-i<<" = "<<n<<"\n";
		}

	}

	cout<<"\n";
}

int pno(int a)
{
	for(int i=2;i<=(a/2);i++)
	{
		if(a%i==0)
		{
			return 0;
			break;
		}
	}
	
	return 1;
	
	

}
