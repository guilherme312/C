#include <iostream>

using namespace std;

int soma (int x, int y){

	return x+y;
}

int main(){
	
	int a, b, s;

	cin >> a;
	cin >> b;
	s = soma(a, b);
	cout << a << " + " << b << " = " << s << endl; 
}