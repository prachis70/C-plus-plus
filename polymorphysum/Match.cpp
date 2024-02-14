//Q.2 Write a Program to implement method overriding by following the below-mentioned criteria:
//- Class Cricket -> Class T20Match
//- Class Cricket -> Class ODIMatch
//- Override the getTotalOvers() method in both classes.

#include<iostream>
using namespace std;
class Cricket
{
  protected :
  int a,b,c,d;	
};
class T20Match:public Cricket
{
	public:
	void getTotalOvers(int a,int b ,int c,int d)
	{
		this->a=a;
		this->b=b;
		this->c=c;
		this->d=d;
		cout<<"all over & runs  :"<<this->a<<endl;
		cout<<"all over & runs  :"<<this->b<<endl;
		cout<<"Dhoni runs :"<<this->c<<endl;
		cout<<"Virat runs :"<<this->d<<endl;
	}
};
class  ODIMatch:public Cricket
{
		public:
	void getTotalOvers(int a,int b ,int c,int d)
	{
		this->a=a;
		this->b=b;
		this->c=c;
		this->d=d;
		cout<<"all over & runs  :"<<this->a<<endl;
		cout<<"all over & runs  :"<<this->b<<endl;
		cout<<"Dhoni runs       :"<<this->c<<endl;
		cout<<"Virat runs       :"<<this->d<<endl;
	}
};
int main()
{
	 ODIMatch o1;
	 o1. getTotalOvers(20,60,151,101);
	return 0;
}
