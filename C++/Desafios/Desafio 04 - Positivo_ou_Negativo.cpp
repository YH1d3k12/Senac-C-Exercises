#include <iostream>
using namespace std;

long int numero;

main(){
	system("chcp 65001");

	cout << "\n\t Digite um número e veja se ele é positivo ou negativo \n";
	cin >> numero;
	
	if (numero > 0) {
		cout << "\n\t O número é positivo";
	} else if (numero < 0){
		cout << "\n\t O número é negativo";
	} else {
		cout << "\n\t O número é neutro";
	}

}