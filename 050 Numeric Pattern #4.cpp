#include <iostream>
using namespace std;

int main(){
    int a;
    int l=0;
    a=4;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            cout << j;
            j+1;
        } cout << endl;
    }

    for(int i=a;i>=1;i--){
        for(int j=i;j>=1;j--){
            cout << i;
        } 
        cout << endl;
    }
    return 0;
}
