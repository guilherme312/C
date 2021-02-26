#include <iostream>

  using namespace std;
  
int main(){

	int i, ano;
	cout << "Qual sua idade? ";
	cin >> i;
	if (i >= 18){
		ano = i - 18;
		cout << "Você já pode se alistar no exercito.\n";
	}else{
		ano = 18 - i;
		cout << "Ainda faltam " << ano << " anos para se alistar.\n";
	}
	cout << "Idade: " << i << " anos\n";
}
