#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int x,y,z;
    string a="Saya ";
    string b="Belajar ";
    string c="C++";
    double p,q,r;
    char ch1='a',ch2='s',ch3='d';
    
    x=30;
    y=30;
    z=8;
    p=54939;
    q=1;
    r=0.428;
    
     cout << "Hasil penjumlahan tipe data integer = " << x+y+z << endl;
     cout << "Hasil penjumlahan tipe data string = " << a+b+c << endl;
     cout << "Hasil penjumlahan tipe data double = " << fixed << setprecision(3) << p+q+r << endl;
     cout << "Hasil penjumlahan tipe data char = Kode ASCII " << ch1+ch2+ch3 << endl;
     cout << "Hasil tipe data char = " << ch1 << ch2 << ch3 << endl;
     
     return 0;
}
