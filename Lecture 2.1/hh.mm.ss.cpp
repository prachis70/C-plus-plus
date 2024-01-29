//Q.3 Write a program to convert second into hh: mm: ss.
#include<iostream>
using namespace std;
class Time
{
	public:
    int sec;
	int min;
	int hr;
	int s;
	void mony()	
	{
	cout<<"Enter the sec:";
	cin>>sec;
	hr=sec/3600;
	min=(sec%3600)/60;
	s=sec%60;
	cout<<"hr"<<endl<<hr<<"min"<<endl<<min<<"s"<<endl<<s;
	}
};	
int main()
{
	Time s1;
	s1.mony();
}
