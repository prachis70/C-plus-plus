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
class Railway
{	int Train_number,Train_time;string Train_name,Destination;static string source;	
	public :		
	void user()
	{
		cout<<"Enter Train number  :-> ";
		cin >> Train_number;	
		cout <<"Enter Train time   :-> ";
		cin >> Train_time;	
		cin.ignore();
		cout << "Enter Train name  :-> ";
	    getline(cin,Train_name);  
		cout << "Enter Destination :-> ";
	    getline(cin,Destination);
	}
	void Display()
	{
		cout << endl << "<<<<<>>>>>Reservation details<<<<<<>>>>>>"<< endl << endl;  
		cout << "Train number     :-> " << Train_number << endl ;
		cout << "Train time       :-> " << Train_time << ":00" <<endl ;
		cout << "Train name       :-> " << Train_name << endl ;
		cout << "Source           :-> " << source << endl ;
		cout << "Destination      :-> " << Destination << endl<< endl ;
	}
	void get()
	{
		cout << endl <<"Enter Train number : ";
		cin >> Train_number;
		cout << "Train number    :-> " << Train_number << endl ;
		cout << "Train time      :-> " << Train_time << ":00" <<endl ;
		cout << "Train name      :-> " << Train_name << endl ;
		cout << "Source          :-> " << source << endl ;
		cout << "Destination     :-> " << Destination << endl<< endl ;
	}
}; 
string Railway::source="Surat";
int main()
{	 
	cout << "=================<>Railway Reservation System<>============= "<<endl<<endl; 
	int n;
	cout <<"please enter the any num : ";
	cin >> n;	
	Railway r1[n];	
	for(int i=0; i<n ; i++)
	{
		r1[i].user();
		r1[i].Display();
		r1[i].get();
	}
	return 0; 
}
