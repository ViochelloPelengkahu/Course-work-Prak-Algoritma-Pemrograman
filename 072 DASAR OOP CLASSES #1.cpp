#include <iostream>  
using namespace std;  

class Student{
    public :
    int id;
    string nama;
    
    
    
};

int main() {  
    Student s1;// buat objek s1 dari kelas Student   
    s1.id=201;// berikan nilai id.201    
    s1.nama="Jhon Doe";//berikan nilai pada nama "Jhon Doe"   
    cout << s1.id << endl;//tampilkan nilai id
    cout << s1.nama << endl;//tampilkan nilai nama
    //hasil akhir 201
    //            Jhon Doe
    return 0;  
}  
