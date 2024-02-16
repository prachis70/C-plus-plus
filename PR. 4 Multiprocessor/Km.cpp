//Q.2 Write a Program to add two distances using binary plus (+) operator overloading.
//For example,
//Input:
//input1 => Km: 3, Meter: 1020
//input2 => Km: 2, Meter: 2050
#include<iostream>
using namespace std;

class Dist
{
	int Km,M;
	public :
		void set()
		{
			cout<<"Enter the KiloMeter : ";cin>>Km;
			cout << "Enter the Meter : ";cin>>M;	
		}
		void get()
		{
			cout <<	endl << "Km is => "<<Km;
			cout << endl << "Meter is => "<<M;
		} 	
		Dist operator+(Dist o2)
		{
			Dist temp;	
			temp.Km=(Km+o2.Km)+((M+o2.M)/1000);
			temp.M=((M+o2.M)%1000);
			return temp;
		}	
};
int main()
{
	Dist o1,o2,o3;o1.set();o2.set();o3 = o1 + o2;o3.get();	
	return 0;
}
