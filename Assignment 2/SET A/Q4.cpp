#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
class str
{
	string s1;
	
public:

	void accept()
	{
		cout<<"Enter string\n";
				getline(cin,s1);
				getline(cin,s1);

				
	
	}

	void display()
	{
		cout<<"string is : "<<s1<<"\n";
		
	}

	void length()
	{
		cout<<"Length of string is : "<<s1.length()<<"\n";
	
	
	}

	void compare()
	{
		string s2;
		cout<<"Enter a string\n";
		getline(cin,s2);
		getline(cin,s2);
		if(s1==s2)
			cout<<"Both strings are equal\n";
		else if(s1>s2)
			cout<<"String "<<s1<<" is greater than string "<<s2<<"\n";
		else
			cout<<"String "<<s2<<" is greater than string "<<s1<<"\n";
	}

	void concatenate()
	{
		string s2;
		cout<<"Enter a string\n";
		getline(cin,s2);
		getline(cin,s2);
		
		
		s1+s2;
		cout<<"Concatenation of two strings is : "<<s1+s2<<"\n";
	}

	void rev()
	{
		cout<<"Reverse of string is ";
			reverse(s1.begin(),s1.end());		
			cout<<s1<<"\n";

	}
};

int main()
{
	int ch;
	str ss,s2,s3;
	do{
		cout<<"Following are the list of operations\n";
		cout<<"1 for Accepting\n2 for Display\n3 for Concatenate\n4 for Compare\n5 for Reverse\n";
		cin>>ch;
	
		switch(ch)	
		{
			case 1: ss.accept();
				
				break;

			case 2: ss.display();
				
				break;
	
			case 3: ss.concatenate();
				break;

			case 4: ss.compare();
				break;
	
			case 5: ss.rev();
				break;
		}
	}while(ch>0 && ch<6);
}
				


























































/*#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string s1,s2,s3;
	int ch,len1,len2;
	
	cout<<"Enter the first string\n";
	getline(cin,s1);

	cout<<"Enter the second string\n";
	getline(cin,s2);
	
	do
	{
	cout<<"Following are the operations to be performed\n";
	cout<<"1 for Concatenate\n2 for Length\n3 for Compare\n4 for Reverse\n";
	cout<<"Enter your choice\n";
	cin>>ch;
		
	switch(ch)
	{
		case 1:s3=s1+s2;
			cout<<"Concatenation of "<<s1<<" and "<<s2<<" is : "<<s3<<"\n";
			break;

		case 2:len1=s1.length();
			cout<<"Length of string1 is :"<<len1<<endl;
			
			len2=s2.length();
			cout<<"Length of string2 is :"<<len2<<endl;
			break;

		case 3: ;
			if(s1==s2)
				cout<<"String "<<s1<<" and string "<<s2<<" are the same\n";
			else if(s1<s2)
				cout<<"String "<<s1<<" is less than string "<<s2<<"\n";
			else
				cout<<"String "<<s1<<" is greater than string "<<s2<<"\n";
			break; 

		case 4: cout<<"Reverse of first string is ";
			reverse(s1.begin(),s1.end());		
			cout<<s1<<"\n";

			cout<<"Reverse of second string is ";
			reverse(s2.begin(),s2.end());		
			cout<<s2<<"\n";
			break;
	}
	}while(ch>0 && ch<5);
}*/
