#include <iostream>
using namespace std;
int vio;
void Rekursif(int vio){
	cout << "angka adalah = " << vio << endl;
	vio++;
	if (vio <10){
		Rekursif(vio);
	}
}
int main(){
	vio = 0;
	Rekursif(vio);

	return 0;
}
