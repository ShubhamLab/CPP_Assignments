#include<iostream>
using namespace std;
class Item
{
public:
	int id;
	char name[20];
	float price;
public:
    
	void accept()
	{
		cout<<"\nEnter id"<<endl;
		cin>>id	
		cout<<"\nEnter name"<<endl;
		cin>>name
		cout<<"\nEnter price"<<endl;
      		cin>>price;
    	}
    
	void display()
	{
		cout<<"\nId : "<<id;
		cout<<"\nName : "<<name;
		cout<<"\nPrice : "<<price;
    	}
};
class Discount:public Item
{
public:
	float dis,c;
	int tdis;
public:
       
	void display()
	{
          
		if(price>0 && price<=25)
         	{
            		dis=0;
            		tdis=(price*dis)/100;
            		cout<<"Your discount is\t"<<tdis<<"Rs"<<endl;
            
         	}

         	else if(price>25 && price<=50)
         	{
            		dis=5;
            		tdis=(price*dis)/100;
            		cout<<"Your discount is\t"<<tdis<<"Rs"<<endl;
            
         	}
         
		else if(price>50 && price<=100)
         	{
            		dis=10;
            		tdis=(price*dis)/100;
            		cout<<"Your discount is\t"<<tdis<<"Rs"<<endl;

         	}
         	else if(price>100 && price<=500)
         	{
            		dis=20;
            		tdis=(price*dis)/100;
            		cout<<"Your discount is\t"<<tdis<<"Rs"<<endl;
           
         	}
          
      	}
      	
	void tot()
       	{
		c=price-tdis;
            	cout<<"Your Price after discount is:\t"<<c<<"Rs"<<endl;
       }
};

int main()
{
	int n,sum=0,t=0;
  	cout<<"Enter how many Items you have to buy"<<endl;
  	cin>>n;
  	Discount d[n];
  	for(int i=0;i<n;i++)
   	{
      		d[i].Item::accept();
   	}
   	cout<<endl;
   	for(int i=0;i<n;i++)
    	{
      		d[i].Item::display();
     	 	d[i].display();
      		d[i].tot();
      		sum=sum+d[i].c;
      		t=t+d[i].tdis;
   	}
   	cout<<"Total price is:\t"<<sum<<endl;  
   	cout<<"Total Discount is:\t"<<t<<"%"<<endl;
}

























































































/*#include<iostream>
using namespace std;
class Item
{
protected:
	int Item_id;
	string Name;
	float Price;
public:
	void accept1()
	{	
		cout<<"\n Enter Item Id    :\t";	
		cin>>Item_id;
		cout<<"\n Enter Item Name :\t";	
		cin>>Name;	
		cout<<"\n Enter Item Price :\t";	
		cin>>Price;
	}

	void display(#include <iostream>
using namespace std;

class Item
{
	protected:
	int item_id;
	string item_name;
	float price;
	public:
	void accept()
	{
		cout<<"Enter details of the item\n";
		cout<<"Item Id :\t";
		cin>>item_id;
		cout<<endl;
		cout<<"Item Name :\t";
		cin>>item_name;
		cout<<endl;
		cout<<"Price :\t";
		cin>>price;
		cout<<endl;
	}
	void display()
	{
		cout<<"Item Id :\t"<<item_id<<endl;
		cout<<"Item Name :\t"<<item_name<<endl;
		cout<<"Discounted Price :\t"<<price<<endl;
	}	
};

class Discount:public Item
{
	float per;
	public:
	void discount()
	{
		if(price<=20)
		{	per=5;
			price=(price/100)*0.05;
		}
		else if(price>20 && price<50)
		{
			per=10;
			price=(price/100)*0.1;
		}
		else if(price>=50)
		{
			per=20;
			price=(price/100)*0.2;
		}
	}
	float getprice()
	{
		return price;
	}
	float getper()
	{
		return per;
	}
};

int main()
{
	int n,i;
	float tot_price=0,tot_dis=0;
	cout<<"Enter number of n\n";
	cin>>n;
	Discount d[n];
	for(i=0;i<n;i++)
	{	
		d[i].accept();
		d[i].discount();
	}	
	for(i=0;i<n;i++)
	{
		cout<<"\n\tDETAILS OF "<<i+1<<" ITEM ARE:\n";
		d[i].display();
	}
	for(i=0;i<n;i++)
	{
		tot_price+=d[i].getprice();
		tot_dis+=d[i].getper();
	}
	cout<<"\n\tTOAL BILL IS:\n";	
	cout<<"TOTAL PRICE : \t"<<tot_price<<endl;
	cout<<"TOTAL DISCOUNT : \t"<<tot_price<<endl;
})
	{
		cout<<"\n Item Id    :\t   "<<Item_id;
		cout<<"\n Item Name  :\t   "<<Name;	
		cout<<"\n Item Price :\tRs."<<Price<<endl;
	}

	float getPrice()
	{
		return Price;
	}
};
	
	class Discount:public Item
	{
		static float Disc_in_per;
		static float Pr;
	public:
	
		void totalPrice()
		{
			Pr += getPrice();
		}
	
	void disc()
	{
		cout<<"dfs\n";
		cout<<"\nTotal Price    : Rs."<<Pr;
		cout<<"\nTotal Discount : ("<< Disc_in_per<<"%) Rs."<<Pr*(Disc_in_per/100.00)<<endl;
		cout<<"\nFinal price : "<<(Pr-(Pr*(Disc_in_per/100.00)))<<"\n";
	}

};

	float Discount :: Pr=0;
	float Discount :: Disc_in_per = 10.00;

	int main()
	{

		int n,i;

		cout<<"How Many Items Customer Want to buy?\t";
		cin>>n;
		Discount d[n];

		for(int i=0;i<n;i++)
		{
			d[i].accept1();
		}

		for( i=0;i<n;i++)
		{
			d[i].display();
		}

		d[i].disc();

	return 0;
	}*/
