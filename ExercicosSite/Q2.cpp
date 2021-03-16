#include <iostream>

using namespace std;

void aproveitamento(float media){

	if (media < 4)

		cout << "APROVEITAMENTO E\n";

	else if ((media >= 4) && (media < 6))

		cout << "APROVEITAMENTO D\n";

	else if ((media >= 6) && (media < 7.5))

		cout << "APROVEITAMENTO C\n";

	else if ((media >= 7.5 ) && (media < 9))

		cout << "APROVEITAMENTO B\n";

	else 

		cout << "APROVEITAMENTO A\n";
		
	}

int main(){
	
	float nota[3], m, TotN = 0;

	for (int c = 1; c<=3; c++){

		cout << "Digite " << c << "o. nota: ";
		cin >> nota[c];
		TotN = TotN + nota[c];
	}
	cout << "--------------------\n";
	m = TotN/3;
	cout << "MEDIA FINAL: " << m << endl;
	aproveitamento(m);
}