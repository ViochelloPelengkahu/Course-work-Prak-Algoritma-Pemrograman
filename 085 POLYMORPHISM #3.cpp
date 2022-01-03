#include <iostream> 
using namespace std;
 
class Shape {
  // variable width height bertipe int, access modifier protected
 //buat konstruktor dengan 2 parameter width dan height, public
       // buat virtual function area, void
    protected:
    int width, height;// 
      
    public:
    Shape (int a, int b) {
        width = b;
        height = a;
    }
    virtual void area(){}
    
};
//buat kelas PersegiPanjang inheritance dari Shape
   //buat konstruktor, inheric dari parent classnya
      
       //buat method area, void, tanpa parameter
      // isi method  : Luas Persegi Panjang : (rumus luas persegi panjang yaitu panjang * lebar
class PersegiPanjang : public Shape {
    public:
    PersegiPanjang(int a, int b)
    : Shape(a, b) {
    }
    void area()
    {
        cout << "Luas Persegi Panjang : " << height*width << endl;
    }
};
//buat kelas Segitiga inheritance dari Shape
   //buat konstruktor, inheric dari parent classnya
      
       //buat method area, void, tanpa parameter
      // isi method  : Luas Segitiga : (rumus luas persegi panjang yaitu panjang * lebar
class Segitiga : public Shape {
    public:
    Segitiga(int a, int b)
    : Shape(a, b) {
    }
    void area()
    {
        cout << "Luas Segitiga : " << (height*width)/2 << endl;
    }
};


int main() {
    int a,b;
    Shape* shape;
    cin >> a >> b;
    
    PersegiPanjang PersegiPanjang(a,b);
    Segitiga Segitiga(a,b);
  
   shape = &PersegiPanjang;
   shape->area();
   shape = &Segitiga;
   shape->area();
   
   return 0;
}
