#include <iostream>
#include <cmath>

  using namespace std;
  
int main(){

	float alt, r, tam;
	cout << "Qual altura da lata de óleo: ";
	cin >> alt;
	cout << "Qual o raio: ";
	cin >> r;
	
	tam = 3.14 * r * alt;
	cout << "Volume da lata é de: " << tam << "m³" << endl;
}
