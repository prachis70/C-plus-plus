
//Q.2 Write a Program to create a Customer Record System for 5 customers using Encapsulation. Consider the below-mentioned attributes in the Customer structure:
//- cust_id
//- cust_name
//- cust_age
//- cust_city
//- cust_mobile_number
//- cust_simcard_validity (in years)
//- cust_telecom_brand_name (like Jio, Airtel, Vi, etc.)
#include<iostream>
using namespace std;
class Customer
{
	int cust_id,cust_age,cust_mobile_number,cust_simcard_validity;
	string cust_name,cust_city,cust_telecom_brand_name,line;
	
	public:
	void information(int p)
	{	
	    cout<<"Enter Customer Record System:........"<<endl;
		cout << "Enter the customers id : ";
		cin >> cust_id;
		
		getline(cin,line);
		cout << "Enter the customer name : ";
		getline(cin, cust_name);
		
		cout << "Enter the customer age : ";
		cin >> cust_age;
		
		getline(cin,line);
		cout << "Enter the customer city : ";
		getline(cin, cust_city);
		
		cout << "Enter the customer Mobile number : ";
		cin >> cust_mobile_number;
		
		cout << "Enter the customer validity in year : ";
		cin >> cust_simcard_validity;
		
		getline(cin,line);
		cout << "Enter the customer telecom brand name : ";
		getline(cin, cust_telecom_brand_name);
    }
//    void infoget(int p)
//    {
//    	cout<<cust_id<<endl;
//    	cout<<cust_name <<endl;
//    	cout<<cust_city <<endl;
//    	cout<<cust_telecom_brand_name <<endl;
//    	cout<<cust_age <<endl;
//    	cout<<cust_mobile_number <<endl;
//    	cout<<cust_simcard_validity <<endl;
//	}
	void fo(int p)
	{
		for(int i=0;i<5;i++)
		{
			
	    cout<<endl;		
		cout<<"Enter cust_id   =>"<<cust_id<<endl;
    	cout<<"Enter the cust_name=>"<<cust_name <<endl;
    	cout<<"Enter the cust_city=>"<<cust_city <<endl;
    	cout<<"Enter the cust_telecom_brand_name"<<cust_telecom_brand_name <<endl;
    	cout<<"Enter the cust_age"<<cust_age <<endl;
    	cout<<"Enter the cust_mobile_number"<<cust_mobile_number <<endl;
    	cout<<"Enter the cust_simcard_validity"<<cust_simcard_validity <<endl;
		}
	}
};
int main()
{
	Customer p1;
	p1.information(5);
//	p1.infoget(5);
	p1.fo(5);
	return 0;
}
//	Customer p1;
//	int i;
//	for(i=0;i<5;i++)
//	{
//	     p1.information(5);
//	     for(i=0;i<5;i++)
//	     {
//	     	cout<<endl;
//        	p1.infoget(5);
//            cout<<endl;
//	     }
//	return 0;
//	}
