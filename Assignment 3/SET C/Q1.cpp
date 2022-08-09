#include<iostream>
using namespace std;

class complex
{
	int real,img;
public:
	
	void accept()
	{
		cout<<"Enter real and imaginary part\n";
		cin>>real>>img;
	}

	void display()
	{
		cout<<"\nReal part: "<<real<<"\nImaginary part : "<<img<<"i"<<"\n";
	}

	friend complex add(complex c1,complex c2)
	{
		complex temp;
			
		temp.real=c1.real+c2.real;
		temp.img=c1.img+c2.img;
		
		return temp;
	}
};

	int main()
	{
		complex c1,c2;
		complex c3;
		
	        cout<<"Enter values of first number\n";
		c1.accept();
		
		cout<<"Enter values of second number\n";
		c2.accept();

		c3=add(c1,c2);
		cout<<"Addition is : "; c3.display();	
	}
