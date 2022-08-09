#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
	
class mobile
{
	int mid;
	float mprice;
	string mname;
public:
	
	mobile(int a,float b,string c)
	{
		mid=a,mprice=b,mname=c;
	}

	void display()
	{
		cout<<"Mobile ID : "<<mid<<"\n";
		cout<<"Mobile name : "<<mname<<"\n";
		cout<<"Mobile price : "<<setprecision(2)<<fixed<<mprice<<endl;
	}
	
};
	
	int main()
	{
		int a;
		float b;
		string c;
		
		cout<<"\nPara\nEnter Mobile ID\n";
		cin>>a;
	
		cout<<"Enter mobile name\n";
		cin>>c;
		
		cout<<"Enter mobile price\n";
		cin>>b;
	
		mobile mob(a,b,c);
		
		mob.display();
	}
