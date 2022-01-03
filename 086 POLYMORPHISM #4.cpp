#include <iostream>
using namespace std;
class PrintData { //buat class printdata
  public:
  
    PrintData() {} //buat function dari class PrintData
    void printOutput(){ // buat Fungsi Overloading dengan nama printOutput, void
     // cetak tulisan Hello World
     cout << "Hello World" << endl;
    }
    void printOutput(string data){// buat Fungsi Overloading dengan nama printOutput(paramater bertipe string dengan nama data), void
      // cetak tulisan yang diambil dari parameter string(data)
      cout << data << endl;
    }
     void printOutput(int data){ // buat Fungsi Overloading dengan nama printOutput(paramater bertipe int dengan nama data), void
      // cetak tulisan yang diambil dari parameter int(data)
      cout << data << endl;
    }        
};
int main(){ // program utama int main
string a="12345";
int b=678910;
  PrintData print;//buat objek print dari class PrintData
  print.printOutput();//panggil objek print dan fungsi overloading printOutput yang pertama.
  print.printOutput(a);//panggil objek print dan fungsi overloading printOutput yang kedua diisi dengan nilai 12345
  print.printOutput(b);//panggil objek print dan fungsi overloading printOutput yang kedua diisi dengan nilai 678910
  return 0;
}
