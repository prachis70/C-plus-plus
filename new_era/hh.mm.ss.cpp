#include<iostream>
using namespace std;
class In
{
	public:
	int s,m,h;
	int time;	
   void up()
   {
    cout<<"Enter the sec:";
	cin>>time;	
	h=time/3600;
	time=time%3600;
	m=time/60;
	s=time%60;
		
	cout<<h<<"hr"<<endl<<m<<"m"<<endl<<s<<"s"<<endl;
   }
};
int main()
{
In m1;
m1.up();
return 0;	
}
