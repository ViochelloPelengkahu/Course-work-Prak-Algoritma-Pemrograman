#include <iostream>
using namespace std;

int main(){
int a;
string nama,nim;
char kelas;
while(1){

cout << "1. Masukan nama\n2. Masukan NIM\n3. Masukan kelas\n4. Exit\nPilihanmu >> ";
cin >> a;
if(a==1){
	cout << "Masukkan data sesuai pilihan = ";
	cin >> nama;
	cout << "=======================\n";
	cout << "Namamu= " << nama << "\n=======================\n";
}else if(a==2){
	cout << "Masukkan data sesuai pilihan = ";
	cin >> nim;
	cout << "=======================\n";
	cout << "NIMmu=  " << nim << "\n=======================\n";
}else if(a==3){
	cout << "Masukkan data sesuai pilihan = ";
	cin >> kelas;
	cout << "=======================\n";
	cout << "Kelasmu= " << kelas << "\n=======================\n";
}else{
	cout << "Anda sudah keluar dari aplikasi !";
	break;
}
}
	return 0;
}
