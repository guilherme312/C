#include <iostream>

using namespace std;

int main(){
	int i;
	char resp;
	do {
	  cout << "Qual sua idade? ";
	  cin >> i;
	  cout << "Quer continuar? [s/n] ";
	  cin >> resp;
	  cout << endl;
	}while(resp == 's');
}
