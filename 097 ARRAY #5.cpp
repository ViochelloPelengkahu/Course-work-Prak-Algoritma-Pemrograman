#include <iostream>
#include <array>
using namespace std;

int main(){
    // buat matriks 2 dimesnsi sebesar 3x3 berikan nilai 
    //6 7 3                                                                                             
    //1 3 5                                                                                             
    //8 4 9
    int vio[3][3] = {{6,7,3},{1,3,5},{8,4,9}};
    // tampikan isi matrix dengan for loops yang bercabang
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << vio[i][j] << " ";
        } cout << endl;
    }
    return 0;
}
