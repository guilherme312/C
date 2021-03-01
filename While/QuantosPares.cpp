#include <iostream>

  using namespace std;
  

int main(){

	int C = 1, num;
	int par = 0, impar = 0;
	while (C<=20){
	  cout << "Digite " << C << "o. número: ";
	  cin >> num;
	  if (num % 2 == 0){
	    par = par + 1;
	  }else {
	    impar = impar + 1;
	  }
	  C++;
	}
	cout << "Foram digitados  " << par << " pares\n";
	cout << "Foram digitados " << impar << " ímpares\n";
	
}  
