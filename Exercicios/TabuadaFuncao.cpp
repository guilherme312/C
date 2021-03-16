#include <iostream>

using namespace std;

void Tabuada (int x){
	
	int c = 1, m;
	for (; c<=10; c++){

		m = c * x;
		cout << c << " x " << x << " = " << m << endl;
	}
}

int main(){
	
	int num;

	cout << "Digite número tabuada: ";
	cin >> num;
	Tabuada(num);
}