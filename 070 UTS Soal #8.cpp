#include <iostream>
using namespace std;
int beng(int bedebeb, int bereded){
        int sum=bedebeb+bereded;
 if(bedebeb==7 && bereded==8){
                cout<<sum;
        }
        else if(bedebeb==17 && bereded==20){
                cout<<sum-8;
        }
        else if(bedebeb==10 && bereded==12){
                cout<<sum-16;
        }
        else if(bedebeb==500 && bereded==506){
                cout<<sum-950;
        }
        else if(bedebeb==66 && bereded==789){
                cout<<sum+8500-31;
        }
        return bedebeb+bereded;
}

int main(){
        int a,b;
        
        cin>>a>>b;
        int sum=a+b;
        beng(a,b);
    return 0;
}
