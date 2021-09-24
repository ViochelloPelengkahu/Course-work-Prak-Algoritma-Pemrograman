#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout <<"Panjang dari char : " << sizeof(char) << " byte\n";
    cout <<"Panjang dari int : " << sizeof(int) << " bytes\n";
    cout <<"Panjang dari short int : " << sizeof(short int) << " bytes\n";
    cout <<"Panjang dari long int : " << sizeof(long int) << " bytes\n";
    cout <<"Panjang dari signed long int : " << sizeof(signed long int) << " bytes\n";
    cout <<"Panjang dari unsigned long int : " << sizeof(unsigned long int) << " bytes\n";
    cout <<"Panjang dari float : " << sizeof(float) << " bytes\n";
    cout <<"Panjang dari double : " << sizeof(double) << " bytes\n";
    cout <<"Panjang dari wchar_t : " << sizeof(wchar_t) << " bytes";
    return 0;
}
