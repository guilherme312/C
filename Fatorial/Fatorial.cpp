#include <iostream>

using namespace std;

int main(){

	int num;
	long double fat = 1;
	cout << "Fatorial ==> ";
	cin >> num;
	cout << num << "! = ";
	for (int c = num;c>=1;c--){
	  fat = fat * c;
	}
	cout << fat << endl;
}
