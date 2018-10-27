#include <iostream>
using namespace std;


int main()
{
int a,b,c;
try
{
	cout<<"enter the numerator"<<endl;
	cin>>a;
	cout<<"enter the denominator"<<endl;
	cin>>b;
	if(a % b)
	{
	throw b;
	}
	else
	{
	cout<<"Result is "<< a/b<<endl;
	}
return 0;
}
catch(...)
{
cout<< "You cant divide numerator by "<< b <<endl;
}
return 0;
}
