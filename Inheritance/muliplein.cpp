//Q.2 Write a Program to convert a given degree Celsius temperature into Fahrenheit and convert that Fahrenheit temperature into Kelvin by implementing multilevel inheritance: Class P -> Class Q -> Class R
//- Class P has the following members: temperature attribute in float
//- Class Q has the following members: toFehrenheit() method
//- Class R has the following members: toKelvin() method.
#include<iostream>
using namespace std;
class P
{
	protected :
		float Celsius,Fehrenheit,Kelvin;
};
class Q:public P
{
	public:
	void inFehrenheit()
	{
	  cout<<"Enter the celsius :";cin>>Celsius;	Fehrenheit=(Celsius*9.5)+32;cout<<Fehrenheit;
	}
};
class R:public Q
{
	public:
	void Method()
	{
		Kelvin=5/9*Fehrenheit+459.67;
		cout<<Kelvin;
	}
};
int main()
{
	Q q1;
	q1.inFehrenheit();
	R r1;
	r1.Method();
	return 0;
}
