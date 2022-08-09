#include<iostream>
using namespace std;
int main()
{
	int n,temp,i=1,j,rem=0;
	char hexa[50];

	
	cout<<"Enter a decimal number : ";
	cin>>n;
	temp=n;
	
	while(temp!=0)
	{
		rem=temp%16;
		if(rem<10)
			rem=rem+48;
		else
			rem=rem+55;
		hexa[i++]=rem;
		temp=temp/16;
		
	}
	cout<<"Hexadecimal number is : ";
	for(j=i-1;j>0;j--)
		cout<<(char)(hexa[j]);

	return 0;
}
	
