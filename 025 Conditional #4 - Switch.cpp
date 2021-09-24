#include <iostream>
using namespace std;

int main(){
char b;
cout << "Hari ke: ";
cin >> b;
switch(b){
		case '1':
			cout << "Hari ke 1 adalah Senin";
			break;
		case '2':
			cout << "Hari ke 2 adalah Selasa";
			break;
		case '3':
			cout << "Hari ke 3 adalah Rabu";
			break;
		case '4':
			cout << "Hari ke 4 adalah Kamis";
			break;
		case '5':
			cout << "Hari ke 5 adalah Jumat";
			break;
		case '6':
			cout << "Hari ke 6 adalah Sabtu";
			break;
		case '7':
			cout << "Hari ke 7 adalah Minggu";
			break;
	} 
return 0;
}
