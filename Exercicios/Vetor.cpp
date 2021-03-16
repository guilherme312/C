#include <iostream>

using namespace std;

int main(){

	int vet[5];
	int TotP[5], TotI[5];
	int aux = 1, aux1 = 1;
	
	for (int c = 1; c<=5 ; c++){
	  cout << "Digite um número: ";
	  cin >> vet[c];
	  if (vet[c] % 2 == 0){
	    TotP[c] = vet[c];
	    aux = aux + 1;
	  }else {
	    TotI[c] = vet[c];
	    aux1 = aux1 + 1;
	  }
	}	
	cout << "*** Números Pares digitados ***\n";
	for (int c = 1; c<=aux; c++){
	  cout << TotP[c] << "  ";
	}
	cout << endl;
	cout << "*** Números Ímpares digitados ***\n";
	for (int c = 1; c<=aux1; c++){
	  cout << TotI[c] << "  ";
	}
	cout << endl;
}
