#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout << "Masukan Angka = ";
    cin >> a;
 b=1;
 for(int c=1;c<=a;c++){
        b=b*c;
    }
    cout << "Hasil kali " << a << " angka natural adalah = " << b << " ";
    return 0;
}
