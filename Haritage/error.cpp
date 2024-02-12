//Q.4 WAP to solve ambiguity error.
#include<iostream>
using namespace std;
class A
{
	protected:
	int a=5;
};
class B:public A
{
	protected:
	int b=10;
};
class C :public A
{
	public:
    void f()
   {
	cout<<A::a<<endl;
	cout<<B::a<<endl;
   }
};
int main()
{
   c c1;
   c1.f();
 return 0;	
}