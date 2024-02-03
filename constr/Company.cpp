//Q.1 Write a Program to get and display N numbers of Diamond companies information using encapsulation and use of Parameterised Constructor by including below
//mentioned attributes:
//- comp_id
//- comp_name
//- comp_staff_quantity
//- comp_revenue (per year)
//- comp_import_raw_diamonds (no. of raw diamonds
//imported per year)
//- comp_export_diamonds (no. of diamonds per year)
//- comp_ceo (name of CEO of the company)
#include<iostream>
using namespace std;

class Company
{
  int comp_id,staff_quantity,comp_revenue,raw_diamonds,export_diamonds;
  string ceo_name,comp_name;
  
  public:
  Company(int comp_id ,int staff_quantity,int comp_revenue,int raw_diamonds,int export_diamonds, string comp_name, string ceo_name)
  {
  	this->comp_id=comp_id;
  	this->comp_name=comp_name;
  	this->ceo_name=ceo_name;
  	this->comp_revenue=comp_revenue;
  	this->staff_quantity=staff_quantity;
  	this->export_diamonds=export_diamonds;
  	this->raw_diamonds=raw_diamonds;
  }
  void set()
  {
  	  cout<<endl;
  	  cin.ignore();
  	  cout<<"Enter the comp_name:";
  	  getline(cin,comp_name);
  	  cout<<"Enter the ceo_name:";
  	  getline(cin,ceo_name);
  	  cout<<"Enter the comp id:";
  	  cin>>comp_id;
  	  cout<<"Enter the comp_staff_quantity:";
  	  cin>> staff_quantity;
  	  cout<<"Enter the comp_revenue: ";
  	  cin>>comp_revenue;
  	  cout<<"Enter the raw_diamonds: ";
  	  cin>>raw_diamonds ;
  	  cout<<"Enter the export_diamonds: ";
  	  cin>>export_diamonds;
  }
  void get()
  {
  	cout<<endl<<endl;
  	cout<<"Enter the ceo_name              : "<<ceo_name<<endl;
	cout<<"Enter the comp_name             : "<<comp_name<<endl;   
  	cout<<"Enter the comp id               : "<<comp_id<<endl;
  	cout<<"Enter the comp_staff_quantity   : "<<staff_quantity<<endl;
  	cout<<"Enter the comp_revenue          : "<<comp_revenue<<endl;
  	cout<<"Enter the raw_diamonds          : "<<raw_diamonds<<endl ;
  	cout<<"Enter the export_diamonds       : "<<export_diamonds<<endl;
  }
  
};
int main()
{
Company c1=Company( 1 , 5, 66, 70, 12,  "prachi singh",  "nike");
int n;
cout<<"Enter the num.....";
cin>>n;
for(int i=0; i<n; i++)
{
  c1.set();
  c1.get();
  }
return 0;    
}
