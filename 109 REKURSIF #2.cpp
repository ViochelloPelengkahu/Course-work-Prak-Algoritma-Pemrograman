#include <iostream>
using namespace std;
int a;
void rekursif(int a)// buat function nama rekursif dengan nilai balikan bertipe int
{
    
if (a < 1){  // jika nilai < 1
return; // return
}
else{ // jika nilai > 1
	cout << a << " "; //cetak nilai, pisahkan pakai spasi (" ")
	rekursif(a-1);// panggil fungsi kembali (rekursif) dengan nilai balik nilai - 1
	cout << a << " ";//cetak nilai kembali, pisahkan pakai spasi (" ")
	return; //return
	}
} 

int main()
{
     a=5; // set nilai ke 5
    rekursif(a); // panggil fungsi rekursif dengan nilai yg di set diatas
}
