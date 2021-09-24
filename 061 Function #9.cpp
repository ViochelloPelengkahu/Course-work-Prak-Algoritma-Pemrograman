#include<iostream>

using namespace std;


void kali(int a, int b, int c=0);

int main() {
   int q,w,e=0; //inisialisasi variable disni
    cout << "Masukan Angka Pertama : ";
   // terima input user
   cin>>q;
   cout << "Masukan Angka Kedua : ";
   cin>>w;// masukan ke number 2

   cout << "Angka Pertama Sebelum di kirim ke Fungsi Pointer : " << q << ",  Angka kedua : " << w <<", Hasil awal : " << e<< endl;//lengkapi code ini..

  kali(q,w,e);

}
void kali(int a, int b, int c) { //buat fungsi kali disini, terima parameter pointer, 3 argument
  c=a*b; // argument 3 = arg 1 * arg 2
   cout << "Setelah dikirim ke Fungsi Pointer : " << a << ",  Angka kedua " << b << ", Hasil akhir : " << c << endl;
}
