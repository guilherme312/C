#include <iostream>
#include <cmath>

  using namespace std;
  
int main(){

	cout << "-----------\n";
	cout << "AUTO ESCOLA\n";
	cout << "-----------\n";
	
	int ano, nacs, idade;
	cout << "Digite o ano de nacimento -> ";
	cin >> nacs;
	cout << "Digite ano atual -> ";
	cin >> ano;
	idade = ano - nacs;
	
	cout << "---------------------------------\n";
	if (idade >= 18){
		cout << "STATUS : ABTO A TIRAR CARTEIRA\n";
	}else{
		cout << "STATUS : INABTO A TIRAR CARTEIRA\n";
	}
	cout << "IDADE : " << idade << " anos" << endl;
	cout << "---------------------------------\n";
}
