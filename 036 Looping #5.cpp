#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    for(int a=1;a<=15;a++){
        cout << setw(3) << a << " " << a*a*a << endl;
    }
    return 0;
}
