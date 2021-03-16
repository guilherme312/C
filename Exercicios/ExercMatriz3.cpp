#include <iostream>

using namespace std;

int main(){
	
	int mat[12][12];
	char resp;
	float TotS;

	cout << "Soma ou Mêdia [s/m] ";
	cin >> resp;

	if (resp == 's'){

		for (int l = 1; l<12; l++){

			for (int c = 1; c<10; c++){

				cout << "[" << l << "," << c << "] = ";
				cin >> mat[l][c];
				TotS = TotS + mat[l][c];
			}
		}
		cout << "Soma " << TotS << endl;
	}
}