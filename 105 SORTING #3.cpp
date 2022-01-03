#include<iostream>
using namespace std;

void swap(int *a, int *b);
void selectionSort(int array[], int n);
 
int main(){
    int a,b,c,d,e;
    b=6;
    int f[b];
    cout<<"SELECTION SORT"<<endl;
    cout<<"mengurutkan nilai dari besar ke kecil"<<endl<<endl;
    for(a=0;a<b;a++)
    {
        cout<<"Masukkan nilai: "<<a+1<<" : ";cin>>f[a]; //input 6 data
    }
    selectionSort(f,b);
    cout<<"\n Hasil setelah diurutkan: \n";
    //tampilkan hasil selection sort
    for(a=b-1;a>=0;a--){
        cout << f[a] <<endl;
    }
    
    return 0;
}
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selectionSort(int array[], int n){
    int i, j, smallindex;
 
    
    for (i = 0; i < n-1; i++)
    {
        
        smallindex = i;
        for (j = i+1; j < n; j++)
        if (array[j] < array[smallindex])
            smallindex = j;
 
        
        swap(&array[smallindex], &array[i]);
    }
}
