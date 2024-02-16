//Q.1 Write a Program to overload < operator to find which object contains a higher value from given 2 numbers.
// ++,-
#include<iostream>
using namespace std;

class In
{
	int a,b;
	public :
	void set()
	{
		cout <<"Enter the any value : ";cin>>a;	
	}
	void get()
	{
		cout <<  "first value is : " << a  << endl <<  "second value is : " << b;
	}	
	In operator+(In &z1)
   {
   	    In temp;
   	    temp.b=this->b=z1.a;
   	    temp.a=this->a=a;
   	    temp.a = a+1;
   	    temp.b = b+1;
   	    return temp;
   }
};

int main()
{
	In z1,z2,z3;z1.set();z2.set();z3 = z1+z2;z3.get();
	return 0;
}
