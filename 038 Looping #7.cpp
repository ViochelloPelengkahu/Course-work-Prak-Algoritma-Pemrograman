#include <iostream>
using namespace std;

int main(){

int a;
	cout <<"Masukkan angka: ";
	cin >> a;
	
	int c=a;
	for(int b=a-1;b>=1;b--){
		c=c*b;
	}
	cout << c;
	return 0;
}
