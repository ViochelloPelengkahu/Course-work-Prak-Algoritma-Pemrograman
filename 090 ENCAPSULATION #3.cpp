#include <iostream>
using namespace std;
//buat class remoteTV
class remoteTV{
protected: // gunakan access modifier untuk proteksi
  string tombolNo[10];//buat function tombolNo dengan tipe data string dan array berisi 10
public: //gunakan access modifier untuki getter & setternya
   void setTombolNo(int i, string value){// buat function setTombolNo dengan parameter int i, dan string value, void
      //set nilai parameter int i dan string value ke function tombolNo
      tombolNo[i] = value;
      
    }
    
string getTombolNo(int i){
        return tombolNo[i];
    //buat function getTombolNo dengan tipe string dan mengandung parameter int i
    // return nilai i ke dalam array function tombolNo
    }
};
int main(){ // program utama
    remoteTV tvSaya; //buat objek tvSaya dari class remoteTV
    tvSaya.setTombolNo(0,"Channel TVRI");//panggil objek tvSaya dan tentukan nilai function setTombolNo(0, "Channel TVRI")
    tvSaya.setTombolNo(1,"Channel Netflix");//panggil objek tvSaya dan tentukan nilai function setTombolNo(1, "Channel Netflix")
    tvSaya.setTombolNo(2,"Channel HBO");//panggil objek tvSaya dan tentukan nilai function setTombolNo(2, "Channel HBO")
    // tampilkan semua tulisan channel sesuai angkanya dengan memanggil objek tvSaya dan nilai dari function getTombolNo.
    cout<<tvSaya.getTombolNo(0)<<endl;
    cout<<tvSaya.getTombolNo(1)<<endl;
    cout<<tvSaya.getTombolNo(2)<<endl;
    return 0;
}
