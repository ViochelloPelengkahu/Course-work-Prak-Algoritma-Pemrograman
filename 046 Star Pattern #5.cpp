#include <iostream>
using namespace std;

int main(){
	int a;
	cout << "Input = "; 
	cin >> a;
	cout << "Output =\n";

   for(int i=1;i<=a;i++){
        for(int j=a;j>i;j--){
        cout << " ";
    }
    for(int k=1;k<=(2*i-1);k++){
        cout << "*";
    } cout << endl;
}
   return 0;
 }
