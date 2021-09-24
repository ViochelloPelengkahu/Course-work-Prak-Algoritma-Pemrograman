#include <iostream>
using namespace std;
int main(){
	int a,b,c,d;
	char e;
	cout << "Masukkan nilai UAS : \n";
	cin >> a;
	cout << "Masukkan Nilai UTS : \n";
	cin >> b;
	cout << "Masukkan Nilai Tugas : \n";
	cin >> c;
	d = (0.35*b)+(0.45*a)+(0.2*c);
	switch(d){
		case 85 ... 100: 
		e='A';
		cout << "Nilai akhir angka: "<< d << "\nNilai akhir huruf: " << e;
		break;
        case 70 ... 84:
        e='B';
		cout << "Nilai akhir angka: "<< d << "\nNilai akhir huruf: " << e;
        break;
        case 55 ... 69:
        e='C';
		cout << "Nilai akhir angka: "<< d << "\nNilai akhir huruf: " << e;
        break;
        case 40 ... 54:
        e='D';
		cout << "Nilai akhir angka: "<< d << "\nNilai akhir huruf: " << e;
        break;
        case 0 ... 39:
        e='E';
		cout << "Nilai akhir angka: "<< d << "\nNilai akhir huruf: " << e;
        break;
    }
    return 0;
}
