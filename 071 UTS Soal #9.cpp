#include <iostream>
using namespace std;  
int kyayaya(int arigatoooogozaimasu);

int main(){
    int arigatoooogozaimasu;
    cout << "Masukan Angka = ";
    cin >> arigatoooogozaimasu;
    cout << kyayaya(arigatoooogozaimasu);
return 0;
}

int kyayaya(int arigatoooogozaimasu){
    int kwangya=1,juml=0;
    bool apahhh;
    while(kwangya<arigatoooogozaimasu){
        if(arigatoooogozaimasu%kwangya==0)
        juml=juml+kwangya;
        kwangya++;
    }
    if(juml==arigatoooogozaimasu)
        apahhh = true;
    else
        apahhh = false;
    return apahhh;
}
