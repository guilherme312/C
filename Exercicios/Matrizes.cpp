#include <iostream>

using namespace std;

int main(){
	
 	int matriz[3][3];
 	
 	for (int l = 1; l<=3; l++){

 		for (int c = 1; c<=3; c++){
 			cout << "Digite a matriz da pocisão [" << l << "," << c << "]: ";
 			cin >> matriz[l][c];
 		}
 	}
 	cout << endl;
 	cout << "    Matriz   " << endl;
 	cout << "-------------" << endl;
 	for (int l = 1; l<=3 ; l++){

 		for (int c = 1; c<=3; c++){

 			cout << matriz[l][c] << "  ";
 		}
 		cout << endl;
 	}
 	return 0;
}
