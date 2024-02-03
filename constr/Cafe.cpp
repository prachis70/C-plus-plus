//Q.2 Write a Program to get and display N numbers of Fast Food cafe information using encapsulation and the use of a Default constructor by including the below-mentioned attributes:
//- cafe_id
//- cafe_name
//- cafe_type (like a rooftop or normal)
//- cafe_rating (like 1 Star, 2 Start, ..., 5 Star)
//- cafe_location (city name)
//- cafe_establish_year
//- cafe_staff_quantity
#include<iostream>
using namespace std;
class Cafe
{
	int cafe_id,cafe_rating,establish_year,staff_quantity;
	string cafe_name,cafe_type,cafe_location;
	public:
	Cafe()
	{
		cin.ignore();
		cout<<"Enter the name of Cafe:";
		getline(cin,cafe_name);
		
		cout<<"Enter the cafe type:";
		getline(cin,cafe_type);
		
		cout<<"Enter the cafe_location: ";
		getline(cin,cafe_location);
		
		cout<<"Enter the cafe_id:";
		cin>>cafe_id;
		
		cout<<"Enter the cafe_rating: ";
		cin>>cafe_rating;
		
		cout<<"Enter the  establish_year:";
		cin>>establish_year;
		
		cout<<"Enter the  staff_quantity:";
		cin>>staff_quantity;			
	}   
	void set()
		{
			cout<<endl<<endl;
		cout<<"Enter the name of Cafe            : "<<endl;
		cout<<"Enter the cafe type               : "<<cafe_type<<endl;
		cout<<"Enter the cafe_location           : "<<cafe_location<<endl;
		cout<<"Enter the cafe_id                 : "<<cafe_id <<endl;
		cout<<"Enter the cafe_rating             : "<<cafe_rating<<endl;
		cout<<"Enter the  establish_year         : "<<establish_year<<endl;
		cout<<"Enter the  staff_quantity         : "<<staff_quantity<<endl;
		}	
};
int main()
{
	Cafe c1;
	for(int i=0;i<2;i++)
	{
	  c1.set();
	}
	return 0;
}