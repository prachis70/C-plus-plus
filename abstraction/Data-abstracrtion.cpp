//Q.1 Write a Program to perform some basic mathematical operations using an Abstract class such as:
//- the area of a circle
//- the area of a triangle
//- the area of a rectangle
//- use one single pure virtual function named calculate() to perform all the above operations
#include<iostream>
using namespace std;
class Shape
{
	public:
	int r,h,b,area;
	const float pi= 3.14;
	virtual void calculate()=0;
};
class Circle :public Shape
{
	public:
	void calculate()
	{
		cout<<"Enter the any num :";
		cin>>r;
		cout<<"Enter the any num :";
		cin>>r;			
	    area=pi*r*r;	
	    cout<<"area is :"<<area<<endl;  
	}
};
class Triangle:public Shape
{
	public:
	void calculate()
	{
	    cout<<"Enter the any num :";
		cin>>r;	
		cout<<"Enter the any num :";
		cin>>b;		
		area=0.5*r*b;
		cout<<"area is :"<<area<<endl;
	}
};
class Rectangle:public Shape
{
	public:
	void calculate()
	{
		cout<<"Enter the any num :";
		cin>>r;
		cout<<"Enter the any num :";
		cin>>h;
		area=r*h;
		cout<<"area is :"<<area<<endl;
	}			
};
int main()
{
    Circle c1;c1.calculate();
	Triangle t1;t1.calculate();
	Rectangle r1;r1.calculate();	
	return 0;
}