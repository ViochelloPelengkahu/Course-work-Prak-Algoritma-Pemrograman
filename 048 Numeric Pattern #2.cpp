#include <iostream>
using namespace std;

int main(){
    int a;
   cout << "Input = ";
   cin >> a;
   cout << "Output =\n";

    for(int i=1;i<=a;i++){
        for(int j=a;j>=i;j--){
            cout << i;
            i+1;
        } cout << endl;
    }

    return 0;
}
