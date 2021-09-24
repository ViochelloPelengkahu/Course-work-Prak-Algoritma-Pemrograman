#include <iostream>
#include <math.h>
using namespace std;

int kuadrat(int a,int b,int c){
    int x1,x2;
     int D=b*b-(4*a*c);

    if(D<0)
    {
        cout << "Nilai Imajiner" << endl;
    }
    else
        if(D>0)
        {
            x1=(-b+sqrt(D))/(2*a);
            x2=(-b-sqrt(D))/(2*a);
            cout << "Hasil quadratic equation adalah = " << x1 << endl;
            return x1;
        }
        else 
            if (D==0)
        {
            x1=x2=(-b+sqrt(D))/(2*a);
            cout << "Hasil quadratic equation adalah = " << x1 << endl;
            return x1;
        }
}

int main(){
    int a,b,c;
    cout << "Input a, b, c: ";
    cin >> a >> b >> c;
    kuadrat(a,b,c);
    return 0;
}
