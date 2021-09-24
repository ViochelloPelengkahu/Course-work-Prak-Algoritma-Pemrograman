// function example
#include <iostream>
using namespace std;

int kurang (int a, int b)
{
  int z = a-b;
  return z;
}

int main ()
{
  int x=8, y=3, z;
  z=kurang(x,y);
  cout << "Hasil pertama adalah =  " << z << endl;//tampilkan "Hasil pertama.... output variable z"
  //tampilkan "Hasil kedua... output adalah memanggil kembali fungsi kurang untuk mendapatkan angka 5"
  cout << "Hasil kedua adalah =  " << z << endl;
  //tampilkan "Hasil ketiga... output adalah memanggil kembali fugsi kurang dengan memberikan nilai input x dan y pada fungsi"
  cout << "Hasil kegita adalah =  " << kurang(5,3)<< endl;
  // panggil kembali fungsi kurang dengan input / passing nilai x,y dengan menambahkan sebuah konstanta untuk mendapatkan hasil akhir 6, nilai disimpan di variable z
  // tampikan "Hasil keempat.. output variable z (z yang diatas)"
  cout << "Hasil keempat adalah =  " << kurang(77,71)<< endl;
} 
