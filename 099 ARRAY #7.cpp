#include <iostream>
#include <array>
#include <iomanip>

using namespace std;
int main(){
	array<int,5>vio;
	int jumlah=0;
	for(int i=0;i<vio.size();i++){
		cout << "Isi indeks ke [" << i << "] = ";
		cin >> vio[i];
		jumlah=jumlah+vio[i];
	}
	cout << "Hasil penjumlahan semua elemen array = " << jumlah;
return 0;
}
