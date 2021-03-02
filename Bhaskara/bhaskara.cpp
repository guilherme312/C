#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	float a, b, c;
	float delta, x1, x2;
	cout << "ax² + bx + c = 0\n";
	cout << "x² ==> ";
	cin >> a;
	cout << "bx ==> ";
	cin >> b;
	cout << "c ==> ";
	cin >> c;
	
	delta = b*b-4*a*c;
	x1 = -b + sqrt (delta) / 2*a;
	x2 = -b - sqrt (delta) / 2*a;
	
	cout << "x1 = " << x1 << endl;
	cout << "x2 = " << x2 << endl;
	cout << "Valor de delta: " << delta << endl; 
}
