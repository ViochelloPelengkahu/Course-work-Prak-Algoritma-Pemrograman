#include <iostream>
#include <array>
#include <iomanip>

using namespace std;
int main(){
	int vioA[2][2]= {{1,2},{3,4}};
	int vioB[2][2]= {{5,6},{7,8}};
	cout << "Matriks A + Matriks B :\n";
	for(int a=0;a<2;a++){
		for(int b=0;b<2;b++){
			cout << vioA[a][b] + vioB[a][b] << " ";
		}cout << endl;
	}
return 0;
}
