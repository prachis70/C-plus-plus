//Q.1 Write a Program that defines a shape class with a constructor that gives value to width and height. 
//Then define two sub-classes triangle and rectangle, that calculate the area of the shape area (). In the main, define two objects a triangle and a rectangle, 
//and then call the area() function using these two objects.
#include<iostream>
using namespace std;
class Shape
{
	protected :
	int heigth,width,area;
	//constructor
	public:
	Shape()
	{cout<<"Enter the height :";cin>>heigth;
	cout<<"Enter the width :";cin>>width;}	
};
class Triangle:public Shape
{
	//find tringle
	public:
	void tri()
	{area=heigth*width;cout<<"area is  :"<<area<<endl;}
};
class Rectangle:public Shape
{
	//find rectangle
	public:
	void rec()
	{area=(heigth*width)*0.5;cout<<"area is  :"<<area<<endl;}
};
int main()
{
	Triangle t1;t1.tri();Rectangle r1;r1.rec();
	return 0;
}
