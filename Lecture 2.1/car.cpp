//Q.2 Write a Program to create a Car Record System using the Class and object of any 4 Cars. Consider the below-mentioned attributes in the Car class:
//- car_id
//- car_company_name
//- car_color
//- car_model
//- car_release_year
#include<iostream>
#include<string.h>
using namespace std;
class Car
{
	public:
    int car_id,release_year;
    string company_name,car_color,car_model;
   
   void pr()
   {
   
   	getline(cin,company_name);
   	cout<<"Enter company_name :";
	cin>>company_name;
	getline(cin,company_name);
	
	getline(cin,car_color);
	cout<<"Enter car_color :";
	cin>>car_color;
	
	getline(cin,car_model);
	cout<<"Enter car_model :";
	cin>>car_model;
	
	cin.ignore();
	
	cout<<"Enter car_id :";
	cin>>car_id;
	
	cout<<"Enter car_release_year :";
	cin>>release_year;
	
	cout<<company_name<<endl;
	cout<<car_color<<endl;
	cout<<car_model<<endl;
	cout<<car_id<<endl;
   }
};
int main()
{
	int i;
	for(i=1;i<4;i++)
	{
        Car n1;
        n1.pr();
	}
}
