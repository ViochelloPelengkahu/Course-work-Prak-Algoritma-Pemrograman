#include<iostream> 
using namespace std; 

class Encapsulation  //buat kelas Encapsulation
{ 
    private:
        int x;
    public:
        void set(int a)
        {
            x=a;
        }
        
        int get()
        { 
            return x;
            
        }

}; 

// main function 
int main() 
{ 
	Encapsulation obj; //buat objek obj dari kelas Encapsulation
	
	obj.set(10);// panggil method set dari objek obj
	cout << obj.get();//panggil method get dan tampilakn ke konsol
	return 0;

}
