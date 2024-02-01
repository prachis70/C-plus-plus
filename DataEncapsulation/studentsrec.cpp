//Q.1 Write a Program to create Student Record System for 5 students using Encapsulation. Consider the below-mentioned attributes in the Student class:
//- stu_id
//- stu_name
//- stu_age
//- stu_course
//- stu_city
//- stu_email
//- stu_college
#include<iostream>
using namespace std;
class Student
{
	int stu_id,stu_age;
	string stu_name,stu_course,stu_city,stu_college,stu_email,line;
	
	public:
	void information(int p)
	{
		cout<<"Enter students details..."<<endl;
		cout << "Enter the student id : ";
		cin >> stu_id;
		
		getline(cin,line);
		cout << "Enter the student name : ";
		getline(cin, stu_name);
		
		cout << "Enter the student age : ";
		cin >> stu_age;
		
		getline(cin,line);
		cout << "Enter the student cource : ";
		getline(cin, stu_course);
		
		cout << "Enter the student city : ";
		getline(cin, stu_city);
		
		cout << "Enter the student e-mail : ";
		getline(cin, stu_email);
		
		cout << "Enter the student college : ";
		getline(cin, stu_college);
	}
	void getinfo(int p)
	{
		cout<<endl;
		
		cout<<"student name   => "<<stu_name<<endl;
		cout<<"student course => "<<stu_course<<endl;
		cout<<"student city   =>"<<stu_city<<endl;
		cout<<"student collage=>"<<stu_college<<endl;
		cout<<"student id     =>"<<stu_id<<endl;
		cout<<"student age    =>"<<stu_age<<endl;
		cout<<endl;
	}
	void run(int p)
	{
		for(int i=0;i<5;i++)
		{
		cout<<"student name   => "<<stu_name<<endl;
		cout<<"student course => "<<stu_course<<endl;
		cout<<"student city   =>"<<stu_city<<endl;
		cout<<"student collage=>"<<stu_college<<endl;
		cout<<"student id     =>"<<stu_id<<endl;
		cout<<"student age    =>"<<stu_age<<endl;
		cout<<endl;
		}
	}
	
};
int main()
{
//	Student s1;
//	int i;
//	for(i=0;i<5;i++)
//	{
//		s1.information(5);		
//	}
//	
//	cout<<endl;
//	for(i=0;i<5;i++)
//	{
//		s1.getinfo(5);
//			cout<<endl;
//	}
////	int i;
////	for(i=0;i<5;i++)
////	{
	Student s1;
	s1.information(5);
	s1.getinfo(5);
	s1.run(5);
	return 0;
	}
	
