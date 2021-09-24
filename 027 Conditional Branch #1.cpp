#include <iostream>
using namespace std;

int main() {
    int a;
    
    cout << "Masukan Angka : ";  
    cin >> a;

    if(a!=0)  { //kondisi if luar, cek apakah num tidak sama dengan nol
        
        if(a%2==0){
            cout << "Angka yang anda masukan Genap\n\nTerima Kasih !"  << endl;
        }
        else { // kondisi else dalam
            cout << "Angka yang anda masukan Ganjil\n\nTerima Kasih !" << endl;
        }  
    }
    else { // kondisi else luar
        cout << "Angka yang anda masukan 0, bukan ganjil atau genap\n\nTerima Kasih !"  << endl;
    }
    // Terima Kasih !
    return 0;
}
