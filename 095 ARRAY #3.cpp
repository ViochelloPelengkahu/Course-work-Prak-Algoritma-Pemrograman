#include <iostream>
#include <array>
using namespace std;

int main(){
    array<string, 5> names = {"Alice","Bob","Charlie","Dana","Emily"}; //berikan nama Alice, Bob . Charlie, Dana, Emily

    // cetak di konsol "Ada 5 data di dalam array: "", panggil method size() untuk mengambil panjang array 
    cout << "Ada " << names.size() << " data di dalam array:\n";
    // for loops untuk mengambil data di array
    // ambil indexnya kemudia tampilkan isi array. dipisahkan dengan "." (titik), hasil akhir seperti pada penjelsan soal
    for(int i=0;i<names.size();i++){
        cout << i << ". " << names[i]<<endl;
    }
    return 0;
    }
