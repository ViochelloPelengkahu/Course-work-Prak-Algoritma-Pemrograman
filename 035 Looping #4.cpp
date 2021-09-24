#include <iostream>
using namespace std;

int main(){
    int  a,b,c=0;
    cout << "Masukan Angka = ";
    cin >> a;
    b = a;
    while(b>0){
	c = c + b%10;
	b = b / 10;
}
cout <<"Hasil Penjumlahan dari angka "<< a << " adalah " << c;
return 0;
}
