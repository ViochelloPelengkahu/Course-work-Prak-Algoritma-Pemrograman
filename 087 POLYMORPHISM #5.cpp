#include <iostream>
#include <string>
using namespace std;
class Mahasiswa  { // buat Class utama dengan nama Mahasiswa
  public:// gunakan acces modifier public
  void profesi(){ //buat function tanpa parameter dengan nama profesi, void
     cout << "Saya seorang mahasiswa\n";
  }
};
class Kuliah : public Mahasiswa{ // buat bentuk lain dari class mahasiswa dengan nama Kuliah
  // gunakan acces modifier public
  public:
  void profesi(){ //buat function tanpa parameter dengan nama profesi, void
     cout << "Tugas saya adalah kuliah\n";
   }
};
class Skripsi : public Mahasiswa{// buat bentuk lain dari class Mahasiswa dengan nama Skripsi
  // gunakan acces modifier public
  public:
  void profesi(){ //buat function tanpa parameter dengan nama profesi, void
     //tampilkan tulisan Saya sedang ambil skripsi
     cout << "Saya sedang ambil skripsi\n";
  }
};
int main() {
  //buat objek saya dari class Mahasiswa
  Mahasiswa saya;
  //buat objek tugas dari class Kuliah
  Kuliah tugas;
  //buat objek status dari class Skripsi
  Skripsi status;
  //objek saya memanggil function profesi
  saya.profesi();
  //objek tugas memanggil function profesi
  tugas.profesi();
  //objek status memanggil function profesi
  status.profesi();
  return 0;
}
