#include <iostream>

using namespace std;

int main(){
	
	int mat[12][12];
	char resp;
	float TotS, TotM;

	cout << "Soma ou Media do Triângulo Superior: ";
	cin >> resp;

	if (resp == 's'){
		for (int l = 0; l<12 ; l++){
			for (int c = l+1; c<12; c++){
				cout << "[" << l << "," << c << "] = ";
				cin >> mat[l][c];
				TotS = TotS + mat[l][c];
			}
		}
		cout << "Soma do Triângulo Superior " << TotS << endl;
	}
	if (resp == 'm'){

		for (int l = 0; l<12 ; l++){

			for (int c = l+1 ; c<12; c++){

				cout << "[" << l << "," << c << "] = ";
				cin >> mat[l][c];
				TotS = TotS + mat[l][c];
				TotM = TotS/12;
			}
		}
		cout << "A media do Triângulo Superior " << TotM << endl;
	}

return 0;
}