#include <iostream>

using namespace std;
void swap(int* a, int* b);
int p (int array[], int terkecil, int terbesar);
void quick_sort(int array[], int terkecil, int terbesar);
int main(){
int i,n=5;
int data[n];

for(i=0;i<n;i++)
{cout<<"Masukan data ["<<i+1<<"] : ";cin>>data[i];} //input data
quick_sort(data,0,n-1);//hasil pengurutan
cout<<"\nHasil pengurutan:\n";
for(i=0;i<n;i++)
{
//tampilkan hasil quick sort
cout << data[i] << " " << endl;
}
return 0;
}
void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
int p (int array[], int terkecil, int terbesar) 
{ 
    int pivot = array[terbesar];
    int i = (terkecil - 1);
  
    for (int j = terkecil; j <= terbesar - 1; j++) 
    { 
        if (array[j] < pivot) 
        { 
            i++;
            swap(&array[i], &array[j]); 
        } 
    } 
    swap(&array[i + 1], &array[terbesar]); 
    return (i + 1); 
} 
  
void quick_sort(int array[], int terkecil, int terbesar) 
{ 
    if (terkecil < terbesar) 
    { 
        int pi = p(array, terkecil, terbesar); 
        quick_sort(array, terkecil, pi - 1); 
        quick_sort(array, pi + 1, terbesar); 
    } 
}
