#include <iostream>

using namespace std;

/*Programa Simples*/

int main(){

	cout << "================\n";
	cout << "|  M  E  N  U  |\n";
	cout << "================\n";
	
	cout << "================\n";
	cout << "[1] 1 até 10\n";
	cout << "[2] 10 até 1\n";
	cout << "[3] Sair\n";
	cout << "================\n";
	
	int num;
	cin >> num;
	
	switch (num){
	
	  case 1:
	    for (int i = 1;i<=10;i++){
	      cout << " " << i << endl;
	    }
	  break;
	  
	  case 2:
	    for (int i = 10;i>=1;i--){
	      cout << " " << i << endl;
	    }
	  break;
	  
	  case 3:
	    cout << "Saindo...\n";
	  break;
	}	
}
