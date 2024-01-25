#include<iostream>
using namespace std;
main()
{
	int n;
	cout<<"enter the num:";
	cin>>n;
	int i;
	int a[n];
	for(i=0;i<n;i++)
	{
		cout<<"enter:";
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
		
			cout<<a[i]<<"\n";
			
		}
    }
}
