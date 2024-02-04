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

//using static,data-encapsulation,constructor(with arrgument),defualt-constructor


#include<iostream>
using namespace std;
class Diamond
{  
    public:
	int id,quantity,revenue,diamonds,export_diamonds;
	static string ceo_name,comp_name; 
	Diamond(int id,int quantity,int revenue,int diamonds,int export_diamonds)
	{
		this->id=id;
		this->quantity=quantity;
		this->revenue=revenue;
		this->diamonds=diamonds;
		this->export_diamonds=export_diamonds;
	}
	Diamond()
	{
		cin.ignore();
		cout<<"Enter the name:";
		getline(cin,ceo_name);
		
		cout<<"Enter the comp name:";
		getline(cin,comp_name);
		
		cout<<"Enter the id:";
		cin>>id;
		
		cout<<"Enter the quantity:";
		cin>>quantity;
		
		cout<<"Enter the revenue:";
		cin>>revenue;
		
		cout<<"Enter the diamonds:";
		cin>>diamonds;
		
		cout<<"Enter the export_diamonds:";
		cin>>export_diamonds;
		
		
	}
	void si()
	{
 	cout<<"..........<>Company Details<>.........."<<endl<<endl;
  	cout<<"Enter the ceo_name              => "<<ceo_name<<endl;
	cout<<"Enter the comp_name             =>"<<comp_name<<endl;   
  	cout<<"Enter the comp id               => "<<id<<endl;
  	cout<<"Enter the comp_staff_quantity   => "<<quantity<<endl;
  	cout<<"Enter the comp_revenue          => "<<revenue<<endl;
  	cout<<"Enter the raw_diamonds          => "<<diamonds<<endl ;
  	cout<<"Enter the export_diamonds       => "<<diamonds<<endl;
	}
};
string Diamond::ceo_name="Prachi singh";//  static value
string Diamond::comp_name="Nike Company";
 
int main()
{	
Diamond();
Diamond d1=Diamond( 101 , 550, 661, 701, 120);
int n;
cout<<"Enter the num.....";
cin>>n;
for(int i=0; i<n; i++)
{
  	d1.si();
}
return 0;    
}
