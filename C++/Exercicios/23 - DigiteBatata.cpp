#include <iostream>

using namespace std;

int numero;


main() {
	
	system("chcp 65001");
	
	do {
		cout << "Batata \n";
		cout << "\tDigite um número diferente de 1 para parar as batatas! \n";
		cin >> numero;

	} while (numero == 1);
		cout << "Obrigado!";
	
}