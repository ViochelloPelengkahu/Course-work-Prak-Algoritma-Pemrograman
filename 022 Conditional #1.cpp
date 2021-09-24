#include <iostream>
using namespace std;

int main() {

	int a;

	cout << "Masukkan Belanjaan : " << endl;
	cin >> a;
	if(a<150000) {
		cout << "Terima Kasih sudah berbelanja di toko kami" << endl;
	}else{
		cout << "Selamat ! Anda dapat Voucher dari kami !\nTerima Kasih sudah berbelanja di toko kami";	
	}
	cin.get();
	return 0;
}
