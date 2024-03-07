//Q.1 Write a Program to implement exception handling mechanism for different types of scenarios:
//- a number cannot be divided by zero
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout << "Enter a : ";
	cin >> a;
	cout << "Enter b : ";
	cin >> b;
    try
    {
    	if(b==0)
    	{
    		throw b;
		}
		else
		{
			cout << "Divison is : "<<a/b;
		}
	}
	catch(...)
	{
		cout << "Value can't divide by Zero :"<<endl;
	}
	return 0;
	
}
