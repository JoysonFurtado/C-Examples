#include<iostream>
#include<typeinfo>
using namespace std;
class Base {
public:
virtual void disp ( ) { cout << "Base" << endl;}
};
class Derive:public Base {
public:
void disp ( ) { cout << "Derive"  << endl;}
};
int main ( ) {
Base *ptr= NULL;
Base bobj,*bptr;
Derive dobj,*dptr;
bptr = & bobj;
cout << typeid (* bptr).name ( ) << endl;
bptr = & dobj;
cout << typeid (bptr).name ( ) << endl;
cout << typeid ( *bptr ).name ( ) << endl;
bptr -> disp ( );
dptr = &dobj;
cout << typeid (*dptr).name ( ) << endl;
try
{
cout << typeid(*ptr).name() << endl ;
}
catch (bad_typeid & obj )
{
cout <<"exception occured" << endl;
cout <<obj.what() << endl;
}
return 0;
}