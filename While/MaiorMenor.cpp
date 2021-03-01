#include <iostream>

  using namespace std;
  
int main(){

	int num, C = 1;
	int ma, m;
	while (C<=4){
	  cout << "Digite ==> ";
	  cin >> num;
	  C++;
	  if (C == 1){
	    ma = num;
	    m = num;
	  }
	  else if (num > ma){
	    ma = num;
	  }
	  else if (num < m) {
	    m = num;
	  }
	}
	cout << "Maior = " << ma << "\n";
	cout << "Menor = " << m << "\n";
}
