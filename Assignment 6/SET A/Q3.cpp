#include<iostream>
using namespace std;

class array
{
	float arr[20];
public:

	void accept()
	{
		cout<<"Enter elements\n";
		for(int i=0;i<5;i++)
		{
			cin>>arr[i];
		}
	}

	void display()
	{
		cout<<"Entered elements are\n";
		for(int i=0;i<5;i++)
		{
			cout<<arr[i];
			cout<<endl;
		}
		cout<<endl;
	}

	friend array operator ++(array &a1,int)
	{
		for(int i=0;i<5;i++)
		{
			++a1.arr[i];
		}
	}

	friend array operator --(array &a1,int)
	{
		for(int i=0;i<5;i++)
		{
			--a1.arr[i];
		}
	}
};

	int main()
	{
		array a;
		a.accept();
		cout<<"Value of array before calling increment operator\n";
		cout<<endl;
		a.display();
		cout<<endl;

		a++;
		cout<<"Value of array after calling operator\n";
		cout<<endl;
		a.display();
		cout<<endl;

		cout<<"Value of array before calling decrement operator\n";
		cout<<endl;
		a.display();
		cout<<endl;

		a--;
		cout<<"Value of array after decrement calling\n";
		cout<<endl;
		a.display();
		cout<<endl;
	}















