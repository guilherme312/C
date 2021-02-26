#include <iostream>

  using namespace std;
  
int main(){

	int n1, n2, n3;
	n1 = 0;
	cout << n1 << "\n";
	n2 = 1;
	cout << n2 << "\n";
	for (int i = 3; i<=10; i++){
	   n3 = n1 + n2;
	   cout << n3 << "\n";
	   n1 = n2;
	   n2 = n3;
	}
}
