#include <iostream>
using namespace std;

int duplikasi(int x){
    x=x*2;
    return x;
}

int main ()
{
  int x=1, y=3, z=7;
  x=duplikasi (x);
   y=duplikasi (y);
    z=duplikasi (z);//panggil function
 cout << "x=" << x << ",y= " << y << ",z =" << z;
  return 0;
}
