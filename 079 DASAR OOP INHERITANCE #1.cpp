#include <bits/stdc++.h> 
using namespace std; 
  
//Base class 
class Parent { 
    public: 
      int id_p; 
}; 
   
class Child : public Parent // tulis kode anda berikan nama child class yg diturunkan dari parent class
{
    public:
        int id_c; // didalamnya ada access modifier public yg ada data member id_c bertipe integer
        
    };
  
//main function 
int main()  
   { 
       
        Child obj1;//buat objek obj1 dari kelas Child anda 
           
        obj1.id_c = 7;// berikan nilai 7 pada data member id_c ; 
        obj1.id_p = 91;// berikan nilai 91 pada data member ic_p yang dari  parent class 
        cout << "Child id adalah " <<  obj1.id_c << endl; //tampilkan nilai id child class (id_c)
        cout << "Parent id adalah " <<  obj1.id_p << endl;//tampilkan nilai id parent class (id_c), liat contoh diatas
          
        return 0; 
   }
