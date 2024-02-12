#include<iostream>
using namespace std;

class A
{
	protected :
		int id;string name,role;

		void setter()
		{
			cout<<"Enter the  ID : ";
			cin>>id;
			cin.ignore();
			cout<<"Enter the  Name : ";
			getline(cin,name);	
			cout<<"Enter the  Role : ";
			getline(cin,role);
		}			
};
class B : public A
{
	protected :
	int salary,exp;
		void setter()
		{
			A::setter();
			cout<<"Enter the  Salary : ";
			cin>>salary;
			cin.ignore();	
			cout<<"Enter the Wrok Experience : ";
			cin>>exp;
		}	
};
class C:public B
{
	protected :
		string comp_name,address;

		void setter()
		{	
			B :: setter();
			cin.ignore();
			cout << "Enter the Company Name : ";
			getline(cin,comp_name);	
			cout<<"Enter the  Address : ";
			getline(cin,address);
		}		
		void getter()
		{
			cout << "Employee's Name  :"<<name<<endl;cout<<"Employee's Role  :"<<role<<endl;cout << "Employee's Salary  : " <<salary << endl;	
		}		
};

class D:public C
{
	protected :
	string email,contect;
	public :
	void setter()
		{
			C::setter();
			cout<<"Enter the E-mail id : ";
			getline(cin,email);
			cout<<"Enter the Employee contect : ";
			cin>>contect;
		}
	
		void getter()
		{
			C::getter();
			cout <<endl<<endl<<"Details Here"<<endl;
			cout << "..................." << endl;
			cout << " ID          : " <<id<<endl;
			cout << " Experience  : " <<exp<<"Year"<<endl;	
			cout << " Company Name: " <<comp_name<<endl;
			cout << " Address     : " <<address <<endl;
			cout << " E-mail      : " <<email<<endl;
			cout << " Contect     : " <<contect<<endl;
			cout << "...................." << endl;
		}		
};


int main()
{
	D p;
	p.setter();
	p.getter();

	return 0;
}
