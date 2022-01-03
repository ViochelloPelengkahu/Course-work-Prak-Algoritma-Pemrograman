#include <iostream>
using namespace std;
int fibo(int n) {
  if (n == 0 || n ==1){
    return n;
  } else {
    return (fibo(n-1) + fibo(n-2));
  }
}
int main() {
  
  int input,b = 0;
  cout << "Input : ";
  cin >> input;
  cout << "Fibonnaci Series: ";
  for (int i = 1; i <= input; i++){
    cout << fibo(b) << " ";
    b++;
  }
  return 0;
}
