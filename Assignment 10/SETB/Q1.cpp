#include<iostream>
using namespace std;

	void fac(int n)	
	{
   		int fact=1;
   		for(int i=n;i>0;i--)
   		{
        		fact=fact*i;
   		}
      	cout<<"Factrial of:"<<n<<"="<<fact<<endl;
 	}

int main()
{
  
	int n;
        cout<<"Enter number to find factorial:\n";
        cin>>n;
try
{
	if(n<0)
        {
        	throw n;
        }
       	else if(n>20)
       	{
        	throw (2.2);
       	}
       	else
        {
        	fac(n);
        }
}

catch (int n)
{
	cout<<"Number should be positive  :"<<n<<endl;
}
   
catch(double n1)
{
	cout<<"Number is out of range :"<<endl;
}

}
