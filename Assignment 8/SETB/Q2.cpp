#include<iostream>
using namespace std;
int top=-1;
int front=-1;
int rear=-1;
class list
{
	protected:
		int arr[30];
	public:
		virtual void store()=0;
		virtual void retrieve()=0;
};
class stack:public list
{
	int ele;
	public:
		void store()
		{
			int n;
			cout<<"How many elements in stack"<<endl;
			cin>>n;

			for(int i=0;i<n;i++)
			{
				cout<<"Enter elements:"<<i+1<<endl;
				cin>>ele;

				arr[++top]=ele;
			}
		}
		void retrieve()
		{
			cout<<"Elements of stack is"<<endl;
			for(int i=top;i>=0;i--)
			{
				cout<<arr[i]<<endl;
			}
		}
};
class queue:public list
{
	int n;
	public:
		void store()
		{
			int ele;
			cout<<"How many elements in queue"<<endl;
			cin>>n;

			for(int i=0;i<n;i++)
			{
				cout<<"Enter element:"<<i+1<<endl;
				cin>>ele;
				
				arr[++front]=ele;
			}
		}
		void retrieve()
		{
			cout<<"Elements of queue are:"<<endl;
			while(rear!=n-1)
			{
				cout<<arr[++rear]<<endl;
			}
		}
};
int main()
{
	stack s;
	queue q;
	s.store();
	s.retrieve();
	q.store();
	q.retrieve();
}
