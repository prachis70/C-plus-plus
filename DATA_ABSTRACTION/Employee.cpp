//Q.1 Write a Program to abstract some attributes of class Admin to prevent them to be inherited by its child classes.
//- Class Admin -> Class Manager
//- Class Manager -> Class Employee
//- Class Admin has the following members:
//company_name
//manager_salary
//employee_salary
//total_staff
//total_annual_revenue
//can_terminate
#include<iostream>
using namespace std;
class Admin 
{
	protected:
    int total_staff=50,annual_revenue=75,can_terminate=4,manager_salary,employee_salary=50000;
	public:	
	Admin()
	{
		cout<<"..............COMPANY_NAME............"<<endl;
		cout<<"..............ROYAL PALACE............"<<endl<<endl;
	}
	public:	
	void print()
	{
		cout<<"---------------ADMIN------------------"<<endl;
		cout<<"please enter the manager_salary :";
		cin>>manager_salary;
		cout<<"please enter the employee_salary :";
		cin>>employee_salary;
		cout<<"please enter the total_staff :";
		cin>>total_staff;
		cout<<"please enter the annual_revenue :";
		cin>>annual_revenue;
		cout<<"manager and empolyee can_terminate :";
		cin>>can_terminate;
		
		
		cout<<"----------------Manager-------------------"<<endl;
		cout<<".........................................."<<endl<<endl;
		cout<<"manager_salary                     :"<<manager_salary<<endl;
		cout<<"employee_salary                    :"<<employee_salary<<endl;
		cout<<"total_staff                        :"<<total_staff<<endl;
		cout<<"annual_revenue                     :"<<annual_revenue<<endl;
		cout<<"manager and empolyee can_terminate :"<<can_terminate<<endl;
		cout<<".........................................."<<endl;
		
		
		cout<<"-----------------Employee-------------------"<<endl;
		cout<<"............................................"<<endl;
  		cout<<"employee_salary                    :"<<employee_salary<<endl;
		cout<<"total_staff                        :"<<total_staff<<endl;
		cout<<"annual_revenue                     :"<<annual_revenue<<endl;
		cout<<"manager and empolyee can_terminate :"<<can_terminate<<endl;
		cout<<".........................................."<<endl;
	}

};
class Manager:virtual public Admin 
{
	public:	
	void print()
	{
		cout<<endl;
		cout<<"----------------Manager-------------------"<<endl;
		cout<<".........................................."<<endl<<endl;
		cout<<"manager_salary                     :"<<manager_salary<<endl;
		cout<<"employee_salary                    :"<<employee_salary<<endl;
		cout<<"total_staff                        :"<<total_staff<<endl;
		cout<<"annual_revenue                     :"<<annual_revenue<<endl;
		cout<<"manager and empolyee can_terminate :"<<can_terminate<<endl;
		cout<<".........................................."<<endl<<endl;
		
  		cout<<"-----------------Employee-------------------"<<endl;
		cout<<"............................................"<<endl;
  		cout<<"employee_salary                    :"<<employee_salary<<endl;
		cout<<"total_staff                        :"<<total_staff<<endl;
		cout<<"annual_revenue                     :"<<annual_revenue<<endl;
		cout<<"manager and empolyee can_terminate :"<<can_terminate<<endl;
		cout<<"..........................................."<<endl<<endl;
	}
};
class Employee:virtual public Manager
{
	public:	
  	void print()
  	{
  		cout<<"-----------------Employee------------------"<<endl;
  		cout<<"............................................"<<endl;
  		cout<<"employee_salary                    :"<<employee_salary<<endl;
		cout<<"total_staff                        :"<<total_staff<<endl;
		cout<<"annual_revenue                     :"<<annual_revenue<<endl;
		cout<<"manager and empolyee can_terminate :"<<can_terminate<<endl;
		cout<<"............................................"<<endl<<endl;
	}
};
int main()
{
	Admin a1;a1.print();
	//Manager m1;m1.print();
    //Employee e1;e1.print();
	return 0;
}
