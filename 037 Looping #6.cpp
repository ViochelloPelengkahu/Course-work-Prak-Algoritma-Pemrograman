#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Masukkan bilangan Ganjil/Genap: ";
    cin >> a;
    for(int b=1;b<=10;b++){
        cout << a << " ";
        a+=2;
    }
    return 0;
}
