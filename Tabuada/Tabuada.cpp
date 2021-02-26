#include <iostream>
#include <cmath>

   using namespace std;

int main(){

	int num, mult;
	cout << "Qual tabuada quer ver? ";
	cin >> num;
	for (int i = 1; i<=10; i++){
	  mult = num * i;
   	  cout << num << " x " << i << " = " << mult << "\n";
	}
}

