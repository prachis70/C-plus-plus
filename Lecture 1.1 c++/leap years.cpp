#include<iostream>
using namespace std;
main()
{
	int n,y;
	cout<< "enter the n:";
	cin>>n;
	cout<< "enter the y:";
	cin>>y;	
	int i,a[n];
	for(i=n;i<=y;i++)
	{
		if(i%4==0)
		{
			cout<<i<<endl;
		}
	}
	
}
