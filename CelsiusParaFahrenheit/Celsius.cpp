#include <iostream>
#include <cmath>

 using namespace std;
 
int main(){

	float F, c;
	cout << "Digite graus(°) em Ceulsius: ";
	cin >> c;
	
	F = (9 * c + 160) /5; //Formúla :-)
	cout << "A temperatura de " << c << "°C" << " para Fahrenheit " << F << "°F" << endl;
}
