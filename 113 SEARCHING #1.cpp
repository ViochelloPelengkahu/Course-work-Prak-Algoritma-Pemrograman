#include <iostream>
using namespace std;

// buat coding algoritma linear search dengan 3 parameter (array, panjang array, nilai yg akan dicari)
int vio(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
        return -1;
}
int main(void)
{
int x;	// deklarasi var x tipe int sebagai nilai yang akan dicari
	int arr[] = { 2, 3, 4, 10, 40, 1, 32, 19, 53 };
	cout << "Masukan nilai yang akan dicari : " ;
	cin >> x;
	int n = sizeof(arr) / sizeof(arr[0]); // panjang array

	 // panggil function linear search masukan ke sebuah variabel yg tipe int
   // periksa, jika data tidak ditemukan cetak "Tidak ditemukan nilai di array !" , bisa gunakan ternary operator
    // jika data ditemukan cetak "Nilai ditemukan pada index (variable pada line 15)", bisa gunakan ternary operator
	int result = vio(arr, n, x);
    (result == -1)
        ? cout << "Tidak ditemukan nilai di array !"
        : cout << "Nilai ditemukan pada index " << result;

	return 0;
}
