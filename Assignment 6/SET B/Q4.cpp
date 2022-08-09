#include<iostream>
#include<string.h>
using namespace std;
class stri
{
   char *p;
   int len;

public:

	stri()
      	{
        	p=new char[10];
	
        	cout<<"\nEnter the string\n";

         	cin>>p;
 
     	}
  
	void operator !()
     	{

        	cout<<"\nString is:"<<p<<endl;

                int ln=strlen(p);

          	for(int i=0;i<ln;i++)
       		{
        		if(isupper(p[i]))
            			p[i]+=32;
          		else
            			p[i]-=32;
        	}
	
       	cout<<endl;

       	cout<<"\nThe string with changed case is:"<<p<<endl;

      	}


	void operator [](int n)
	{

        	cout<<"\nString is:"<<p<<endl;

       		int ln=strlen(p);

        	cout<<endl;
        
		if((n+1)>ln)
          		cout<<"\nInvalid index value\n";
        	else
          		cout<<"\nThe character at:"<<n<<"index position is :"<<p[n]<<endl;
     	}


	 void operator <(stri s2)
	 {

     		cout<<"\nFirst string is:"<<p<<endl;

     		cout<<"\nSecond string is:"<<s2.p<<endl;

     		int ln1=strlen(p),ln2=strlen(s2.p);

     		cout<<endl<<endl;
     
		if(!(strcmp(p,s2.p)))     
			cout<<"\nBoth strings are same"<<endl;	
  	   	else if((strcmp(p,s2.p))==1)
      			cout<<"\nFirst string is greater\n"<<endl;
    		else 
      			cout<<"\nSecond string is greater\n"<<endl;
    	}


	
	void operator ==(stri s2)  
  	{

     		cout<<"\nFirst string is:"<<p<<endl;

     		cout<<"\nSecond string is:"<<s2.p<<endl;
     
		if(!(strcmp(p,s2.p)))
     			cout<<"\nBoth strings are same\n";
     		else if((strcmp(p,s2.p)==1))
     			cout<<"\nFirst string is greater";
    		else
      			cout<<"\nSecond string is greater";

    	}


	void operator +(stri s2)
   	{

     		cout<<"\nfirst string is:"<<p<<endl;

      		cout<<"\nSecond string is:"<<s2.p<<endl;

        	cout<<"\nThe concatinated string are:"<<strcat(p,s2.p);

		

    	}

    	void display()
    	{
       		for(int i=0;i<len;i++)
        	{
            		cout<<p[i]<<"\t";
         	}
    	}
};

	int main()
	{
  		stri s1;
  		!s1;
   		
		cout<<endl;
   	 	cout<<"----------------------------------------------------------------------------"<<endl;
    
  		s1[0];
   		cout<<endl;
    		cout<<"-----------------------------------------------------------------------------"<<endl;
    
   		stri s2;
   		!s2;
   		cout<<endl;
    		cout<<"------------------------------------------------------------------------------"<<endl;
  
   		s2[3];
   		cout<<endl;
    		cout<<"---------------------------------------------------------------------------------"<<endl;
  
  		s1<s2;
   		cout<<endl;
    		cout<<"-----------------------------------------------------------------------------------"<<endl;
  	
  		s1==s2;
   		cout<<endl;
    		cout<<"-----------------------------------------------------------------------------------"<<endl;
  
  		s1+s2;
   		cout<<endl;
    		cout<<"---------------------------------------------------------------------------------------"<<endl;
	}

	


