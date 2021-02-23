#include <iostream>
#include <cmath>

 using namespace std;

int main(){

	int idade, nacs, ano;
	
	cout << "Em que ano você naceu: ";
	cin >> nacs;
	cout << "Qual ano atual: ";
	cin >> ano;
	
	idade = ano - nacs;
	cout << "Você terá em " << ano << " aprocimadamente " << idade << " anos." << endl;
	
}
