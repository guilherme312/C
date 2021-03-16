#include <iostream>

using namespace std;

int main(){
	
	int mat[12][12];
	int i;
	char resp;
	float TotM, TotS = 0;

	cout << "Digite qual será a linha somada/tirada media: ";
	cin >> i;
	cout << "Mêdia ou Soma? [s/m] ";
	cin >> resp;

	if (resp == 's'){
		cout << "Você escolheu soma!!!\n";
		for (int j = 1 ; j<=12 ; j++){

			cout << "Digite a matriz na pocisão ["<< i << "," << j << "] : ";
			cin >> mat[i][j];
			TotS = TotS + mat[i][j];
		}
		cout << "Resultado da soma: " << TotS << endl;
	}
	if (resp == 'm'){
		cout << "Você escolheu media!!!\n";
		for (int j = 1; j<=12; j++){

			cout << "Digite a matriz na pocisão ["<< i << "," << j << "] : ";
			cin >> mat[i][j];
			TotS = TotS + mat[i][j];
			TotM = TotS/12;
		}
		cout << "A media foi de " << TotM << endl;
	}

	return 0;
}