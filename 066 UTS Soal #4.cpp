#include <iostream>
using namespace std;

int x(int bil, int i);
int y(int bil);

int main(){
	
	int bil;
	cout<<"Input Bilangan : ";
	cin>>bil;

	if (y(bil)){
		cout << bil <<" Adalah bilangan prima"<<endl;
	}else {
		cout << bil << " Bukan Bilangan Prima"<<endl;
	}
	return 0;
} 
int x(int bil, int i){ 
	if (i == 1) { 
		return 1; 
	} 
	else if (bil % i == 0) { 
		return 1 + x(bil, --i); 
		} else { 
		return 0 + x(bil, --i); 
	} 
}
int y(int bil){ 
	if (bil > 1) { 
		return (x(bil, bil) == 2);
	} 
	else 
		return 1; 
}
