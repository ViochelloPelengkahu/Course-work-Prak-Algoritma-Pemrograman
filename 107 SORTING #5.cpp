#include <iostream>
using namespace std;
int data[10],data2[10]; // buat 2 variabel array dengan tipe int berisi 10 
int n;
void tukar(int a,int b) // buat fungsi untuk melakukan pertukaran(exchange) data
{
int t;
t = data[b];
data[b] = data[a];
data[a] = t;
}
void Input() // buat fungsi untuk menerima input jumlah data & isi data
{
cout<<"Masukkan jumlah data = ";cin>>n;cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"Masukkan data ke-"<<(i+1)<<" = ";cin>>data[i];
		data2[i] = data[i];
	}
cout<<endl;
}
void Tampilkan() // buat fungsi untuk menampilkan hasil exchange sort
{
	for(int i=0;i<n;i++)
	{
		cout<<data[i]<<" ";}
		cout<<endl;
	}
void exchange_sort() // buat fungsi untuk melakukan exchange sort
{
	for (int i=0; i<n-1; i++) // ganti tanda "?" dengan kode yang sesuai
	{
		for(int j = (i+1); j<n; j++) // ganti tanda "?" dengan kode yang sesuai
		{
		if (data [i] > data[j]) tukar(i,j); // ganti tanda "?" dengan kode yang sesuai
		}
			Tampilkan(); // panggil fungsi tampilkan untuk terus menampilkan proses sorting sampai selesai
	}
cout<<endl;
}
int main() //program utama
{
Input(); //panggil fungsi input data
cout<<"Proses Exchange Sort..."<<endl;cout<<endl;
Tampilkan(); // panggil tampilkan proses sorting
exchange_sort(); // panggil fungsi untuk melakukan proses sorting
}
