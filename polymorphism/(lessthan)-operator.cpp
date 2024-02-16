//Write a Program to overload < operator to find which object contains a higher value from given 2 numbers.

#include<iostream>
using namespace std;
class M
{
   int a,b;
   public : 
   void setter()
   {
       cout << "Enter the value:";cin >> a;      
   }	  
   void getter()
   {
   	(a<b)?cout << "higher value is : " << b:cout << "higher value is : " << a;	  	   
   }  
   M operator<(M &m1)
   {
   	  M temp;
	  temp.b=this->b = a;
   	  temp.a=this->a = m1.a;
   	  return temp;
   }
};
main()
{   
	M m1,m2,m3;m1.setter();m2.setter();m3=m1<m2;m3.getter();  
    return 0;
}
