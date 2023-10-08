#include <iostream>

using namespace std;

int ano;


main() {
	system("chcp 65001");
	
	cout << "\n\tInforme um ano é veja se ele é um ano bissexto\n\n";
	cin >> ano;
	
	if (ano % 4 == 0) {
		cout << ano << " É um ano bissexto\n";
	} else {
		cout << ano << " Não é um ano bissexto\n";
	}
	

}