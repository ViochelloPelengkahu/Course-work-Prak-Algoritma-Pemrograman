#include <iostream>
using namespace std;

int main() {
	float C,F,R,K;

	cout << "Masukkan suhu Celcius" << endl;
	cin >> C;
	F = C*9/5 + 32;
	R = C*4/5;
	K = C + 273.15;
	cout <<"Hasil konversi suhu: \n" << "Kelvin:  " << K << "\n" << "Fahrenheit: " << F <<"\nReamur: " << R << endl;
	cin.get();

	return 0;
}
