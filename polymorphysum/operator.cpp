//Q.1 Write a Program to perform all basic arithmetic. operations such as +, -, *, and / operations by implementing method overloading using 2 classes.
//- use only one method named calculate() in the child class
//- if you pass 2 arguments, perform division
//- if you pass 3 arguments, perform subtraction
//- if you pass 4 arguments, perform multiplication
//- if you pass 5 arguments, perform addition
#include<iostream>
using namespace std;
class Op
{
	protected :
	int a,b,c,d,e;
};
class Pp:public Op
{
	public:
	void imp(int a,int b)
	{
		this->a=a;this->b=b;cout<<"division is :"<<this->a/this->b<<endl;
	}
	void imp(int a,int b,int c)
	{
		this->a=a;this->b=b;this->c=c;cout<<"subtraction  is :"<<this->a-this->b-this->c<<endl;
	}
	void imp(int a,int b,int c,int d)
	{
		this->a=a;this->b=b;this->c=c;this->d=d;cout<<"multiplication  is :"<<this->a*this->b*this->c*this->d<<endl;
	}
	void imp(int a,int b,int c,int d,int e)
	{
		this->a=a;this->b=b;this->c=c;this->d=d;this->e=e;cout<<"addition  is :"<<this->a+this->b+this->c+this->d+this->e<<endl;
	}		
};
int main()
{
	Pp s1;
	s1.imp(45,45);s1.imp(35,56,35);s1.imp(10,20,30,40);s1.imp(2,3,4,5,6);
	return 0;
}

