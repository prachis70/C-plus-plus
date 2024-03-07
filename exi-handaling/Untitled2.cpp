//Q.1 Write a Program to implement exception handling mechanism for different types of scenarios:
//- a password cannot be validated if it doesn’t contains an uppercase letter

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char password[20];
	int i,l,check=0;
	cout << "Enter Password : ";
	cin >> password;	
	l=strlen(password);
	
	for(i=0; i<=l; i++)
	{
		if(password[i] >= 'A' && password[i] <= 'Z')
		{
		check = 1;
		}
	}
	try
	{
		if(check == 0)
		{
			throw password;
		}
		else
		{
			cout << "Your PassWord is Valid :";
		}
	}
	catch(...)
	{
		cout << "Invalid password :";
	}
	
	return 0;
}
