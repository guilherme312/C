#include <iostream>
#include <cmath>

  using namespace std;
  
int main(){

	int i = 1;
	int num, ma;
	for (int a = 5;i<=a;i++){
		cout << "Digite " << i << "o. número: ";
	 	cin >> num;
	 	if (num > ma){
	 	  ma = num;		
	  }
	}
	cout << "Maior número digitado foi: " << ma << endl;
}
