#include<iostream>
using namespace std;

class rect
{
	float l,b;
public:
	
	void accept()
	{
		cout<<"Enter values of length and breadth\n";
		cin>>l>>b;
	}

	void display()
	{
		cout<<"Length : "<<l<<" and breadth : "<<b<<"\n";
	}

	float area()
	{
		cout<<"Area of rectangle is : "<<l*b<<"\n";
		
		return (l*b);
	
	}

	friend void comp(rect r1, rect r2)
	{
		if(r1.area()==r2.area())
			cout<<"Area of both rectangle are same\n";
		else if(r1.area()>r2.area())
			cout<<"Area of first rectangle is bigger than area of second rectangle\n";
		else 
			cout<<"Area of first rectangle is less than area of second rectangle\n";	
	}

};

	int main()
	{
		rect r1,r2;
		cout<<"Enter values of first rectangle\n";
		r1.accept();
		
		cout<<"Enter values of second rectangle\n";
		r2.accept();
		
		

		cout<<"Values of first rectangle : "; r1.display();
		cout<<"Values of second rectangle : "; r2.display();
	
		cout<<"Area of first rectangle : ";
		r1.area();
		cout<<"Area of second rectangle : ";
		r2.area();
		comp(r1,r2);
	}
