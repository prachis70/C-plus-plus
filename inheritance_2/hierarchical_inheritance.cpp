//Q.1 Write a Program to print the rate of interest of different banks using hierarchical inheritance:
//- Class RBI -> Class SBI
//- Class RBI -> Class BOB
//- Class RBI -> Class ICICI
//- inherit rate attribute and getROI() method in all child
//classes
#include<iostream>
using namespace std;
class RBI
{
	 
    protected :
    int A,T=1,P=1000;
	float R;	
};
class SBI:public RBI
{
	public :
	void p()
	{
		cout<<"Enter num.......";
		cin>>A;
		A=(P*2.09*T)/100;//S.I = (1000 × 5 × 1)/100 = 50
		cout <<"Rate for SBI  : " << A << endl ;
	}
};
class BOB:public RBI
{
    public :
	void q()
	{
		cout<<"Enter num.......";
		cin>>A;
		A=(P*36.67*T)/100;//S.I = (1000 × 5 × 1)/100 = 50
		cout << "Rate for BOB  : " << A << endl ;
	}
};

class ICI:public RBI
{
    public :
	void r()
	{
		cout<<"Enter num.....:";
		cin>>A;
		A=(P*4.98*T)/100;//S.I = (1000 × 5 × 1)/100 = 50
		cout << "Rate for ICICI  : " << A << endl ;
	}
};
int main()
{
  SBI s;s.p();BOB b;b.q();ICI i;i.r();
  	
  return 0;	
}
//without user input
/*#include<iostream>
using namespace std;
class RBI
{
	 
   protected :
   int S,P=1000,T=2;float R ;
};
class SBI : public RBI
{
	public :
	void p()
	{
	    S=(P*1.50*T)/100;
		cout << "Rate for SBI...... " << S << endl ;
	}
};
class BOB : public RBI
{
	public :
	void q()
	{
		S=(P*2.35*T)/100;
		cout << "Rate for BOB...... " << S << endl ;
	}
};
class ICI : public RBI
{
	public :
	void r()
	{
		S=(P*3.25*T)/100;
		cout << "Rate for ICICI.... " << S << endl ;
	}
};

int main()
{
 	SBI s;s.p();BOB b;b.q();ICI i;i.r();
	return 0;	
}
*/
