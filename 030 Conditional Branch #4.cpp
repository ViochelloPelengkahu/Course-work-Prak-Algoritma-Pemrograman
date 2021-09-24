#include <iostream>
using namespace std;

int main(){
	int a,b;
/*Buatlah program dengan user input yaitu
1. Angka bulan
2. Tahun
kemudian, dari angka bulan dan tahun tersebut, tentukanlah JUMLAH HARI.
Rumus tahun kabisat:
case 2   : if(tahun % 4 == 0)JumlahHari = 29;
                        else JumlahHari = 28;break;
OUTPUT:
Angka bulan: 7
Tahun: 2019
Jumlah hari: 31*/
	cout << "Masukkan Angka Bulan : ";
	cin >> a;
	cout << "Masukkan Tahun :";
	cin >> b;
	switch(a){
		case 1 :
		cout << "Angka Bulan: " << a << "\nTahun: "<< b << "\nJumlah hari: 31" << endl;
		break;
		case 2 :
		if(b%4==0)
		cout << "Angka Bulan: " << a << "\nTahun: "<< b << "\nJumlah hari: 29" << endl;
		else{
			cout << "Angka Bulan: " << a << "\nTahun: "<< b << "\nJumlah hari: 28" << endl;
	}
		break;
		case 3 :
		cout << "Angka Bulan: " << a << "\nTahun: "<< b << "\nJumlah hari: 31" << endl;
		break;
		case 4 :
		cout << "Angka Bulan: " << a << "\nTahun: "<< b << "\nJumlah hari: 30" << endl;
		break;
		case 5 :
		cout << "Angka Bulan: " << a << "\nTahun: "<< b << "\nJumlah hari: 31" << endl;
		break;
		case 6 :
		cout << "Angka Bulan: " << a << "\nTahun: "<< b << "\nJumlah hari: 30" << endl;
		break;
		case 7 :
		cout << "Angka Bulan: " << a << "\nTahun: "<< b << "\nJumlah hari: 31" << endl;
		break;
		case 8 :
		cout << "Angka Bulan: " << a << "\nTahun: "<< b << "\nJumlah hari: 31" << endl;
		break;
		case 9 :
		cout << "Angka Bulan: " << a << "\nTahun: "<< b << "\nJumlah hari: 30" << endl;
		break;
		case 10 :
		cout << "Angka Bulan: " << a << "\nTahun: "<< b << "\nJumlah hari: 31" << endl;
		break;
		case 11 :
		cout << "Angka Bulan: " << a << "\nTahun: "<< b << "\nJumlah hari: 30" << endl;
		break;
		case 12 :
		cout << "Angka Bulan: " << a << "\nTahun: "<< b << "\nJumlah hari: 31" << endl;
		break;
	}
	return 0;
}
