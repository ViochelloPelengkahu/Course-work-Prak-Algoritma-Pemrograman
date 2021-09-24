#include <iostream>
using namespace std;

int main() {
	int a,b,c;
cout << "Masukkan angka pertama : ";
cin >> a;
cout << "Masukkan angka kedua : ";
cin >> b;
cout << "Masukkan angka ketiga : ";
cin >> c;

if(a>b){
	if(a>c)
		cout << "Bilangan terbesar adalah angka pertama, yaitu " << a << endl;
	else{
		cout << "Bilangan terbesar adalah angka kedua, yaitu " << b << endl;
	}
}else if(b>c){
	cout << "Bilangan terbesar adalah angka kedua, yaitu " << b << endl;
}else {
	cout << "Bilangan terbesar adalah angka ketiga, yaitu " << c << endl;
}
return 0;
}
