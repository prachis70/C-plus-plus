//Q.1 Write a Program to get and display Hotels and static information using Encapsulation with an array of objects member by including the below-mentioned attributes:
//- hotel_id
//- hotel_name -static
//- hotel_type (like hotel or motel)
//- hotel_rating (like 1 Star, 2 Start, ..., 7 Star)
//- hotel_location (city name)
//- hotel_establish_year - static
//- hotel_staff_quantity
//- hotel_room_quantity
#include<iostream>
using namespace std;
class Resto
{
	static string name;
	string type,rating,location;
	int id,staff,room; 
	static int establish_year;	
	public:
	void set()
	{
		cout <<"Enter the customer hotel id : ";
		cin >>id;
		cin.ignore();

		cout << "Enter the hotel type : ";
		getline(cin,type);

		cout << "Enter the hotel rating : ";
		cin >>rating;
		cin.ignore();

		cout << "Enter the hotel location : ";
		getline(cin,location);

		cout << "Enter the hotel staff quantity : ";
		cin >>room;
		cin.ignore();		
	}
	void get()
	{
		cout<<endl;
		cout<<name<<endl;
		cout<<"============<>Hotal<>============"<<endl;
		cout<< establish_year <<endl;
		cout<<"============<>establish_year<>====="<<endl;
		cout << "Customer's hotel_id         : " <<id<< endl;
		cout << "Customer's hotel_type       : " <<type<< endl;
		cout << "Customer's hotel_rating     : " <<rating<< endl;
		cout << "Customer's hotel_location   : " <<location<<endl;
		cout << "Customer's establish_year   : " <<establish_year<<endl;
		cout << "Customer's staff_quantity   : " <<staff<<endl;
		cout << "Customer's room_quantity    : " <<room<<endl;
   }
}; 
string Resto::name="Stellar Haven.";
int Resto::establish_year=07;
int main()
{
	cout<<"Enter Hotel Details...."<<endl;
	Resto p1[20];
    for(int i=0;i<3;i++)
    {
    	p1[i].set();
	}
	cout<<endl;
	for(int i=0;i<3;i++)
	{
		p1[i].get();
	}
	cout<<endl;
	return 0;
}
