#include <iostream>
#include <cmath>

  using namespace std;
  
int main(){

	float n1, n2, m, rec;
	string aluno;
	cout << "Nome: ";
	cin >> aluno;
	cout << "1o. Nota: ";
	cin >> n1;
	cout << "2o. Nota: ";
	cin >> n2;
	m = (n1+n2)/2;
	
	cout << "|------------------------------|\n";
	cout << "ALUNO " << aluno << "\n";
	cout << "|------------------------------|\n";
	if (m >= 7)
	  cout << "APROVADO\n";
	  else if ((m >= 5) && (m < 7)){ 
	    cout << "RECUPERAÇÃO\n";
	    cout << "Nota de recuperação? ";
	    cin >> rec;
	    if (rec >= 9)
	       cout << "###APROVADO###\n";
	    else 
	       cout << "REPROVADO TURURUUUU\n";
	       }
	   else 
	     cout << "REPROVADO\n";
	  cout << "|------------------------------|\n";
	  cout << "Média: " << m << "\n";	
}
