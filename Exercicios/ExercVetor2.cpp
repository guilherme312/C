#include <iostream>

using namespace std;

int main(){
	
	int v;
	int N[10];
	int aux = 1;

	cin >> v;
	if (v<=50){
		N[0] = v;
		cout << "N[0] = " << v << endl;

		for (int i = 1; i<10; i++){

			N[i] = aux * 2;
			aux = N[i];
			cout << "N[" << i << "] = " << N[i] << endl;
		}
	}else {

		cout << "ERRO: Valor muito alto." << endl;
	}
	return 0;
}