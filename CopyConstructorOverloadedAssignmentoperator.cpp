#include<iostream>
#include<string.h>
using namespace std;
class CEmployee {
char * Name;
int EmpId;
public:
CEmployee () {
cout << "Default Constructor" << endl;
Name = new char [12];
strcpy (Name, "default");
EmpId = 101;
}
CEmployee (const char * n, int r) {
cout << "Parameterized Constructor" << endl;
Name = new char [strlen (n) +1];
strcpy (Name, n);
EmpId = r;
}
CEmployee (const CEmployee & Csobj) {
cout << "Copy Constructor" << endl;
Name = new char [strlen (Csobj.Name) +1];
strcpy (Name, Csobj.Name);
EmpId = Csobj.EmpId;
}
~CEmployee () {
cout << "Destructor" << endl;
delete [ ] Name;
}
CEmployee & operator = (const CEmployee &);
const char * Get_Name ( );
int Get_EmpId ( );
void Change_Name (const char *);
void Change_EmpId (int);
};
CEmployee & CEmployee :: operator = (const CEmployee & object) {
cout << "Overloaded Assignment operator function" << endl;
if(this == & object)
return *this;
delete [ ] Name;
Name = new char [strlen (object.Name) +1];
strcpy(Name, object.Name);
EmpId = object.EmpId;
return * this;
}
const char * CEmployee :: Get_Name ( ) {
return Name;
}
int CEmployee :: Get_EmpId ( ) {
return EmpId;
}
void CEmployee :: Change_Name (const char * n) {
strcpy (Name, n);
}
void CEmployee :: Change_EmpId (int r) {
EmpId = r ;
}
void Display ( CEmployee sobj) {
cout << sobj.Get_Name ( ) << "\t" << sobj.Get_EmpId ( ) << endl;
}
int main ( ) {
CEmployee S1 ("Stroustrup", 120);
CEmployee S2;
S2 = S1;
cout << S1.Get_EmpId ( ) << endl;
cout << S2.Get_EmpId ( ) << endl;
cout << S1.Get_Name ( ) << endl;
cout << S2.Get_Name ( ) << endl;
S2.Change_Name ("Ritchie");
S2.Change_EmpId (100);
cout << S1.Get_EmpId ( ) << endl;
cout << S2.Get_EmpId ( ) << endl;
cout << S1.Get_Name ( ) << endl;
cout << S2.Get_Name ( ) << endl;
Display (S1);
Display (S2);
return 0;
}