#include <iostream>
using namespace std;

int main(){
    float a,b,c;
    cout << "Titik 1 = "; cin >> a;
    cout << "Titik 2 = "; cin >> b;
    if(a < 150){
    c=(b-a)/2;
    c=c+a;
    cout << "Titik Tengahnya adalah = " << c << endl;
    }else{ 
        cout << "Titik di Luar Jangkauan" << endl;
    }
    
    return 0;
}
