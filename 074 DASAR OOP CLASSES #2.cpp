#include <iostream>  
using namespace std;  
class Student {  
   public:  
       int id;
       string nama;// deklarasi data member (instance variable untuk nama)    
       void insert(int i, string n) //method insert dengan 2 return value    
        {    
            id = i;
            nama = n;//tulis kode untuk n    
        }    
       void display(){
        cout << id << " " << nama << endl;
       }
};  
int main(void) {  
    Student s1;  
   Student s2;
    s2.insert(201,"Alice");
    s1.insert(202,"Bob");//panggil method insert pada objek s1, masukan 202 dan "Bob"
    s2.display();
   s1.display();
    
}  
