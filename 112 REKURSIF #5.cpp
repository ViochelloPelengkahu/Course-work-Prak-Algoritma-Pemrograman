#include <iostream>
using namespace std;
int pangkatRekursif(int angka, int pangkat){ //buat fungsi rekursif
    if(pangkat==1)
        return angka;
    else
       return angka * pangkatRekursif(angka,pangkat-1);
}
int main(){ //program utama
    int angka,pangkat;
    cout<<"Angka    : ";// masukkan angka
    cin >> angka;
    cout<<"Pangkat  : ";// masukkan pangkatnya
    cin >> pangkat;
    cout<<"\n";
    cout<<"Hasil: "<< pangkatRekursif(angka,pangkat); // tampilkan hasilnya
    cout<<endl;
}
