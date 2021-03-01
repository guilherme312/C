#include <iostream>

using namespace std;

int main(){
	//TODO
	int age = 15;
	
	try {
		if (age >= 18) {
			cout << "Access granted" << endl;
		}else {
			throw 101;
		}
	
	}catch (...){
		cout << "Acess denied" << endl;
	}
return 0;
}
