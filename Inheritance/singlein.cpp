//Q.1 Write a Program to find the sum of all three number’s cubes by implementing single-level inheritance: Class X->Class Y
//- Class X has the following members: a, b & c attributes in integer data type
//- Class Y has the following members: setData() and getData() methods
#include<iostream>
using namespace std;
class x
{
	protected:
	int a,b,c;
	int sum=0,add1,add2,add3;
};
class Y:public x
{
	public:
	void p()
	{
		cout<<"Enter the num of a :";cin>>a;cout<<"Enter the num of b :";cin>>b;cout<<"Enter the num of c :";cin>>c;		
	}
	void cub()
	{
		add1=a*a*a;add2=b*b*b;add3=c*c*c;sum=add1+add2+add3;cout<<"cub sum is :"<<sum;
	}
};
int main()
{
	Y y1;y1.p();y1.cub();
}