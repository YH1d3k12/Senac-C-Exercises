#include <iostream>

// Resolvendo este problema com switch case em vez de if 

using namespace std;

int numero;

main() {
	system("chcp 65001");
	
	cout << "\n\t Informe um número e veja se ele é par ou impar usando switch case!\n";
	cin >> numero;
	
	switch (numero % 2){
		case 0:
			cout << "\nO número " << numero << " é par!\n";
			break;
			
		case 1:
			cout << "\nO número " << numero << " é impar!\n";
			break;
	}

}