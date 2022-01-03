#include <iostream> 
using namespace std; 

void bubbleSort(int num[], int m){
    int tempt;
    for (int i=1; i<m;i++){
  for (int j=m-1; j>=i;j--){
   if (num[j]<num[j-1]){
    tempt=num[j-1];
                num[j-1]=num[j];
                num[j]=tempt;
   }
  }
 }
};

int binSrch(int data[], int frst, int last, int x){
 while(frst <= last){
  int mid = last+(frst-1)/2;
  
  if(data[mid] == x){
   return mid;
  }
  if(data[mid] > x){
   return binSrch(data, frst, mid-1, x);
  }
  else{
  return binSrch(data, mid+1, last, x);}
 }
 return -2;
}

int main(void) { 
 int x;
 int arr[] = {12, 53, 74, 21, 46, 3, 63, 56, 4 };
 
 cout << "Masukan nilai yang akan dicari : " ;
 cin >> x;
 
 int n = sizeof(arr) / sizeof(arr[0]);  // panjang array
    bubbleSort(arr, n);                  // panggil bubble sort untuk mensort array sebelum di binarySearch
 
    int lokasi = binSrch(arr, 0, n-1, x);  //panggil binarysearch masukan ke variable tipe int 
    
    if (lokasi == -2){                                           // periksa, jika data tidak ditemukan cetak "Tidak ditemukan nilai di array !" , bisa gunakan ternary operator
    cout<<"Tidak ditemukan nilai di array"<<endl;
    }
 else{
  cout<<"Nilai ditemukan pada index "<<lokasi<<endl;       // jika data ditemukan cetak "Nilai ditemukan pada index (variable pada line 15)", bisa gunakan ternary operator
 }

 return 0; 
}
