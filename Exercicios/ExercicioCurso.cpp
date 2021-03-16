#include <iostream>

using namespace std;

int main(){
    int num, TotP = 0;
    for (int cont = 1; cont<=5; cont++){
        cout << "Digite " << cont << "o. número: ";
        cin >> num;
        if (num % 2 == 0){
            TotP++;
        }
    }
    cout << TotP << " valores pares\n";
}
