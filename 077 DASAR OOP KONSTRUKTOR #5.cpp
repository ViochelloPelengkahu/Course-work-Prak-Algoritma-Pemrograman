/*Buatlah program menghitung VOLUME BALOK (panjang*lebar*tinggi) dengan menggunakan Konstruktor With Argument.

Diketahui Panjang = 10 m, Lebar = 20 m, Tinggi = 30 m.

OUTPUT: Volume Balok 1 = 6000 m3

Petunjuk:
*/

#include <stdio.h>
#include <iostream>
using namespace std;
class Balok{
public:
 double panjang, lebar,tinggi;

Balok(double a, double b,double c){
    panjang=a;
    lebar=b;
    tinggi=c;
 }
 // buat method untuk menghitung volume
 double volume(){
     int a=panjang,b=lebar,c=tinggi;
     return a*b*c;
 }
};
int main()
{
 //buat objek baru dari kelas Balok dan isikan dengan nilai yang diketahui (10,20,30)
 Balok objek(10,20,30);
 cout << "Volume Balok 1 = " << objek.volume() << " m3" << endl;
 // panggil method menghitung volume dan tipe datanya
// deklarasikan method dengan objek dari kelas Balok
// tampilkan hasil perhitungan sesuai OUTPUT yang diminta
  return 0;
}
