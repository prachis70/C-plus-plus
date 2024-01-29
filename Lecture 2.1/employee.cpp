//Q.1 Write a Program to create an Employee Record System using the Class and object of any 5 employees. Consider the below-mentioned attributes in the Employee class:
//- emp_id
//- emp_name
//- emp_age
//- emp_role
//- emp_salary
//- emp_city
//- emp_experience
//- emp_company_name
#include<iostream>
#include<string.h>
using namespace std;
class info
{
	public:
	//string name[20];
	int id,age,salary,experience;
    string name,role,city,company_name;
	
	void on()
    {
    getline(cin,name);	
	cout<<"Enter your name :";
	cin>>name;
	
	getline(cin,role);
	cout<<"Enter your role :";
	cin>>role;
	
	getline(cin,city);
	cout<<"Enter your city :";
	cin>>city;
	
	getline(cin,company_name);
	cout<<"Enter your company_name :";
	cin>>company_name;
	
	cin.ignore();
	
	cout<<"Enter your id :";
	cin>>id;
	
	cout<<"Enter your age :";
	cin>>age;
	
	cout<<"Enter your salary : ";
	cin>>salary;
	
	cout<<"Enter your experience : ";
	cin>>experience;
	
	
	cout<<"---------#employee#....--------\n";
	
	cout<<name<<endl;
	cout<<role<<endl;
	cout<<city<<endl;
	cout<<company_name<<endl;
   }	
};
int main()
{
  int i;
  for(i=1;i<5;i++)
  {
  info m1;
  m1.on();
  }	
}
//  info m1;
//  m1.on();
