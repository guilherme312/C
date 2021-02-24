#include <iostream>
#include <cmath>

  using namespace std;
  
int main(){

	int a, b, c;
	cout << "LADO A: ";
	cin >> a;
	cout << "LADO B: ";
	cin >> b;
	cout << "LADO C: ";
	cin >> c;
	
	cout << "----------------------\n";
	
	if ((a == b) && (a == c) && (b == c))
	  cout << "TRIÂNGULOS EQUILÁTERO\n";
	    else if ((a != b) && (a != c) && (b != c))
	      cout << "TRÂNGULOS ESCALENO\n";
	 	else 
	 	  cout << "TRIÂNGULOS ÍSOCELES\n";
		
	cout << "----------------------\n";
}
