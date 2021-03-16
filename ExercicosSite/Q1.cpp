#include <iostream>

using namespace std;

int main(){
	
	int mat[3][3], me;

	for (int l = 1; l<=3; l++){
		for (int c = 1; c<=3; c++){
			cout << "Digite a pocisão na matriz (" << l << "," << c << "): ";
			cin >> mat[l][c];
			
			if ((c == 1) && (l == 1)){
				me = mat[l][c];
				if (mat[l][c] < me){
					me = mat[l][c];
				}
			}
		}

	}
	cout << "Menor número da matriz: " << me << endl;
}