//Q.1 Write a Program to make a Railway Reservation System.
//Requirements:
//(A) User Input: 
//- Train Number
//- Train Name
//- Source
//- Destination
//- Train Time
//(B) Display Records: 
//- All Records
//- `
//(C) Minimum 3 Input Train Records
#include<iostream>
using namespace std;
class Train
{
	int num,time,destination;static string name,source;
     public:
	 void details()
	 {
	 	cout<<"Enter the train num :";
	 	cin>>num;
	 	cout<<"Enter the train time :";
	 	cin>>time;
	 	cout<<"Enter the train destination :";
		cin>>destination; 	
     }
     void display()
     {
     	cout<<name <<endl;
     	cout<<source <<endl;
     	cout<<"train numer is  :-> "<< num<<endl;
     	cout<<"train time is   :-> "<<time <<endl;
     	cout<<"train desti. is.:-> "<<destination <<endl;
     	cout<<"................."
	 }
	 void search()
	{
		cout <<"SearchingTrainNumber!!!"<<endl;
		cin>>num;
		cout <<"Train Source is :"<<source<<endl;
		cout <<"Train Number is :"<<num<<endl;
		cout <<"Train Name is :"<< name<<endl;
        cout <<"Train Destination is :"<< destination<<endl;
		cout <<"Train Time:"<<time<<":00"<<endl;
		cout<<"..........................";
	}
	 void all_rcrd()
	{
		cout <<" -----------All Records ------------"<<endl;
			cout <<"A. user input"<<endl;
			cout <<"B. Display Records  :"<<endl;
			cout <<"C. Search train Num : "<<endl;
			cout <<"D.close details     : "<<endl;
			cout <<"enter(A to D)       : "<<endl;
			cout<<".................................";
	        char like;
	        cout<<"Enter the your like  :";
	        cin>>like;
		   if(like=='A')
		    {
	    	details();
		    }
		    else if(like=='B')
		   {
		    display();
	     	}
		   else if(like=='C')
		   {
		    search();
		   }
		    else if(like=='D')
		   {
		    cout<<"thank you visit again :"<<endl;
	    	}
		   else
		  {
			cout<<"Piease enter  capital A to Z";
	   	}
	}
};
//static
string Train::name="superfast..";
string Train::source="ahemdabaad..";
int main()
{
	Train t;
	int n;
	cout<<"Enter the any number :";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		t.details();
		t.all_rcrd();
	}
//	t.details();
//	t.search();
	return 0;
}
