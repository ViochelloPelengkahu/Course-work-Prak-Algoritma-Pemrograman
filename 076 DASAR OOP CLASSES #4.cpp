#include <iostream>
using namespace std;

class Ruangan{
   // access modifer private
   private:
   //deklarasi attribnt / variabel panjang lebar tinggi
    int lebar,tinggi;
    public :
    int panjang;
   public: //access modifier public untuk method
// buat method isiData (non return value, 3 argument, panjang lebar tinggi)
    void isiData(int a,int b,int c){
        this->panjang = a;
        lebar = b;
        tinggi = c;
    }
//buat method hitungLuas
int hitungLuas(){
    return panjang*lebar;
}
//buat method hitungVolume
int hitungVolume(){
    return panjang*lebar*tinggi;
}
};


int main() {
int a,b,c;
   //inisialisasdi variabel a,b,c untuk inpiut
    // create object of Room class
    cin >> a >> b >> c;
    Ruangan kamar1;
    kamar1.isiData(a,b,c);
// buat objek kamar1 dari kelas Ruangan
   // cin input a b c
  
    // pass the values of private variables as arguments
// pangggil method isiData masukan argumen a b c kedalamnya
    //cout << kamar1.panjang;
    cout << kamar1.panjang << endl;
    cout <<"Luas Ruangan =  "<< kamar1.hitungLuas() << endl;
    cout <<"Volume Ruangan =  " << kamar1.hitungVolume() << endl;
    //Luas Ruangan = (panggil method hitungLuas)
    //Luas Ruangan = (panggil method hitungVolume)

    return 0;
}
