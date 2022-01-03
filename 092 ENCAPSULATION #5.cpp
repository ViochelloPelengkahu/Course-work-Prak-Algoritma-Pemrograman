#include <iostream>
using namespace std;
class Komputer{ //buat Class Komputer
protected: //gunakan access modifier protected untuk enkapsulasi data
 string Processor = "Intel Core i7-10750g 3.6Ghz"; // buat variabel dengan nama Processor dengan tipe string dan berisi tulisan Intel Core i7-10750g 3.6Ghz
};
class Laptop : public Komputer{ //buat class baru yaitu class Laptop dari class Komputer menggunakan access modifier public
  public: //gunakan access modifier public untuk membuat function dari class Laptop
   string cekProcessor(){ //buat function dengan nama cekProcessor() bertipe string
    this->Processor;
    return Processor; // return nilai dari variabel Processor
   }
};
//program utama
int main(){
  //buat objek laptopSaya dari class Laptop
  Laptop laptopSaya;
  // tampilkan spek prosesor dari objek laptopSaya dengan memanggil function cekProsessor()
  cout << laptopSaya.cekProcessor();
  return 0;
}
