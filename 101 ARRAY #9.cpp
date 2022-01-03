#include <iostream>
#include <array>
#include <iomanip>

using namespace std;
int main(){
	int a;
	cout << "Masukkan UKURAN Array : ";
	cin >> a;
	int vio[a][a];
	for(int i=0;i<a;i++){
		for(int j=0;j<a-1;j++){
			cin >> vio[i][j];
		}
	}
	cout << "Tampilkan DATA\n";
	cout << "Nilai Baris [1]: "<< vio[0][0] << " & Nilai Kolom [1]: " << vio[0][1] << endl;
	cout << "Nilai Baris [2]: "<< vio[1][0] << " & Nilai Kolom [2]: " << vio[1][1] << endl;
	cout << "Nilai Baris [3]: "<< vio[2][0] << " & Nilai Kolom [3]: " << vio[2][1] << endl;

return 0;
}
