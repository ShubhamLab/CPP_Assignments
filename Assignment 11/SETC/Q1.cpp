#include<iostream>
#include<stdlib.h>
using namespace std;
int front=0;
int rear=-1;
template <typename t>
class queue
{
	protected:
		t arr[30];
		t ele;
		int n;
	public:
		void accept()
		{
			cout<<"How many elements in queue"<<endl;
			cin>>n;
			cout<<n<<endl;
			for(int i=0;i<n;i++)
			{
				cout<<"Enter elements"<<i+1<<endl;
				cin>>ele;
				rear++;
				arr[rear]=ele;
			}
		}
		void display()
		{
			cout<<"Elements of queue are"<<endl;
			for(int i=front;i<=rear;i++)
			{
				cout<<arr[i]<<endl;
			}
		}
		void delet()
		{
			if(front==-1 || front>rear)
			{
				cout<<"No elements in queue to delete"<<endl;
			}
			else
			{
				cout<<"Elements deleted from queue"<<"\t"<<arr[front]<<endl;
				front++;
			}
		}
};
int main()
{
	int ch;
	queue <int> q;
	do{
		cout<<"1.Insert\n2.Display\n3.Delete\n4.Exit\n";
		cout<<"Enter your choice"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:q.accept();
			        break;
			        
			case 2:q.display();
			        break;
			case 3:q.delet();
			        break;
			case 4:exit(0);
		}
	}while(ch>0 && ch<5);
}
