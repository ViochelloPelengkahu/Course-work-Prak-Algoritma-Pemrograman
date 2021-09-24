#include <iostream>

using namespace std;

int main(){
    int a;
    int l=0;
    a=10;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a;j++){
            cout << (j*i);

        } 
        cout << endl;
    }
    return 0;
}
