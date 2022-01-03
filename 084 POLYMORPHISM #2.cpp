#include<iostream> 
using namespace std; 

//buat kelas Complex
 // deklarasi variable real dan imag dengan access modified private
class Complex {
    private:
        int real, imag;
    public: 
	    Complex(int r = 0, int i =0) {real = r; imag = i;} 
	// overloading operator + dengan panggil kelas complex , buat konstanta dari yang menunjuk ke pointer dari obj
		// buat objek res dari kelas compleks
	//panggil data member real dari objek res dengan menambahkan member real dan obj.real
	 //panggil data member real dari objek res dengan menambahkan member imag dan obj.real
	 // kembalikan objek res
    Complex operator +(Complex const &obj){
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
     // buat method print dengan menampilkan member real di concat dengan "+" tampilkan member imad diconcat dengan "i" sehingga menghasilkan contoh "10+5i"
    void print () {
        cout << real << " + " << imag << "i" << endl;
    }
   
}; 

int main() 
{ 
    Complex c1(10,5), c2(2,4);
    Complex c3 = c1 + c2;
    c3.print();
	// buat objek c1 dan c2 , berikan return value 12 untuk c1 dan 4 untuk c2
	 // buat objek c3 dengan panggil operator overloading c3 dengan menambahkan c1 dan c2
	 // panggil method print untuk mencetak ke konsol dari objek c3
}
