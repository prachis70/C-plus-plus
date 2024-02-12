//Q.2 Write a Program to demonstrate an example 
//of hierarchical inheritance to get the square and cube of a number.
#include<iostream>
using namespace std;
class X
{
	protected:
	int x,squ,cub;	
};
class Y:public X
{
	public :
	////find square//
    void prachi()
    {
 	    cout<<"Enter the any num :";
	    cin>>x;
        squ=x*x;
	    cout<<"squ is :"<<squ<<endl;
    }
};
class Z:public X 
{
	public :
	void singh()
	{
		//find cub//
		cout<<"Enter the any num :";
		cin>>x;
		cub=x*x*x;
		cout<<"cub is :"<<cub<<endl;
	}
};
int main()
{
	Y y1;
	y1.prachi();
	Z z1;
	z1.singh();
	return 0;
}

