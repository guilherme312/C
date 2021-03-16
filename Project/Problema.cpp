#include <iostream>

using namespace std;

int main(){

	int vetor[3];
	for (int cont = 1; cont<=3; cont++){
	  cout << "Digite três valores:  ";
	  cin >> vetor[cont];
	}
	if (vetor[1] > vetor[2])
	  cout << "Número " << vetor[1] << "é o maior número";
	  else if (vetor[2] > vetor[1])
	    cout << "Número " << vetor[2] << "é o maior número";	  
}
