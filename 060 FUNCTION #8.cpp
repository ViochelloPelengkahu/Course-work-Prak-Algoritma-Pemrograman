#include <iostream>
using namespace std;

int bagejo(int bil, int i);
  
int mana2(int bil);

int main(){
	
	int bil;
	cout<<"Cek Angka : ";
	cin>>bil;

	if (mana2(bil)){
		cout<<"Bilangan yang anda masukan Bilangan Prima"<<endl;
	}else {
		cout<<"Bukan Bilangan Prima"<<endl;
	}
	return 0;
} 
int bagejo(int bil, int i){ 
	if (i == 1) { 
		return 1; 
	} 
	else if (bil % i == 0) { 
		return 1 + bagejo(bil, --i); 
		} else { 
		return 0 + bagejo(bil, --i); 
	} 
}
int mana2(int bil){ 
	if (bil > 1) { 
		return (bagejo(bil, bil) == 2);
	} 
	else 
		return false; 
}
