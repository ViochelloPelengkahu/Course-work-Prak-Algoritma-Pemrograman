#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a;long b;char c;float d;double e;
    cout << "Input : "; cin >> a >> b >> c>> d>> e;
    cout << "Output : " << endl;
    cout << a << "\n";
    cout << b << "\n"; 
    cout << c << "\n";
    cout << fixed << setprecision(3) << d << "\n";
    cout << fixed << setprecision(9) << e << "\n";
    
    return 0;
}
