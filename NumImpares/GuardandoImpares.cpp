#include <iostream>
#include <cmath>

  using namespace std;
  
int main(){

	int cont;
	cout << "Quer contar até quanto? ";
	cin >> cont;
	for (int i = 1;i<=cont;i++){
		if (i % 2 != 0){
			cout << "->";
   }
   	cout << i << "\n";
  }
   	cout << "Fim...\n";
   	cout << "'->' Impares\n";
}
