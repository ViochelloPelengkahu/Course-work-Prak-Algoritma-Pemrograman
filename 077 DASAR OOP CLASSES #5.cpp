/*Buatlah program dengan class Mahasiswa yang menggunakan Konstruktor default. Kemudian tampilkan apakah Konstruktor dari class Mahasiswa tersebut berhasil dibuat.

OUTPUT:

Constructor Mahasiswa Berhasil dibuat.

Petunjuk:
*/
#include <iostream>
using namespace std;
//buat kelas mahasiswa
class Mahasiswa{
public:
Mahasiswa(){
    cout << "Constructor Mahasiswa Berhasil dibuat." << endl;
}

//buat Konstructor default mahasiswa
};
 
 //deklarasikan kelas & konstruktor mahasiswa (pakai tanda ::)

int main(){ // program utama
 //Buat Object dari kelas mahasiswa dengan nama budi
 Mahasiswa budi;
 Mahasiswa();
return 0;
}
