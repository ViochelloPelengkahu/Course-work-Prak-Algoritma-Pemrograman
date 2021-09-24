// declaring functions prototypes
#include <iostream>
using namespace std;

void odd(int x);
void even(int x);

int main()
{
  int i;
  do {
    cout << "Masukan angka (0 untuk keluar): ";
    cin >> i;
    odd (i);
    i=i-i;
  } while (i!=0);
  return 0;
}

void odd (int x)
{
    if(x%2==0){
        cout << "Bilangan Genap !!" << endl;
    }else{ cout << "Bilangan Ganjil !!" << endl;
}
}
void even (int x)
{
  x= x*0;
}
