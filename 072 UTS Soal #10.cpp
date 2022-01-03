#include <iostream>  
using namespace std;  

int indexFibo(int n) {
    int ads = 0, asd = 1, are = 0, haha = 0, aming;
    if(n == 0) {
        return 1;
    }else{
        if(n != 3){
            aming = n - 2;
        } 
        for (int i = 1; i <= n; ++i)
        {
            if(i == 2) {asd; continue;}
            are = ads + asd;
            ads = asd;
            asd = are;
    
            if(i > aming) {
                haha = haha + are;
            }
        }
        return haha;
    }
}

int main() {  
    int number;
    cin >> number;
    cout << indexFibo(number);
    
    return 0;
}
