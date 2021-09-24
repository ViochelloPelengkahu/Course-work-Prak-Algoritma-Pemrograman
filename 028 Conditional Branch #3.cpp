#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout << "1. Nasi Goreng Rp10.000\n\n2. Ayam Bakar Rp.25.000\n\n3. Rahang Tuna Rp.40.000" << endl;
    cout << "Pilih Nomor Menu Anda : ";
    cin >> a;
switch(a){
    case 1 :
	cout << "Anda memilih Nasi Goreng\nMasukkan jumlah pesanan";
        cin >> b;
        cout << "Total harga = " << b*10000;
        break;
    case 2 :
	cout << "Anda memilih Ayam Bakar\nMasukkan jumlah pesanan";
        cin >> b;
        cout << "Total harga = " << b*25000;
        break;
    case 3 :
	cout << "Anda memilih Rahang Tuna\nMasukkan jumlah pesanan";
        cin >> b;
        cout << "Total harga = " << b*40000;
        break;
}    
    return 0;
}
