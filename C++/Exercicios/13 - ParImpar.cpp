#include <iostream>
using namespace std;

long int numero;

main(){
	system("chcp 65001");

	cout << "Informe um número e veja se ele é par ou impar \n";
	cin >> numero;
	
	if (numero%2 == 0) {
		cout << "O número é par";
	} else {
		cout << "O número é impar";
	}
	
}
