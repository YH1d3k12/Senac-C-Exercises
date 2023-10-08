#include <iostream>
using namespace std;

long int numero;

main(){
	system("chcp 65001");

	cout << "Informe um número e veja se ele é positivo ou negativo \n";
	cin >> numero;
	
	if (numero > 0) {
		cout << "Seu número é positivo";
	} else if (numero < 0) {
		cout << "Seu número é negativo";
	} else {
		cout << "Seu número é neutro";
	}
	
}
