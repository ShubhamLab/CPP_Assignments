#include<iostream>
#include<math.h>
using namespace std;

	void sqr(int n)
	{
  		int p=sqrt(n);
  		cout<<"Square of number:"<<n<<"="<<p<<endl;
	}
	

int main()
{
	int n;
try
{
	cout<<"Enter number to find squre root:\n";
	cin>>n;
      	if(n<0)
        {
        	throw n;
        }
     	else
        {
        	sqr(n);
        }
}

catch (int i)
{
	cout<<"Number is negative:\t"<<n<<endl;
}

}
