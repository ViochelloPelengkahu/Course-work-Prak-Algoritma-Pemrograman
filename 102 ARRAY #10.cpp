#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n; // buat variabel integer n untuk perulangan
    string nama[10];// buat variabel string array untuk nama & status berisi 10 elemen array
    int nilai[10]; // buat variabel integer array untuk nilai berisi 10 elemen array
    string status[10];
    cout << "Masukkan input: ";
    cin >> n;// buat input untuk memasukkan jumlah data
    // masukkan nilai input ke variabel n
    cout<<endl;

    for (int i=0;i<n;i++) { //buat perulangan untuk masukkan nama & nilai
        cout<<endl;
       cout << "Data ke-" << i;
        //cetak tulisan Data ke-1, 2, dst sesuai jumlah data
        // buat input untuk masukkan nama sesuai jumlah data
        cin>>nama[i];
        // buat input untuk masukkan nilai sesuai jumlah data
        cin>>nilai[i];
       
        if (nilai[i]<=50) { //buat if untuk status nilai lulus & tidak lulus
             status[i]="Tidak Lulus"; // kondisi tidak lulus
        } else {
            status[i]="Lulus"; //kondisi lulus
        }
    }
    cout<<endl;
    cout<<"TABEL NILAI MAHASISWA"<<endl;
    cout<<"-------------------------------------------"<<endl;
    cout<<"No Nama Nilai Status"<<endl;
    cout<<"-------------------------------------------"<<endl;

    for (int j=0;j<n;j++) { //buat perulangan untuk cetak masing-masing nama, nilai, dan status

    cout<<j+1<<" "<<nama[j]<<" "<<nilai[j]<<" "<<status[j]<<endl;//tampilkan tabel
    cout<<"-------------------------------------------"<<endl;
    }
}
