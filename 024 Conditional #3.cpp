#include <iostream>
using namespace std;

int main(){
char b;
cout << "Input Nilai Anda (A - E): ";
cin >> b;
if(b=='A')
	cout << "Mantap !. Pertahankan!";
else if(b=='B') 
	cout << "Sudah Baik. Usahakan lebih baik lagi !\n";
else if(b=='C')
	cout << "Lolos !. Lebih banyak belajar !\n";
else if(b=='D')
	cout << "Tidak Lulus !. Kurangi main dan tambah belajar !\n";
else if(b=='E')
	cout << "Tidak Lulus !. Absensi kurang dari 80% atau Tidak ikut UAS atau Tidak tanda tangan DPNA !\n";
else{
	cout << "Tidak ada Format Nilai tersebut !" << endl;
}
return 0;
}
