#include <iostream>
#include <string>
using namespace std;
class Mahasiswa
{
protected://access modifier untuk melindungi data mahasiswa
string nama[30];// variabel nama dengan tipe char dgn panjang array[30]
string alamat[100];// variabel alamat dengan tipe char dgn panjang array[100]
unsigned long umur;// variabel umur dengan tipe char unsigned long

public://buat access modifier untuk akses data mahasiswa
void getData()//buat function getdata(), void
{
cout << "input nama : \n"; cin >> nama[0];//tampilkan tempat untuk input nama:
cout << "input alamat : \n"; cin >> alamat[0];//tampilkan tempat untuk input alamat:
cout << "input umur : \n"; cin >> umur;//tampilkan tempat untuk input umur:
}
 void setData()//buat function setdata(), void
{
cout << "nama : " << nama[0]<<endl;
cout << "alamat : " << alamat[0]<<endl;//tampilkan hasil input untuk alamat
cout << "umur : " << umur;//tampilkan hasil input untuk umur
}
};
//program utama
int main(){
Mahasiswa m1; //buat objek maba
cout<<endl;
cout<<"Inputan Data mahasiswa\n";
//objek maba memanggil function getdata
m1.getData();
cout << "\nData mahasiswa  :\n";
//objek maba memanggil function setdata
m1.setData();
return 0;
}
