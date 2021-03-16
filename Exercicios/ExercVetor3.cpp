#include <iostream>

using namespace std;

int main(){
	
	float A[5];

	for (int i = 1; i<=5 ; i++){

		cin >> A[i];
	}
	for (int c = 1; c<=5; c++){

		if (A[c]<=10){

			cout << "A[" << c << "] = " << A[c] << endl;
		}
	}
}