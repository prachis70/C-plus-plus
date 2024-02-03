#include<iostream>
using namespace std;
class In
{
	public:
	int feet;
	int inch;
	int feet1;
	int inch1;
	int sum1=0;
	int y;
	int sum=0;
	void out()
	{
	cout<<"Enter the feet:";
	cin>>feet;
	cout<<"Enter the inch:";
	cin>>inch;
	cout<<"Enter the feet:";
	cin>>feet1;
	cout<<"Enter the inch:";
	cin>>inch1;
	sum=feet+feet1;
	sum1=inch+inch1;
	
	y=sum1/12;
	sum=sum+y;
	sum1=sum1-(y*12);    
    cout<<"inches:"<<sum<<endl<<sum1;		
    }
};
main()
{
	In m1;
	m1.out();
}