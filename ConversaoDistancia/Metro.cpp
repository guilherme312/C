#include <iostream>
#include <cmath>

  using namespace std;
  
int main(){

	float m, dm, cm, mm;
	cout << "Digite o valor em metros? ";
	cin >> m;
	
	dm = m*10;
	cm = dm*10;
	mm = cm*10;
	
	cout << m << " m equivale\n";
	cout << dm << " dm\n";
	cout << cm << " cm\n";
	cout << mm << " mm\n";
}
