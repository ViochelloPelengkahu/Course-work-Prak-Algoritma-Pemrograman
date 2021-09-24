#include <iostream>
using namespace std;

int main(){
int a;
	cout << "Masukan angka : ";
	cin >> a;

	if(a>=0) {
		cout << "Anda Memasukan angka Positif !";
	}else {
		cout << "Anda Memasukan angka Negatif !";
	}
	return 0;
}
