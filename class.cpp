# include <iostream>
using namespace std;

class base
{
   char small;
public:
   void loadalpha(char c)
  {
       small = c;
  }
};

int main()
{
 
base b;
b.loadalpha('a');
cout<< sizeof(b)<<endl;
return 0;
}
