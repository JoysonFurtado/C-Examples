#include<iostream>
using namespace std;
class CComplex {
  public:
int Real;
int Imaginary;

CComplex ( ) {
Real = 0;
Imaginary = 0;
}
void Set_Details (int, int);
void Display ( );
friend CComplex operator --(CComplex&);
friend CComplex operator --(CComplex&,int);
CComplex operator ++ ( );
CComplex operator ++ (int);
};

CComplex operator --(CComplex& Obj){
  CComplex temp;
  temp.Real= -- Obj.Real;
  temp.Imaginary= -- Obj.Imaginary;
  return temp;
}
CComplex operator --(CComplex& Obj,int){
  CComplex temp;
   temp.Real = Obj.Real --;
   temp.Imaginary= Obj.Imaginary --;
  return temp;
}
void CComplex :: Set_Details (int r, int i) {
Real = r;
Imaginary = i;
}
void CComplex :: Display ( ) {
cout << Real << " + i "<< Imaginary << endl;
}

CComplex CComplex::operator ++ ( ) {
CComplex temp;
temp.Real = ++Real;
temp.Imaginary = ++Imaginary;
return temp;
}

CComplex CComplex::operator ++ (int) {
CComplex temp;
temp.Real = Real ++;
temp.Imaginary = Imaginary ++;
return temp;
}
int main ( ) {
CComplex CObj1, CObj2, CObj3,CObj4,CObj5;
CObj1.Set_Details (10, 20);
CObj2 = ++CObj1;
CObj3 = CObj1++;

CObj1.Display ( );
CObj2.Display ( );
CObj3.Display ( );
CObj4 = --CObj1;
CObj5 = CObj1--;
CObj4.Display ( );
CObj5.Display ( );
return 0;
}