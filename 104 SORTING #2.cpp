#include <bits/stdc++.h> 
using namespace std; 


void insertionSort(int array3[], int n);
void printArray(int array3[], int n);
int main() { 
	 //buat array tipe int berikan nilai : 43, 12, 87, 32, 98
	 int vio[] = {43,12,87,32,98};
	int n = sizeof(vio) / sizeof(int); // panjang array (panggil function sizeof() / sizeof(index0 pada array)

	insertionSort(vio,n);
	printArray(vio,n);
	// panggil function printArray

	return 0; 
} 
void insertionSort(int array3[], int n){
    int i, temp, j;
    for (i = 1; i < n; i++){
        temp = array3[i];
        j = i - 1;
 
        while (j >= 0 && array3[j] > temp){
            array3[j + 1] = array3[j];
            j = j - 1;
        }
        array3[j + 1] = temp;
    }
}

void printArray(int array3[], int n){
    int i;
    for (i = 0; i < n; i++)
        cout << array3[i] << " ";
    cout << endl;
}
