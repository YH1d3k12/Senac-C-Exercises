#include <iostream>
using namespace std;

int numero;

main(){
	system("chcp 65001");

	cout << "\n\t Digite um número e veja se ele é par ou impar \n";
	cin >> numero;
	
	if (numero % 2 == 0) {
		cout << "\n\t O número é par";
	} else {
		cout << "\n\t O número é impar";
	}

}