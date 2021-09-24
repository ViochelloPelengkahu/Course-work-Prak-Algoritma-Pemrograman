#include<iostream>
using namespace std;
int main()
{ 
            // deklarasi variable x1 = 10, x2 = 20 dan m = 2 tipe data integer
            int x1=1,x2=10,m=2;
            // deklarasi variable tipe data boolean , berikan nama b1 dan b2 
            bool b1,b2;
            // berikan nilai variable b1 adalah perbandingan var x1 dan x2 (gunakan operator ==, contoh : x2==m)
            b1 = x1==x2;
      
            // berikan nilai variable b2 adalah var x1 lebih kecil dari x2 (gunakan operator < , contoh : x2<m)
            b2 = x1<x2;
        
            //tampilkan b1 dengan tampilan "b1 adalah =... "
    cout << "\n";
    cout << "b1 adalah  = " << b1 << "\n\n";
    cout << "b2 adalah  = " << b2 << "\n\n";
    
            // deklarasi var b3 tipe data boolean, nilainya true
      bool b3=1;
    if (b3)
             // tampikan "Benar" jangan lupa end of line
             cout << "Benar\n\n";
    else
        // tampikan "Salah" jangan lupa end of line
        cout << "Salah\n\n";
          
        // deklarasi variable x3 , berikan nilai false + 5*m - b3
        int x3= false+5*m-b3;
        //tampilkan nilai x3 dengan tampilan "Nilai x3 adalah ..."
        cout <<"Nilai x3 adalah " << x3;
      
return 0;
      
}
