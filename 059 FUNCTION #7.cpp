#include <iostream>
using namespace std;

void cetak(string);
void blabla(int a,int b,int c){
if(a>b){
	if(a>c)
		cout << "Nilai Terbesar adalah is: " << a << endl;
	else{
		cout << "Nilai Terbesar adalah is: " << b << endl;
	}
}else if(b>c){
	cout << "Nilai Terbesar adalah is: " << b << endl;
}else {
	cout << "Nilai Terbesar adalah is: " << c << endl;
}
}

int main() {
	int a,b,c;
cout << "Masukkan angka pertama : ";
cin >>a >>b >> c;

blabla(a,b,c);

return 0;
}
