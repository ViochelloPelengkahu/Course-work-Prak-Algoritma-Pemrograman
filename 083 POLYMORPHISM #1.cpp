#include <bits/stdc++.h> 
  
using namespace std; 
class Geeks 
{ 
    public: 
      int x;
      double y;
    // tulis method func dengan 1 parameter bertipe int (x)
   int funct(int x){
       return x;
   }
      
    // tulis method func dengan 1 parameter bertipe double (x)
    double funct(double x){
        return x;
    }
      
    // tulis method func dengan 2 parameter bertipe double (x dan y)
    void funct(int x, double y){
       cout << x << "," << y;
   }
}; 
  
int main() { 
      
    //buat objek obj1 dari kelas Geeks
      Geeks obj1;
    //panggil method func dari kelas geeks yg bertipe integer, berikan nilai 7
      int a=7;
     cout << "nilai dari x adalah " << obj1.funct(a) << endl;
    //panggil method func dari kelas geeks yg bertipe double, berikan nilai 9.132
    double b=9.132;
    // The second 'func' is called 
  cout << "nilai dari x adalah " << obj1.funct(b) << endl;
    //panggil method func dari kelas geeks yg bertipe int dengan 2 parameter, berikan nilai x=85 dan y=64
   cout << "nilai dari x dan y adalah ";
   obj1.funct(a=85,b=64);
   
    return 0; 
}  
