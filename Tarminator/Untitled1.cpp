//Q.1 Write a Program to create a class that illustrates the concept of handling all types of exceptions using general exceptions.
#include<iostream>
using namespace std;
class Div
{
	int a,b;
	public:
	void set()
	{
		cout<<"Enter the value of a:";
		cin>>a;
		cout<<"Enter the value of b:";
		cin>>b;
		try
		{
			if(b==0 || b<0 || a<0)
			{
				throw b;
				throw a;
			}
			else
			{
				cout<<"division :"<<a/b<<endl;
			}
		}
		catch(...)
		{
			cout<<"can't divide by zero!";
			cout<<"Negative numbers are not allowed!";
		}
	}
};
int main()
{
	Div d1;	d1.set();
	return 0;
}

