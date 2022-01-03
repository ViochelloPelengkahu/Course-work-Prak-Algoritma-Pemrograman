#include <iostream>
#include <string>
using namespace std;
int main(){
    int b;
    cout << "Masukan angka dari 1 sampai 99999 : "; cin >> b;
       switch(b){
        case 1 ... 9:
          cout << "Angka Satu digit" << endl;
          break;
        case 10 ... 99:
          cout << "Angka Dua digit" << endl;
          break;
        case 100 ... 999:
          cout << "Angka Tiga digit" << endl;
          break;
        case 1000 ... 9999:
          cout << "Angka Empat digit" << endl;
          break;
        case 10000 ... 99999:
          cout << "Angka Lima digit" << endl;
          break;
    }
 
    
    return 0;
}
