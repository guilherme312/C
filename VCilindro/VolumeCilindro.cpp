#include <iostream>

  using namespace std;
  
int main(){

	double r, h, vol;
	cout << "Qual raio do cilindro? ";
	cin >> r;
	cout << "Qual altura do cilindro? ";
	cin >> h;
	vol = 3.14 * (r*r) * h;
	cout << "O volume do cilindro é: " << vol << " m³\n";
} 
