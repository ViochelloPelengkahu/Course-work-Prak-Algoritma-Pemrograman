#include <iostream>
using namespace std;

int main(){
    
    long j,m,d;
    j=1;
    m=j*60;
    d=m*60;
    

    for(int a=1;a<=10;a++){
    	cout << j << " Jam " << j*60 << " Menit " << j*60*60 << " Detik\n";
    	j++;
    }
return 0;
}
