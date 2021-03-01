#include <iostream>

  using namespace std;
  
int main(){

	int i, f;
	cout << "Inicio: ";
	cin >> i;
	cout << "Fim: ";
	cin >> f;
	
	if (i<f)
	  for (int cont = i; cont<=f; cont++){
	     cout << " " << cont;
	  }
	else 
	  for (int cont = i; cont>=f; cont--){
	      cout << " " << cont;
	  }
	cout << "\n";
}
