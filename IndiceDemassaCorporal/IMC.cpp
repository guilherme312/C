#include <iostream>

  using namespace std;
  
int main(){

	float imc, peso, alt;
	cout << "Qual seu peso? ";
	cin >> peso;
	cout << "Qual sua altura? ";
	cin >> alt;
	imc = peso/(alt*alt);
	
	if (imc < 17){
	  cout << "Muito abaixo do peso\n";
	}
	else if ((imc >= 17) && (imc < 18.49)){
	  cout << "Abaixo do peso\n";
	}
	else if ((imc >= 18.5) && (imc < 24.99)){
	  cout << "Peso normal\n";
	}
	else if((imc >= 25) && (imc < 34.99)){
	  cout << "Obesidade I\n";
	}
	else if ((imc >=35) && (imc < 39.99)){
	  cout << "Obesidade II - severa\n";
	}
	else{ 
	  cout << "Obesidade III - morbida\n";
	}
	cout << "IMC: "<< imc << "\n";
}
