//Q.2 Write a Program to demonstrate the use of a scope resolution operator to solve ambiguity errors.
#include<iostream>
using namespace std;
class A
{
	protected:
	int a=20;
};
class B
{
	protected:
	int a=50;	
};
class C:public A ,public B
{
	public:
	void get()
	{
        cout<<"class A->a is:"<<A::a<<endl;
		cout<<"class B->a is :"<<B::a<<endl;
	}
};
int main()
{
	C s1;s1.get();
	return 0;
}
