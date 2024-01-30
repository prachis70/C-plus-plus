#include<iostream>
using namespace std;
class In
{
	public:
	int feet;
	int inch;
	void out()
	{
	cout<<"Enter the feet:";
	cin>>feet;
    inch=feet*12;
    
    cout<<"inches:"<<inch<<endl;
	cout<<"Enter the inch:";
	cin>>inch;
    feet=(feet*inch)+1;
    cout<<"inches:"<<inch<<endl;		
    }
};
main()
{
	In m1;
	m1.out();
}