#include <iostream>

using namespace std;

int main(){

	int num, TotP = 0, TotI = 0;
	for (int c = 1; c<=10; c++){
	  cout << "Digite ==> ";
	  cin >> num;
	  if (num % 2 == 0){
	    TotP = TotP + num;
	  }else {
	    TotI = TotI + num;
	  }
	}
	cout << "Total de Pares: " << TotP << endl;
	cout << "Total de Ímpares: " << TotI << endl;
}
