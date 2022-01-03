#include <iostream>
using namespace std;
int faktorialvio(int a){
	if (a==1)
		return(a);
		else{
		return (a*faktorialvio(a-1));
}
}
int main(){
    int num;
   cout<<"Masukan Angka : ";
   cin>>num;
   cout << "Nilai Faktorial dari angka : "<< faktorialvio(num);
   return 0;
}
