//Q.2 Write a Program to make a Supermarket Billing System.
//Requirements:
//(A) User Input:
//- Item Number
//- Item Name
//- Quantity
//- Price
//- Discount
//(B) Verify User Id And Password
//(C) Display Records:
//- All Records
//- By Searching Item Number
#include<iostream>
using namespace std;

class Market
{
	int Item_Number,Quantity,Price;float Discount;string Item_Name;static string name;
	public :		
	void input()
	{
		cout <<"Enter Item number : ";
		cin >> Item_Number;
		cin.ignore();
		cout << "Enter Item name : ";
	    getline(cin,Item_Name);  
	    cout <<"Enter Quantity : ";
		cin >> Quantity;	
		cout <<"Enter Price : ";
		cin >> Price;
	    cout<<"Enter Discount : ";
		cin >> Discount;	
	}	
	void Records()
	{
		cout<<endl<<endl;
	    cout << "<<<<<<<<<>>>>>>>>Supermarket Billing details<<<<<<<<>>>>>>>> "<< endl;
		cout << "market Name            :-> " << name <<endl ;
		cout << "Item number                 :-> " << Item_Number << endl ;
		cout << "Item Name    	             :-> " << Item_Name <<endl ;
		cout << "Quantity                    :-> " << Quantity << endl ;
		cout << "Price                       :-> " << Price << endl ;
		cout << "Discount                    :-> " << Discount << "%" << endl ;	
	}
	void Sr()
	{
        cout<<endl<<"Enter Item number :-> ";
		cin >> Item_Number;
		cout << "market Name      :-> " << name <<endl ;
		cout << "Item number           :-> " << Item_Number << endl ;
		cout << "Item Name    	       :-> " << Item_Name <<endl ;
		cout << "Quantity              :-> " << Quantity << endl ;
		cout << "Price                 :-> " << Price << endl ;
		cout << "Discount              :-> " << Discount << "%" << endl ;
    } 
}; 
string Market :: name = "<<>>Vital_Victuals.<<>>";
int main()
{	 
	cout << endl << "===============<>Supermarket Billing System<>================= "<< endl<<endl;
    string User_ID, Password; string userId = "prachi07"; string password = "07prachi";
    cout << "please Enter User ID: ";
    cin >> User_ID;
	cout << "please Enter password : ";
	cin >> Password;
    if (User_ID != userId || Password != password) 
	{
	     cout<<"Invalid User ID or Password!"<< endl; 
	}
	Market s1;	
	for(int i=0; i<3 ; i++)
	{
		s1.input();s1.Records();s1.Sr();	
	}
	return 0;
}
