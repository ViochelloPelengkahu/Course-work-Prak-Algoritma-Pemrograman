#include <iostream>
using namespace std;

int main(){
    
    int a,b,pajak;
    cout << "Input Gaji Pokok = "; cin >> a;
    b=a + (a*12/100);
    pajak=(a*10/100);
    b = b-pajak;
    cout << "Output Gaji Bersih = " << b << endl;
    
    return 0;
}
