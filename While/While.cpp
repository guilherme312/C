#include <iostream>

  using namespace std;
  
int main(){

	int C = 0, num, sal;
	cout << "Quer contar até quanto? ";
	cin >> num;
	cout << "Qual vai ser o salto? ";
	cin >> sal;
	while (C<=num){
	  cout << " " << C;
	  C = C + sal;
	}
	
	cout << "\n";
}
