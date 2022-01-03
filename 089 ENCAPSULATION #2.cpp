#include<iostream>
using namespace std;
 //buat kelas Encap2
 class Encap2{
//sembunyikan data num (int) dan ch (char)
private:
int num;
char ch;
public:
   //buat method getter untuk num, berikan nama getNum() dan getCh() untuk ch
   int getNum(){
       return num;
   }
   char getCh(){
       return ch;
   }
   //buat method setter untuk num, berikan nama setNum() dan setCh() untuk ch
   void setNum(int num) {
       this->num = num; 
   }
   void setCh(char ch){
       this->ch=ch;
   }
};
int main(){
    // buat objek obj dari kelas encap 2
    Encap2 obj;
   // set num ke 500
   obj.setNum(500);
   // set ch ke 'K'
   obj.setCh('K');
 // panggil Num dengan getter dan tampilkan ke konsol
 cout << obj.getNum() << endl;
 cout << obj.getCh();
   // panggil Ch dengan getter dan tampilkan ke konsol
   return 0;
}
