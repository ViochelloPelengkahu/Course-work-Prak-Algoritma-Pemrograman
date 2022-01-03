#include <iostream>
#include <array>
#include <iomanip>

using namespace std;
int main(){
	int vio[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			
			cin >> vio[i][j];
		}
	}
	cout << "Nilai dari Matrix adalah :\t";
	for(int a=0;a<3;a++){
		for(int b=0;b<3;b++){
			cout << vio[a][b] << " ";
		}cout << endl;
	}
return 0;
}
