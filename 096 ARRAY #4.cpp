#include <iostream>
#include <array>
#include <iomanip>

using namespace std;
int main(){
	array<float , 10>tinggi = {165,157,171,181,156,166,167,172,154,162};
	float a=0;
	for(int i=0;i<tinggi.size();i++){
		a=a+tinggi[i];
	}
	cout <<"Rata-rata tinggi badan: "<<  fixed << setprecision(2) << a/10;
}
