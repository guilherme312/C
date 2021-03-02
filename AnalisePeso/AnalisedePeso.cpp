#include <iostream>

using namespace std;

int main(){

	float peso;
	string s;
	float ma, hcem, TotMas, TotFem, Med;
	
	for (int c = 1; c<=8; c++){
	
	  cout << "Digite seu peso? ";
      	  cin >> peso;
	  cout << "Sexo [M/F] ";
	  cin >> s;
		
	  if (s == "M"){
	    if (peso > ma){
	      ma = peso;
	    }
	  }
	  if (peso >= 100){
	    hcem = hcem + 1;
	  }
	  if (s == "F"){
	    TotMas = TotMas + peso;
	    TotFem = TotFem + 1;
	  }
	}
	
	Med = TotMas/TotFem;
	cout << "===============\n";
	cout << "RESULTADO FINAL\n";
	cout << "===============\n";
	cout << "Total de Mulheres cadastradas: " << TotFem << endl;
	cout << "Homens com + de 100kg: " << hcem << endl;
	cout << "A média de peso mulheres das " << Med << "kg\n";
	cout << "Maior peso entre homens " << ma << "kg\n";
}
