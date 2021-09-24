#include <iostream>
using namespace std;

int main(){
    int a;
    int l=0;
    a=5;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            cout << j;
            j+1;
        } cout << endl;
    }

    return 0;
}
