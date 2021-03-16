#include <iostream>

using namespace std;

int main(){
	
	int X[5];
	int c = 1;

	for (; c<=5 ; c++){

		cout << c << "o. ";
		cin >> X[c];
	}
	for (int i = 1; i<=5 ; i++ ){

		cout << "X[" << i << "] = " << X[i] << endl;
	}
}